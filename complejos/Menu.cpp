#include "Menu.h"

Menu::Menu() {
  bSalir=false;
}

void Menu::menu() {
  std::cout << std::endl << std::endl;
  std::cout << "\t\tCalculadora de números complejos\n" << std::endl;
  std::cout << " 1. Definir los números complejos\n";
  std::cout << " 2. Conjugado de los complejos\n";
  std::cout << " 3. Sumar los complejos\n";
  std::cout << " 4. Restar los complejos\n";
  std::cout << " 5. Multiplicar los complejos\n";
  std::cout << " 6. Dividir los complejos\n";
  std::cout << " 7. Representación polar\n";
  std::cout << " 8. Salir\n";
  std::cout << std::endl << std::endl;
  std::cout << " opción: ";
}

char Menu::imprimir() {
  do {
    menu();
    std::cin.getline(opcion,20);
  } while(opcion[0]<'1' && opcion[0]>'8');
  if (opcion[0]=='8') bSalir=true;
  return (opcion[0]);
}

bool Menu::salir() {
  return (bSalir);
}

