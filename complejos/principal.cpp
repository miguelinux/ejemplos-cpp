#include <iostream>
#include "Menu.h"
#include "Complejo.h"

/**
 * @file principal.cpp
 * Archivo principal donde se encuentra la función main.
 * Aqui es donde se manda llamar los demas objetos.
 */

/**
 * Función principal de C++.
 */
int main() {

  Menu menu;
  Complejo z1,z2,res;
  float f;

  do {
    switch(menu.imprimir()) {
      case '1':
	      std::cout << "Real del 1er complejo: "; std::cin >> f;
	      z1.ponReal(f);
	      std::cout << "Imaginario del 1er complejo: "; std::cin >> f;
	      z1.ponImaginario(f);

	    std::cout << z1 << std::endl;
	    std::cout << z1.dameReal() << " + i " << z1.dameImaginario() << std::endl;

	      std::cout << "Real del 2do complejo: "; std::cin >> f;
	      z2.ponReal(f);
	      std::cout << "Imaginario del 2do complejo: "; std::cin >> f;
	      z2.ponImaginario(f);

	    std::cout << z2 << std::endl;
	    std::cout << z2.dameReal() << " + i " << z2.dameImaginario() << std::endl;

	      std::cin.get();
	      break;
      case '2':
	      std::cout << "1er Complejo (" << z1 << "): conjugado = " << !z1 << std::endl;
	      std::cout << "2do Complejo (" << z2 << "): conjugado = " << !z2 << std::endl;
	      std::cout << "Resultado complejo (" << res << "): conjugado = " << !res << std::endl;
	    std::cout << z1 << std::endl;
	    std::cout << z1.dameReal() << " + i " << z1.dameImaginario() << std::endl;
	    std::cout << z2 << std::endl;
	    std::cout << z2.dameReal() << " + i " << z2.dameImaginario() << std::endl;
	      std::cin.get();
	      break;
      case '3':
	      res=z1+z2;
	      std::cout << "(" << z1 << ") + (" << z2 << ") = " << res << std::endl;
	      std::cin.get();
	      break;
      case '4':
	      res=z1-z2;
	      std::cout << "(" << z1 << ") - (" << z2 << ") = " << res << std::endl;
	      std::cin.get();
	      break;
      case '5':
	      res=z1*z2;
	      std::cout << "(" << z1 << ") * (" << z2 << ") = " << res << std::endl;
	      std::cin.get();
	      break;
      case '6':
	      res=z1/z2;
	      std::cout << "(" << z1 << ") / (" << z2 << ") = " << res << std::endl;
	      std::cin.get();
	      break;
      case '7':
	      std::cout << "1er Complejo (" << z1 << "): modulo= " <<
		      z1.modulo() << " argumento= " << z1.argumento() << std::endl;
	      std::cout << "2do Complejo (" << z2 << "): modulo= " <<
		      z2.modulo() << " argumento= " << z2.argumento() << std::endl;
	      std::cout << "Resultado complejo (" << res << "): modulo= " <<
		      res.modulo() << " argumento= " << res.argumento() << std::endl;
	      std::cin.get();
	      break;
    }
  } while(!menu.salir());

  return 0;
}

