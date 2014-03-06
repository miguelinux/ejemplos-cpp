#include "Campos.h"
/**
 * @file Campos.cpp
 * Archivo donde implementa la sobre carga de <<.
 * Aqui solo se implementa la sobrecarga de <<, para la impresión de
 * la estructura de campos.
 */

/**
 * Sobrecarga del operador <<.
 * Aqui se implementa la sobrecarga del operador de salida a consola.
 */
std::ostream &operator<<(std::ostream &out, Campos c) {
  out << "\nNombre: " << c.sNombre << std::endl;
  out << "Dirección: " << c.sDireccion << std::endl;
  out << "Telefono: " << c.sTelefono << std::endl;
  out << "Correo electronico: " << c.sEMail << std::endl;
  return out;
}

