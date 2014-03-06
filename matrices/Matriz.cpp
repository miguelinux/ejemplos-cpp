#include "Matriz.h"

Matriz::Matriz(){
  filas=0;
  columnas=0;
  datos=NULL;
}

Matriz::Matriz(unsigned short f, unsigned short c){
  unsigned short row, col;
  filas=f;
  columnas=c;

  datos=new float *[filas];

  for(row=0; row < filas; row++) {
    datos[row] = new float [columnas];
    for(col=0; col < columnas; col++) {
      datos[row][col] = 0.0f;
    }
  }
}

Matriz::~Matriz() {
  borrar();
}

void Matriz::borrar() {
  unsigned short row;
  for(row=0; row < filas; row++) {
    delete [] datos[row];
  }
  delete [] datos;
  datos=NULL;
}

void Matriz::init(unsigned short f, unsigned short c){
  unsigned short row, col;

  if(datos!=NULL) borrar();

  filas=f;
  columnas=c;


  datos=new float *[filas];

  for(row=0; row < filas; row++) {
    datos[row] = new float [columnas];
    for(col=0; col < columnas; col++) {
      datos[row][col] = 0.0f;
    }
  }
}

inline unsigned short Matriz::dameColumnas(){
  return columnas;
}

inline unsigned short Matriz::dameFilas(){
  return filas;
}

float * Matriz::operator[](const int i){
  return datos[i];
}

Matriz Matriz::operator*(Matriz &m2){
  unsigned short filas, columnas, interno;
  Matriz resultado;

  if( this->dameColumnas() != m2.dameFilas() ) {
    return resultado;
  }

  resultado.init( this->dameFilas(), m2.dameColumnas() );

  for(filas=0; filas < this->dameFilas(); filas++) {
    for(columnas=0; columnas < m2.dameColumnas(); columnas++) {
      for(interno=0; interno < this->dameColumnas(); interno++) {
	resultado[filas][columnas] += datos[filas][interno] * m2[interno][columnas];
      }
    }
  }
  return resultado;
}

Matriz &Matriz::operator=(Matriz m){
  if(datos!=NULL) {
    borrar();
  }
  if(datos==NULL) {
    init(m.dameFilas(), m.dameColumnas());
  }

  if (filas == m.dameFilas() && columnas == m.dameColumnas() ){
    for(unsigned short f=0;f<filas;f++){
      for(unsigned short c=0;c<columnas;c++){
	datos[f][c] = m[f][c];
      }
    }
  }
  
  return *this;
}

std::ostream &operator<<(std::ostream &out, Matriz &m){
  unsigned short filas, columnas;
  for(filas=0; filas < m.dameFilas(); filas++) {
    out << "[ ";
    for(columnas=0; columnas < m.dameColumnas(); columnas++) {
	out << m[filas][columnas] << " ";
    }
    out << "]\n";
  }
  return out;
}

