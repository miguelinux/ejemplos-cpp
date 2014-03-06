#include <iostream>
#include "Factorial.h"

int main(int argc, char *argv[]) {
  char op='n';
  unsigned int n;
  Factorial fac;
  do {
    n=0;
    std::cout << "Escribe el número para sacarle su factorial: ";
    std::cin >> n;
    std::cout << std::endl << std::endl;
    fac.asignaNumero(n);
    std::cout << "El factorial de " << n << 
	    " en forma ascendente usando for es " << fac.ascendenteFor() << std::endl;
    std::cout << "El factorial de " << n << 
	    " en forma ascendente usando while es " << fac.ascendenteWhile() << std::endl;
    std::cout << "El factorial de " << n << 
	    " en forma ascendente usando do while es " << fac.ascendenteDoWhile() << std::endl;

    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << std::endl;

    std::cout << "El factorial de " << n << 
	    " en forma descendente usando for es " << fac.descendenteFor() << std::endl;
    std::cout << "El factorial de " << n << 
	    " en forma descendente usando while es " << fac.descendenteWhile() << std::endl;
    std::cout << "El factorial de " << n << 
	    " en forma descendente usando do while es " << fac.descendenteDoWhile() << std::endl;

    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << std::endl;

    std::cout << "El factorial de " << n << 
	    " en forma recursiva es " << fac.recursivo() << std::endl;

    std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << std::endl;

    std::cout << std::endl << "¿Deseas sacar otro factoral de otro numero [S/n]? : ";
    std::cin >> op;

    std::cout << std::endl << std::endl;

  }while(op!='n' && op!='N');
  return 0;
}

