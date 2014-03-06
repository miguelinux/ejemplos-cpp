#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>

/**
 * @file Matriz.h
 * Cabezera de la clase Matriz.
 * Aqui se encuentran los prototipos para la clase Matriz,
 * que estan implementados en el archivo Matriz.cpp.
 * Pagina 124,106 del manual de C++.
 */

/**
 * Clase Matriz, representa una matriz de n�meros.
 * Representaci�n de una matriz de n�meros reales.
 */
class Matriz {
  private:
    /**
     * Columnas de la matriz.
     * Valor del n�mero de columnas de una matriz.
     */
    unsigned short columnas;
    /**
     * Filas de la matriz.
     * Valor del n�mero de filas de una matriz.
     */
    unsigned short filas;
    /**
     * Datos de la matriz.
     * Puntero de un arreglo bidimencional el cual contiene los datos
     * de la matriz.
     */
    float **datos;
    /**
     * M�todo para borrar los datos de la matriz.
     * Sirve para borrar los datos de la matriz.
     */
    void borrar();

  public:

    /**
     * Constructor del Objeto Matriz.
     * Constructor que inicializa una matriz sin datos.
     */
    Matriz();
    /**
     * Constructor del Objeto Matriz con filas y columnas.
     * Constructor que inicializa una matriz con el respetivo numero de filas
     * y el de columnas, inicializandolas en ceros.
     * @param f Filas de la Matriz
     * @param c Columnas de la Matriz
     */
    Matriz(unsigned short f, unsigned short c);
    /**
     * Destructor del Objeto Matriz.
     * Destructor borra de memoria los objetos inicializados por Matriz.
     */
    ~Matriz();

    /**
     * M�doto que inicializa la matriz.
     * Con Init se puede inicializar la matriz, si es que la inicializaron sin
     * ninguna dimenci�n preestablacida.
     * @param f Filas de la Matriz
     * @param c Columnas de la Matriz
     */
    void init(unsigned short f, unsigned short c);
    /**
     * M�todo que regresa las columnas de la matriz.
     */
    unsigned short dameColumnas();
    /**
     * M�todo que regresa las filas de la matriz.
     */
    unsigned short dameFilas();

    /**
     * Sobrecarga del operador [].
     * Con esta sobrecarga axcederemos a los datos internos de los datos
     * de la Matriz.
     * @param i posici�n del puntero a recuperar. (A.K.A. la fila de la matriz)
     */
    float *operator[](const int i);
    /**
     * Sobrecarga del operador *.
     * Con esta sobrecarga haremos la multiplicaci�n de matrices como si fuera
     * una multiplicaci�n de dos variables cualesquiera.
     * m = m1*m2, donde m1 es la matriz actual.
     * @param m2 es segundo operando de la multiplicaci�n, la segunda matriz.
     */
    Matriz operator*(Matriz &m2);
    /**
     * Sobrecarga del operador = (de asignaci�n).
     * Con esta sobrecarga nos aseguramos que la asignaci�n a la hora de hacer
     * la multiplicaci�n sea correcta y no nos de un resultado mal.
     * <i>Debido a que estamos usando punteros y memoria dinamica es necesario
     * realizar esta sobrecarga.</i>
     * @param m es la 
     */
    Matriz &operator=(Matriz m);

};

/**
 * Sobrecarga del operador <<.
 * Imprime directamente en pantalla la Matriz, como una variable primitava de 
 * C++.
 */
std::ostream &operator<<(std::ostream &out, Matriz &m);

#endif

