#include <iostream>
#include <locale>
#include "CPU.h"
using namespace std;

void menu() {
    cout << "Bienvenidos a mi examen 1 de Progra 3 :D" << endl;
    cout << "1. Batalla de CPU's" << endl;
    cout << "2. Minecraft Bow" << endl;
    cout << "3. Salir del Programa" << endl;
    cout << "Ingrese una opción valida" << endl;
}

void armarCPU() {

}

void modificarCPU() {

}

void batallaCPU() {

}

void ejercicio1() {
    bool cont = true;
    int opcionEjer1;
    do {
        cout << "Bienvenido a Batalla de CPU´s" << endl;
        cout << "¿Que desea hacer?" << endl;
        cout << "1. Armar CPU´s" << endl;
        cout << "2. Modificar CPU" << endl;
        cout << "3. Batalla de CPU´s" << endl;
        cout << "4. Volver al menú principal" << endl;
        cin >> opcionEjer1;
        switch (opcionEjer1) {
        
        case 1:
            cout << "En construcción" << endl;
            armarCPU();
            break;

        case 2:
            cout << "En construcción" << endl;
            modificarCPU();
            break;

        case 3:
            cout << "En construcción" << endl;
            batallaCPU();
            break;

        case 4:
            cout << "Volviendo al menu principal...." << endl;
            cont = false;
            break;

        default:
            break;
        }
    } while (cont);
}

void ejercicio2() {

}

int main() {
    int opcion;
    setlocale(LC_ALL, "spanish");
    bool seguir = true;
    do {
        menu();
        cin >> opcion;
        switch (opcion) {

        case 1:
            cout << "En construcción" << endl;
            ejercicio1();
            break;

        case 2:
            cout << "En construcción" << endl;
            ejercicio2();
            break;

        case 3:
            cout << "Gracias por usar el programa" << endl;
            cout << "Espero que les haya gustado xd" << endl;
            cout << "Saliendo......." << endl;
            seguir = false;
            break;

        default:
            cout << "ERROR" << endl;
            cout << "INGRESE UNA OPCION VALIDA" << endl;
            cout << endl;
            break;
        }
    } while (seguir);
    
}
