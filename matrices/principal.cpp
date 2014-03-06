#include <iostream>
#include "Menu.h"
#include "Matriz.h"

int main() {

  Menu menu;
  Matriz m1,m2,res;
  unsigned short f,c;

  do {
    switch(menu.imprimir()) {
      case '1':
	      do {
	        std::cout <<"Escribe el valor de las filas de la primera matriz: ";
	        std::cin >> f;
	        std::cout <<"Escribe el valor de las columnas de la primera matriz: ";
	        std::cin >> c;
	      } while(f<1 || c<1);
	      m1.init(f,c);

	      do {
	        do {
	          std::cout <<"Escribe el valor de las filas de la segunda matriz: ";
	          std::cin >> f;
		  if (f!=m1.dameColumnas()) std::cerr << "Error las filas de la segunda matriz tienen que ser igual a la de la primera matriz." << std::endl;
	        } while(f!=c);
	        std::cout <<"Escribe el valor de las columnas de la segunda matriz: ";
	        std::cin >> c;
	      } while(f<1 || c<1);
	      m2.init(f,c);
	      std::cin.get();
	      break;
      case '2':
	      std::cout << "Introduce los valores de la primera matriz:" << std::endl;
	      for(f=0;f<m1.dameFilas();f++) {
	        for(c=0;c<m1.dameColumnas();c++) {
		  std::cout << "valor [" << f+1 << "][" << c+1 << "] = ";
		  std::cin >> m1[f][c];
		}
	      }
	      std::cout << "\n\nIntroduce los valores de la segunda matriz:" << std::endl;
	      for(f=0;f<m2.dameFilas();f++) {
	        for(c=0;c<m2.dameColumnas();c++) {
		  std::cout << "valor [" << f+1 << "][" << c+1 << "] = ";
		  std::cin >> m2[f][c];
		}
	      }
	      std::cin.get();
	      break;
      case '3':
	      std::cout << "La matriz 1 es: " << std::endl;
	      std::cout << m1 << std::endl;
	      std::cout << "La matriz 2 es: " << std::endl;
	      std::cout << m2 << std::endl;
	      std::cin.get();
	      break;
      case '4':
	      res=m1*m2;
	      std::cout << "La matriz resultante es: " << std::endl;
	      std::cout << res << std::endl;
	      std::cin.get();
	      break;
    }
  } while(!menu.salir());

  return 0;
}

