#ifndef CAMPOS_H
#define CAMPOS_H

#include <iostream>
#include <string>
/**
 * @file Campos.h
 * Estructura de los registros.
 * Aqui se espefician como sera el registro con cada uno de sus Campos.
 */

/**
 * Estructura de Campos del Directorio.
 * Campos del Directorio que se van a guardar.
 * Datos personales de las personas.
 */
struct Campos {
  /**
   * Nombre de la persona.
   */
  std::string sNombre;
  /**
   * Dirección de la persona.
   */
  std::string sDireccion;
  /**
   * Telefono de la persona.
   */
  std::string sTelefono;
  /**
   * Correo electronico de la persona.
   */
  std::string sEMail;
};

/**
 * Sobrecarga del operador <<.
 * Con esto imprimo en pantalla las propiedades de los campos.
 */
std::ostream &operator<<(std::ostream &out, Campos c);

#endif

