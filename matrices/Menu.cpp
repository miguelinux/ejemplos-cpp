#include "Menu.h"

Menu::Menu() {
  bSalir=false;
}

void Menu::menu() {
  std::cout << std::endl << std::endl;
  std::cout << "\t\tMultiplicación de matrices\n" << std::endl;
  std::cout << " 1. Definir tamaños de matrices\n";
  std::cout << " 2. Introducir valores de las matrices\n";
  std::cout << " 3. Mostrar las matrices\n";
  std::cout << " 4. Multiplicar las matrices\n";
  std::cout << " 5. Salir\n";
  std::cout << std::endl << std::endl;
  std::cout << " opción: ";
}

char Menu::imprimir() {
  do {
    menu();
    std::cin.getline(opcion,20);
  } while(opcion[0]<'1' && opcion[0]>'5');
  if (opcion[0]=='5') bSalir=true;
  return (opcion[0]);
}

bool Menu::salir() {
  return (bSalir);
}

