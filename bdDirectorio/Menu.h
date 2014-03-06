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
 * Clase que despliega un menu en pantalla y pide alguna opción para continuar.
 */
class Menu {
  private:
    /**
     * Imprime el las opciones del menu.
     */
    void menu();
    /**
     * Opción ejegida en el menu.
     * Se utiliza un arreglo de caracteres para usar la función getline(),
     * y asi no dejar nada en el buffer de entrada.
     */
    char opcion[20];
    /**
     * Verdadero si se escogio la opción salir.
     * Esta propiedad se vuelve verdadera si se escogio la opción de salir
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
     * Imprime un menu y se espera a que la opción sea correcta.
     * @ return Una opción valida del menu, de tipo caracter.
     */
    char imprimir();
    /**
     * Me dice si se escogio la opción salir.
     * Método que me dice si fue escogida la opción de salir del menu.
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

