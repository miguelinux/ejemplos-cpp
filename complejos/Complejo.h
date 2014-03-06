#ifndef COMPLEJO_H
#define COMPLEJO_H
/**
 * @file Complejo.h
 * Cabecera donde estan los prototipos de la clase Complejo.
 * Aqui se encutra especificada la clase Complejo.
 */

#include <iostream>
#include <cmath>

/**
 * Clase que representa un número Complejo.
 * Abstración de un complejo hacia un objeto, con una parte real y una parte imaginaria
 */
class Complejo {
  private:
    /**
     * Parte real.
     * Propiedad privata de la clase complejo que representa la parte real del complejo.
     */
    float re;
    /**
     * Parte imaginaria.
     * Propiedad privata de la clase complejo que representa la parte imaginaria del complejo.
     */
    float im;

  public:
    /**
     * Constructor de la clase Complejo.
     * Constructor que inicializa los valores re e im a cero.
     */
    Complejo();
    /**
     * Constructor de la clase Complejo.
     * Constructor que inicializa los valores re e im de acuerdo con los parametros.
     * @param re valor de la parte real.
     * @param im valor de la parte imaginaria.
     */
    Complejo(float re, float im);

    /**
     * Regresa el valor del argumento del Complejo.
     * Método que regresa el valor del angulo que es el argumento de la representación polar.
     */
    float argumento();
    /**
     * Regresa el valor del modulo del Complejo.
     * Método que regresa el valor del modulo del Complejo. \f$|z|=\sqrt{(re)^2+(im)^2}\f$
     */
    float modulo();

    /**
     * Asigna el valor real al Complejo.
     * @see re
     */
    void ponReal(float);
    /**
     * Asigna el valor imaginario al Complejo.
     * @see im
     */
    void ponImaginario(float);
    /**
     * Regresa el valor de la parte real del Complejo.
     * @see re
     */
    float dameReal();
    /**
     * Regresa el valor de la parte imaginaria del Complejo.
     * @see im
     */
    float dameImaginario();

    /**
     * Representa el conjugado de un Complejo.
     * Operador sobrecargado el cual nos devuelve el conjugado del número Complejo.
     */
    Complejo operator!();

    /**
     * Suma de dos complejos
     * Sobrecarga del operador para sumar dos complejos.
     */
    Complejo operator+(Complejo c2);

    /**
     * Resta de dos complejos
     * Sobrecarga del operador para restar dos complejos.
     */
    Complejo operator-(Complejo c2);
    /**
     * Multiplica de dos complejos
     * Sobrecarga del operador para multiplicar dos complejos.
     */
    Complejo operator*(Complejo c2);
    /**
     * Divide de dos complejos
     * Sobrecarga del operador para dividir dos complejos.
     */
    Complejo operator/(Complejo c2);

};

/**
 * Imprime el complejo en pantalla.
 * Sobre carga del operador << para imprimir correctamente el complejo, ya sea
 * de la forma re + i im, o re - i im
 */
std::ostream &operator<<(std::ostream &out, Complejo c);

#endif

