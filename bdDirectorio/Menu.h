#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <cstring>

/**
 * @file Menu.h
 * Prototipos de la clase menu.
 * Aqui se guardan los prototipos para la clase menu.
 */

/**
 * Clase Menu para deplegar un menu.
 * Clase que despliega un menu en pantalla y pide alguna opci�n para continuar.
 */
class Menu {
  private:
    /**
     * Imprime el las opciones del menu.
     */
    void menu();
    /**
     * Opci�n ejegida en el menu.
     * Se utiliza un arreglo de caracteres para usar la funci�n getline(),
     * y asi no dejar nada en el buffer de entrada.
     */
    char opcion[20];
    /**
     * Verdadero si se escogio la opci�n salir.
     * Esta propiedad se vuelve verdadera si se escogio la opci�n de salir
     */
    bool bSalir;
    /**
     * Nombre del archivo del Directorio.
     */
    char sNombreArch[30];

  public:
    /**
     * Constructor del Objeto.
     * Inicializa las propiedades del objeto Menu.
     */
    Menu();
    /**
     * Metodo que imprime el menu.
     * Imprime un menu y se espera a que la opci�n sea correcta.
     * @ return Una opci�n valida del menu, de tipo caracter.
     */
    char imprimir();
    /**
     * Me dice si se escogio la opci�n salir.
     * M�todo que me dice si fue escogida la opci�n de salir del menu.
     */
    bool salir();
    /**
     * Asigna la variable del nombre del archivo.
     * Asigna el nombre del archivo el cual servira como Directorio.
     * @param sNom ruta y nombre del archivo del Directorio.
     * @see NombreArch
     */
    void asignaArchiv(const char *sNom);

};

#endif

