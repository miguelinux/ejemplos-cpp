#include <cstdio>
#include <cstring>
#include "Directorio.h"
/**
 * @file Directorio.cpp
 * Aqui se implenentan los métodos del Objeto Directorio.
 */

Directorio::Directorio() {
  sArchivo="direct.csv";
  fEscribe.open("direct.csv", std::ios::out | std::ios::app );
  fLee.open("direct.csv");
}

Directorio::Directorio(const char *arch) {
  sArchivo=arch;
  fEscribe.open(arch, std::ios::out | std::ios::app );
  fLee.open( arch );
}

Directorio::~Directorio() {
  fEscribe.close();
  fLee.close();
}

const char  *Directorio::nombreArch() {
return sArchivo.c_str();
}
  
void Directorio::guarda(Campos cam) {
  fEscribe.seekp(0, std::ios::end);
  fEscribe << cam.sNombre << ",";
  fEscribe << cam.sDireccion << ",";
  fEscribe << cam.sTelefono << ",";
  fEscribe << cam.sEMail << std::endl;
  fEscribe.flush();
}

bool Directorio::fda() {
  return fLee.eof();
}

void Directorio::inicio() {
  fLee.clear();  // Limpia el estado de la bandera del archivo
  fLee.seekg(0);
}

Campos Directorio::lee() {
  char registro[251];
  char numeroCampo = 1;
  short longitud;

  fLee.getline(registro,251);

  longitud = std::strlen(registro);

  campos.sNombre = "";
  campos.sDireccion = "";
  campos.sTelefono = "";
  campos.sEMail = "";

  for(short letra=0; letra<longitud; letra++) {
    if(registro[letra]==',') {
	numeroCampo++;
	continue;
    }
    switch(numeroCampo) {
      case 1: // Nombre
	      campos.sNombre += registro[letra];
	      break;
      case 2: // Dirección
	      campos.sDireccion += registro[letra];
	      break;
      case 3: // Telefono
	      campos.sTelefono += registro[letra];
	      break;
      case 4: // E-mail
	      campos.sEMail += registro[letra];
	      break;
    }
  }
  return campos;
}

bool Directorio::borra(const char *nombre) {
  Directorio *fTemp;
  bool regresa=false;
  fTemp = new Directorio("temporal.dir");
  inicio();
  while( !fLee.eof() ) {
    lee();
    if( !fLee.eof() ) {
      if ( std::strcmp( nombre, campos.sNombre.c_str() ) ) {
	      fTemp->guarda( campos );
      }
      else {
	      regresa=true;
      }
    }
  }
  delete fTemp;

  fEscribe.close();
  fLee.close();

  // Borro el anterior respaldo
  std::remove( "respaldo.csv" ); 
  // Respaldo al actual archivo
  std::rename( sArchivo.c_str(), "respaldo.csv" );
  // Renombro el temporal por el directorio
  std::rename( "temporal.dir", sArchivo.c_str() );

  fEscribe.open(sArchivo.c_str(), std::ios::out | std::ios::app );
  fLee.open( sArchivo.c_str() );

  return regresa; 
}

