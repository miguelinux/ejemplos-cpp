#include "Complejo.h"
/**
 * @file Complejo.cpp
 * Archivo en el cual se implementa la clase Complejo
 */

Complejo::Complejo(){
  re=0.0f;
  im=0.0f;
}

Complejo::Complejo(float re, float im){
  this->re=re;
  this->im=im;
}

float Complejo::argumento(){
  float res;
  res=atan2f(im,re);
  return res;
}

float Complejo::modulo(){
  float res;
  res=sqrtf(re*re + im*im);
  return res;
}

inline void Complejo::ponReal(float real) {
  re=real;
}

inline void Complejo::ponImaginario(float imag) {
  im=imag;
}

inline float Complejo::dameReal() {
  return re;
}

inline float Complejo::dameImaginario() {
  return im;
}

Complejo Complejo::operator!(){
  Complejo res(re,-im);
  return res;
}

Complejo Complejo::operator+(Complejo c2){
  Complejo res( re+c2.dameReal(), im+c2.dameImaginario() );
  return res;
}

Complejo Complejo::operator-(Complejo c2){
  Complejo res( re-c2.dameReal(), im-c2.dameImaginario() );
  return res;
}

Complejo Complejo::operator*(Complejo c2){
  Complejo res;
  res.ponReal( re*c2.dameReal() - im*c2.dameImaginario() );
  res.ponImaginario( re*c2.dameImaginario() + im*c2.dameReal() );
  return res;
}

Complejo Complejo::operator/(Complejo c2){
  Complejo numerador;
  Complejo denominador;
  numerador=!c2 * (*this);
  denominador=!c2 * c2;
  denominador=c2 * !c2 ;
  denominador=c2.por(c2.conjugado());
  if ( 0 == denominador.dameReal()) {
    numerador.ponReal( 0.0f );
    numerador.ponImaginario( 0.0f );
  }
  else {
    numerador.ponReal( numerador.dameReal()/denominador.dameReal() );
    numerador.ponImaginario( numerador.dameImaginario()/denominador.dameReal() );
  }
  return numerador;
}

std::ostream &operator<<(std::ostream &out, Complejo c){
  if( 0.0f > c.dameImaginario()) {
    out << c.dameReal() << " - i " << -c.dameImaginario();
  }
  else {
    out << c.dameReal() << " + i " <<  c.dameImaginario();
  }
  return out;
}


