#ifndef FACTORIAL_H
#define FACTORIAL_H
/** 
 * @file Factorial.h
 * Archivo que contiene el prototipo de la clase Factorial.
 * Aqui se encuntran el prototipo de la clase Factorial y sus miembros.
*/

/** 
 * Clase Factorial donde se encuentran las 7 variaciones sencillas.
 *  Aqui se encuentran las 7 variaciones sencillas de la funci�n factorial
 */

class Factorial {
  private:
    /** 
     * Variable al cual se le va a sacar su factorial.
     * Aqui se guardara el n�mero para el cual le vamos a sacar su factorial, es
     * unsigned int, porque no podemos sacar el n�mero factorial de numeros
     * negativos.
     */
    unsigned int numero;
    /**
     * Variable que guardar� el resultado del factorial del numero.
     * Aqui se guardara el resultado del factorial de la propiedad numero.
     * @see numero
     */
    unsigned long resultado;

    /**
     * Calcula el factorial del n�mero en forma recursiva con argumentos.
     * M�todo que reazlia el calculo del facotorial en forma recursiva
     * utilizando argumentos. Sirve de auxiliadora para el m�todo recursivo().
     * @param num N�mero entereso sin signo
     * @see recursivo()
     * @see asignaNumero()
     * @return El factorial del numero num.
     */
    unsigned long recursivo2(unsigned int num);

  public:
    /** 
     * Constructor sin argumentos del factorial.
     * Constructor que inicializa en cero la propiedad numero.
     * @see numero
     */
    Factorial();
    /** 
     * Constructor del factorial iniciando la propiedad numero.
     * Constructor que sirve para inicializar la clase Factorial con un numero,
     * que ser� el n�mero para sacarle el factorial.
     * @param num Un entero sin signo.
     * @see numero
     */
    Factorial(unsigned int num);

    /**
     * M�todo para asignar el miembro de n�mero.
     * Le asigna el valor de num a n�mero.
     * @param num Un entero sin signo.
     */
    void asignaNumero(unsigned int num);

    /**
     * M�todo retresa el n�mero factorial de la propiedad n�mero.
     * @see numero
     * @return el valor guardado en la propiedad n�mero
     */
    unsigned long factorial();

    /**
     * Calcula el factorial de forma ascendente utilizando un for.
     * M�todo que realiza el calculo del factorial de la propiedad numero
     * utilizando la estructura for.
     * @see asignaNumero()
     * @return el factorial del valor de numero
     */  
    unsigned long ascendenteFor();
    /**
     * Calcula el factorial de forma ascendente utilizando un while.
     * M�todo que realiza el calculo del factorial de la propiedad numero
     * utilizando la estructura while.
     * @see asignaNumero()
     * @return el factorial del valor de numero
     */  
    unsigned long ascendenteWhile();
    /**
     * Calcula el factorial de forma ascendente utilizando un do while.
     * M�todo que realiza el calculo del factorial de la propiedad numero
     * utilizando la estructura do while.
     * @see asignaNumero()
     * @return el factorial del valor de numero
     */  
    unsigned long ascendenteDoWhile();
  
    /**
     * Calcula el factorial de forma descendente utilizando un for.
     * M�todo que realiza el calculo del factorial de la propiedad numero
     * utilizando la estructura for.
     * @see asignaNumero()
     * @return el factorial del valor de numero
     */  
    unsigned long descendenteFor();
    /**
     * Calcula el factorial de forma descendente utilizando un while.
     * M�todo que realiza el calculo del factorial de la propiedad numero
     * utilizando la estructura while.
     * @see asignaNumero()
     * @return el factorial del valor de numero
     */  
    unsigned long descendenteWhile();
    /**
     * Calcula el factorial de forma descendente utilizando un do while.
     * M�todo que realiza el calculo del factorial de la propiedad numero
     * utilizando la estructura do while.
     * @see asignaNumero()
     * @return el factorial del valor de numero
     */  
    unsigned long descendenteDoWhile();

    /**
     * Calcula el factorial del n�mero en forma recursiva.
     * M�todo que reazlia el calculo del facotorial en forma recursiva.
     * @see recursivo2()
     * @see asignaNumero()
     * @return el factorial del valor de numero
     */
    unsigned long recursivo();
};

#endif

