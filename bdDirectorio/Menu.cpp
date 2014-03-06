#include "Menu.h"

Menu::Menu() {
  bSalir=false;
}

void Menu::menu() {
  std::cout << std::endl << std::endl;
  std::cout << "\t\tDirectorio Telefonico\t\t(" << sNombreArch << ")" << std::endl << std::endl;
  std::cout << " 1. Altas al directorio\n";
  std::cout << " 2. Bajas al directorio\n";
  std::cout << " 3. Consulta del directorio\n";
  std::cout << " 4. Salir\n";
  std::cout << std::endl << std::endl;
  std::cout << " opción: ";
}

char Menu::imprimir() {
  do {
    menu();
    std::cin.getline(opcion,20);
  } while(opcion[0]<'1' && opcion[0]>'4');
  if (opcion[0]=='4') bSalir=true;
  return (opcion[0]);
}

bool Menu::salir() {
  return (bSalir);
}

void Menu::asignaArchiv(const char *sNom) {
  std::strcpy(sNombreArch,sNom);
}

