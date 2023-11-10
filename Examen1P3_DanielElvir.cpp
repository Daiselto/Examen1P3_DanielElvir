#include <iostream>
#include <locale>
#include "CPU.h"
#include <vector>
using namespace std;

static vector<CPU*> cpus;

void menu() {
    cout << "Bienvenidos a mi examen 1 de Progra 3 :D" << endl;
    cout << "1. Batalla de CPU's" << endl;
    cout << "2. Minecraft Bow" << endl;
    cout << "3. Salir del Programa" << endl;
    cout << "Ingrese una opción valida" << endl;
}

void adicionar(vector<CPU*> &cpus, CPU* cp) {
    cpus.push_back(cp);
}

void armarCPU() {

    int opcionGPU;
    int Core;
    bool valido = true;
    bool valido1 = true;
    bool valido2 = true;
    bool valido3 = true;
    bool valido4 = true;
    bool valido5 = true;
    int RAM;
    string TipoDisco;
    int Almacenamiento;
    int GPU = 0;
    int Tareas;
    double Overhead;

    cout << "Ingrese todos los nucleos del procesador: " << endl;
    cin >> Core;
    while (valido1) {
        if (Core > 0) {
            valido1 = false;
        }
        else {
            cout << "Un CPU no puede tenero menos de 1 nucleo" << endl;
            cout << "Ingrese todos los nucleos del procesador: " << endl;
            cin >> Core;
            valido1 = true;
        }
    }

    cout << "Ingrese la cantidad de RAM en GB" << endl;
    cin >> RAM;
    while (valido2) {
        if (RAM > 0) {
            valido2 = false;
        }
        else {
            cout << "Una RAM no puede tenero menos de 1 GB" << endl;
            cout << "Ingrese la cantidad de RAM en GB" << endl;
            cin >> RAM;
            valido2 = true;
        }
    }
    cout << "Ingrese el tipo de Disco (SSD o HDD)" << endl;
    cin >> TipoDisco;
    while (valido) {
        if (TipoDisco == "SSD" || TipoDisco == "HDD") {
            valido = false;
        }
        else {
            cout << "Tiene que ser SSD o HDD" << endl;
            cout << "Ingrese el tipo de Disco (SSD o HDD)" << endl;
            cin >> TipoDisco;
            valido = true;
        }
    }
    cout << "Ingrese cuanto almacenamiento tiene la CPU" << endl;
    cin >> Almacenamiento;
    while (valido3) {
        if (Almacenamiento > 0) {
            valido3 = false;
        }
        else {
            cout << "Un almacenamiento no puede tenero menos de 1 GB" << endl;
            cout << "Ingrese cuanto almacenamiento tiene la CPU" << endl;
            cin >> Almacenamiento;
            valido3 = true;
        }
    }
    cout << "Ingrese el GPU del CPU" << endl;
    cout << "Las opciones son las siguientes:" << endl;
    cout << "1. 3050" << endl;
    cout << "1. 3060" << endl;
    cout << "1. 3070" << endl;
    cout << "1. 3090" << endl;
    cout << "1. 4070" << endl;
    cout << "1. 7090" << endl;
    cout << "Ingrese una opcion" << endl;
    cin >> opcionGPU;
    switch (opcionGPU) {

    case 1:
        GPU = 3050;
        break;

    case 2:
        GPU = 3060;
        break;

    case 3:
        GPU = 3070;
        break;

    case 4:
        GPU = 3090;
        break;

    case 5:
        GPU = 4070;
        break;

    case 6:
        GPU = 7090;
        break;

    default:
        cout << "ERRORXD" << endl;
        break;
    }

    cout << "Ingrese cuantas tareas va a manejar la CPU" << endl;
    cin >> Tareas;
    while (valido4) {
        if (Tareas >= 0) {
            valido4 = false;
        }
        else {
            cout << "Un CPU no puede tenero menos de 0 tareas" << endl;
            cout << "Ingrese cuantas tareas va a manejar la CPU" << endl;
            cin >> Tareas;
            valido4 = true;
        }
    }
    CPU* nuevoCPU = new CPU(Core, RAM, TipoDisco, Almacenamiento, GPU, Tareas);
    cpus.push_back(nuevoCPU);
    cout << cpus.size();
    cout << cpus[0]->getAlmacenamiento();
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

            armarCPU();
            break;

        case 2:

            modificarCPU();
            break;

        case 3:
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
            ejercicio1();
            break;

        case 2:
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
