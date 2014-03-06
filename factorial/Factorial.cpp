#include "Factorial.h"
/**
 * @file Factorial.cpp
 * Archivo donde se implementan los metodos de la clase Factorial.
 * Aqui se implementan todos los metodos de la clase Factorial, que estan
 * declarados en Factorial.h
 */

Factorial::Factorial() {
  numero=0;
  resultado=1;
}

Factorial::Factorial(unsigned int num) {
 numero=num;
 resultado=1;
}

void Factorial::asignaNumero(unsigned int num){
  numero=num;
}

unsigned long Factorial::factorial(){
  return(resultado);
}

unsigned long Factorial::ascendenteFor(){
  resultado=1;
  for(unsigned int n=2;n<=numero;n++) {
    resultado*=n;
  }
  return resultado;
}

unsigned long Factorial::ascendenteWhile(){
  resultado=1;
  unsigned int n=2;
  while(n<=numero) {
    resultado*=n;
    n++;
  }
  return resultado;
}

unsigned long Factorial::ascendenteDoWhile(){
  resultado=1;
  unsigned int n=2;
  if (numero < 1) return resultado;
  do {
    resultado*=n;
    n++;
  } while(n<=numero);
  return resultado;
}

unsigned long Factorial::descendenteFor(){
  resultado=1;
  for(unsigned int n=numero;n>1;n--) {
    resultado*=n;
  }
  return resultado;
}

unsigned long Factorial::descendenteWhile(){
  resultado=1;
  unsigned int n=numero;
  while(n>1) {
    resultado*=n;
    n--;
  }
  return resultado;
}

unsigned long Factorial::descendenteDoWhile(){
  resultado=1;
  unsigned int n=numero;
  if (numero < 1) return resultado;
  do {
    resultado*=n;
    n--;
  } while(n>1);
  return resultado;
}

unsigned long Factorial::recursivo() {
  resultado=1;
  if(numero < 2) return resultado;
  resultado=numero*recursivo2(numero-1);
  return resultado;
}

unsigned long Factorial::recursivo2(unsigned int num) {
  unsigned long res=1;
  if(num > 1) {
    res=num*recursivo2(num-1);
  }
  return res;
}

