#include <iostream>
#include "Menu.h"
#include "Directorio.h"

/**
 * @file principal.cpp
 * Archivo que contiene el programa principal.
 * Aqui esta la función main de C++.
 */

int main() {

  Menu menu;
  Directorio dir;
  Campos cam;
  char cadena[51];
  menu.asignaArchiv( dir.nombreArch() );

  do {
    switch(menu.imprimir()) {
      case '1':
	      std::cout << "\n\nNombre: ";
	      std::cin.getline(cadena,51);
	      cam.sNombre=cadena;

	      std::cout << "Dirección: ";
	      std::cin.getline(cadena,51);
	      cam.sDireccion=cadena;

	      std::cout << "Telefono: ";
	      std::cin.getline(cadena,51);
	      cam.sTelefono=cadena;

	      std::cout << "Correo electronico: ";
	      std::cin.getline(cadena,51);
	      cam.sEMail=cadena;

	      dir.guarda(cam);

	      break;
      case '2':
	      std::cout << "\n\nEscribe el nombre que quieres borrar: ";
	      std::cin.getline(cadena,51);
	      if (dir.borra(cadena) ){
	        std::cout << "\nRegistro Borrado\n";
	      }
	      else {
	        std::cout << "\nRegistro No encontrado.\n";
	      }
	      std::cin.get();
	      break;
      case '3':
	      dir.inicio();
	      while(!dir.fda()) {
		cam = dir.lee();
		if (!dir.fda()) {
		  std::cout << cam << std::endl;
	          std::cin.get();
		}
	      }
	      break;
    }
  } while(!menu.salir());

  return 0;
}

