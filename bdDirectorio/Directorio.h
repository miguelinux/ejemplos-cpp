#ifndef DIRECTORIO_H
#define DIRECTORIO_H
/**
 * @file Directorio.h
 * Archivo que define la clase Directorio
 */

#include <fstream>
#include <string>
#include "Campos.h"

/**
 * Clase Directorio.
 * Aqui se encuantran ls funciones necesarias para realizar el directorio.
 */
class Directorio {
  private:
    /**
     * Objeto para escribir en el archivo.
     * Objeto que manipulara la escritura al archivo.
     */
    std::ofstream fEscribe;
    /**
     * Objeto para leer del archivo.
     * Objeto que manipulara la lectura desde el archivo.
     */
    std::ifstream fLee;
    /**
     * Nombre del archivo.
     * Objeto tipo cadena propia de C++, que contiene el nombre del
     * archivo a manipular.
     */
    std::string sArchivo;
    /**
     * Campos a guardarse en el archivo de directorio.
     * Campos a leer y guardar, nombre, dirección, telefono, email.
     */
    Campos campos;

  public:
    /**
     * Constructor del objeto Directorio.
     * Abre por defecto el archivo direct.csv
     */
    Directorio();
    /**
     * Constructor del objeto Directorio.
     * Constructor donde se le especifica el nombre del archivo.
     * @param arch Nombre del archivo del Directorio.
     */
    Directorio(const char *arch);
    /**
     * Destructur del objeto Directorio
     * Cierra los archivos abiertos del objeto.
     */
    ~Directorio();

    /**
     * Regresa el nombre del archivo.
     * Metodo que regresa el nombre del archivo utilizado para 
     * guardar el direcotrio.
     * @see sArchivo
     * @return el valor de sArchivo.
     */
    const char  *nombreArch();
    /**
     * Escribe en el archivo un registro.
     * Guarda en el archivo los datos del campo.
     * @param cam estructura de campo donde estan los datos a guardar.
     */
    void guarda(Campos cam);
    /**
     * Regresa si es fin de archivo.
     * Regresa si es el fin de archivo a la hora de leer el archivo.
     * @return verdadero si es fin de archivo. fLee.eof().
     */
    bool fda();
    /**
     * Se va al inicio del archivo.
     * Pone el puntero al inicio del archivo para su lectura.
     */
    void inicio();
    /**
     * Regresa un registro del archivo.
     * Regresa un registro del archivo de directorio.
     * @return Campos registro de los campos leidos.
     */
    Campos lee();
    /**
     * Borra un registro del archivo.
     * Borra un el registro del archivo que coincida con nombre.
     * @param nombre Nombre de la persona a borrar.
     * @return Verdadero si se pudo borrar el nombre.
     */
    bool borra(const char *nombre);

  
};

#endif

