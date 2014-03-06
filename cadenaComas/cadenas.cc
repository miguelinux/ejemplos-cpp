#include <iostream>

using namespace std;

int main() {
  char cadena[101];
  short i=0;

  cout << "Imprime una cadena que este separada por comas." << endl;
  cout << "  (ejem. cadena,separada, por, comas)" << endl;
  cout << "cadena: ";
  cin.getline(cadena,101);

  while(cadena[i]!='\0') {
    if(cadena[i] ==',') {
      cout << endl;
    }
    else {
      cout << cadena[i];
    }
    i++;
  }
  cout << endl;
  
  return 0;
}

