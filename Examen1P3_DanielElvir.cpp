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
    cout << "2. 3060" << endl;
    cout << "3. 3070" << endl;
    cout << "4. 3090" << endl;
    cout << "5. 4070" << endl;
    cout << "6. 7090" << endl;
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
}

void modificarCPU() {
    int selec;    
    for (int i = 0; i < cpus.size(); i++) {
        cout << "Atributos de CPU: " << i+1 << ": " << endl;
        cout <<"Cores: " << cpus[i]->getCores() << endl;
        cout <<"RAM: " << cpus[i]->getRam() << endl;
        cout << "Tipo de Disco: " << cpus[i]->getTipoDisco() << endl;
        cout << "Almacenamiento: " << cpus[i]->getAlmacenamiento() << endl;
        cout << "GPU: " << cpus[i]->getGPU() << endl;
        cout << "Valor GPU: " << cpus[i]->getValorGPU() << endl;
        cout << "Tareas: " << cpus[i]->getTareas() << endl;
        cout << "Overhead: " << cpus[i]->getOverhead() << endl;
        cout << endl;
    }
    cout << "Ingrese la CPU que va a modificar" << endl;
    cin >> selec;
    if (selec >=1 && selec <= cpus.size()) {
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
                cpus[selec - 1]->setCores(Core);
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
                cpus[selec - 1]->setRam(RAM);
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
                cpus[selec - 1]->setTipoDisco(TipoDisco);
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
                cpus[selec - 1]->setAlmacenamiento(Almacenamiento);
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
        cout << "2. 3060" << endl;
        cout << "3. 3070" << endl;
        cout << "4. 3090" << endl;
        cout << "5. 4070" << endl;
        cout << "6. 7090" << endl;
        cout << "Ingrese una opcion" << endl;
        cin >> opcionGPU;
        switch (opcionGPU) {

        case 1:
            GPU = 3050;
            cpus[selec - 1]->setGPU(GPU);
            break;

        case 2:
            GPU = 3060;
            cpus[selec - 1]->setGPU(GPU);
            break;

        case 3:
            GPU = 3070;
            cpus[selec - 1]->setGPU(GPU);
            break;

        case 4:
            GPU = 3090;
            cpus[selec - 1]->setGPU(GPU);
            break;

        case 5:
            GPU = 4070;
            cpus[selec - 1]->setGPU(GPU);
            break;

        case 6:
            GPU = 7090;
            cpus[selec - 1]->setGPU(GPU);
            break;

        default:
            cout << "ERRORXD" << endl;
            break;
        }

        cout << "Ingrese cuantas tareas va a manejar la CPU" << endl;
        cin >> Tareas;
        
        while (valido4) {
            if (Tareas >= 0) {
                cpus[selec - 1]->setTareas(Tareas);
                valido4 = false;
                
            }
            else {
                cout << "Un CPU no puede tenero menos de 0 tareas" << endl;
                cout << "Ingrese cuantas tareas va a manejar la CPU" << endl;
                cin >> Tareas;                
                valido4 = true;
            }

        }
        cpus[selec - 1]->recalcularOverhead(Tareas, Core, RAM);
    } else {
        cout << "Ese valor no existe" << endl;        
    }
}

void batallaCPU() {
    int selec1;
    int selec2;
    double eficiencia1=0.0;
    double eficiencia2=0.0;
    int Peso_cores = 3;
    int Peso_ram = 2;
    double Peso_almacenamientoSSD = 1.5;
    int Peso_almacenamientoHDD = 1;
    int Peso_gpu = 1; //(ya que la GPU tiene su propio valor incremental)
    double Peso_tareas = 0.5; //(asumiendo que más tareas disminuyen la eficiencia)
    int Peso_overhead = 2; //(un overhead significativo reduce mucho la eficiencia)

    bool valido = true;
    cout << "CPUs disponibles" << endl;
    for (int i = 0; i < cpus.size(); i++) {
        cout << i + 1 << ".  CPU " << i + 1 << endl;
    }
    cout << "CPU 1 seleccionado: ";
    cin >> selec1;
    cout << "CPU 2 seleccionado: ";
    cin >> selec2;
    while (valido) {
        if (selec1 >=1 &&selec1<=cpus.size() && selec2 >= 1 && selec2 <= cpus.size()) {
            valido = false;
        }
        else {
            cout << "Valor no existe" << endl;
            cout << "CPU 1 seleccionado: ";
            cin >> selec1;
            cout << "CPU 2 seleccionado: ";
            cin >> selec2;
            valido = true;
        }
    }
    
    cout << "Atributos de CPU 1: " << endl;
    cout << "Cores: " << cpus[selec1-1]->getCores() << endl;
    cout << "RAM: " << cpus[selec1 - 1]->getRam() << endl;
    cout << "Tipo de Disco: " << cpus[selec1 - 1]->getTipoDisco() << endl;
    cout << "Almacenamiento: " << cpus[selec1 - 1]->getAlmacenamiento() << endl;
    cout << "GPU: " << cpus[selec1 - 1]->getGPU() << endl;
    cout << "Valor GPU: " << cpus[selec1 - 1]->getValorGPU() << endl;
    cout << "Tareas: " << cpus[selec1 - 1]->getTareas() << endl;
    cout << "Overhead: " << cpus[selec1 - 1]->getOverhead() << endl;
    cout << endl;

    if (cpus[selec1 - 1]->getTipoDisco() == "SDD") {
        eficiencia1 = (Peso_cores * cpus[selec1 - 1]->getCores()) + (Peso_ram * cpus[selec1 - 1]->getRam()) + (Peso_almacenamientoSSD * cpus[selec1 - 1]->getAlmacenamiento()) + (Peso_gpu * cpus[selec1 - 1]->getValorGPU()) - (Peso_tareas * cpus[selec1 - 1]->getTareas()) - (Peso_overhead * cpus[selec1 - 1]->getOverhead());
    } else if (cpus[selec1 - 1]->getTipoDisco() == "HDD") {
        eficiencia1 = (Peso_cores * cpus[selec1 - 1]->getCores()) + (Peso_ram * cpus[selec1 - 1]->getRam()) + (Peso_almacenamientoHDD * cpus[selec1 - 1]->getAlmacenamiento()) + (Peso_gpu * cpus[selec1 - 1]->getValorGPU()) - (Peso_tareas * cpus[selec1 - 1]->getTareas()) - (Peso_overhead * cpus[selec1 - 1]->getOverhead());
    }
    
    cout << "Eficiencia de CPU 1: " << eficiencia1 << endl;

    cout << "Atributos de CPU 2: " << endl;
    cout << "Cores: " << cpus[selec2 - 1]->getCores() << endl;
    cout << "RAM: " << cpus[selec2 - 1]->getRam() << endl;
    cout << "Tipo de Disco: " << cpus[selec2 - 1]->getTipoDisco() << endl;
    cout << "Almacenamiento: " << cpus[selec2 - 1]->getAlmacenamiento() << endl;
    cout << "GPU: " << cpus[selec2 - 1]->getGPU() << endl;
    cout << "Valor GPU: " << cpus[selec2 - 1]->getValorGPU() << endl;
    cout << "Tareas: " << cpus[selec2 - 1]->getTareas() << endl;
    cout << "Overhead: " << cpus[selec2 - 1]->getOverhead() << endl;
    cout << endl;

    if (cpus[selec2 - 1]->getTipoDisco() == "SDD") {
        eficiencia2 = (Peso_cores * cpus[selec2 - 1]->getCores()) + (Peso_ram * cpus[selec2 - 1]->getRam()) + (Peso_almacenamientoSSD * cpus[selec2 - 1]->getAlmacenamiento()) + (Peso_gpu * cpus[selec2 - 1]->getValorGPU()) - (Peso_tareas * cpus[selec2 - 1]->getTareas()) - (Peso_overhead * cpus[selec2 - 1]->getOverhead());
    }
    else if (cpus[selec2 - 1]->getTipoDisco() == "HDD") {
        eficiencia2 = (Peso_cores * cpus[selec2 - 1]->getCores()) + (Peso_ram * cpus[selec2 - 1]->getRam()) + (Peso_almacenamientoHDD * cpus[selec2 - 1]->getAlmacenamiento()) + (Peso_gpu * cpus[selec2 - 1]->getValorGPU()) - (Peso_tareas * cpus[selec2 - 1]->getTareas()) - (Peso_overhead * cpus[selec2 - 1]->getOverhead());
    }
    
    cout << "Eficiencia de CPU 2: " << eficiencia2 << endl;

    if (eficiencia1>eficiencia2) {
        cout << "El ganador es CPU 1 con una eficiencia de " << eficiencia1 << endl;
    }
    else {
        cout << "El ganador es CPU 2 con una eficiencia de " << eficiencia2 << endl;

    }

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
            if (cpus.size()>0) {
                modificarCPU();
            }
            else {
                cout << "Tiene que agregar una CPU primero" << endl;
                cout << endl;
            }
            
            break;

        case 3:
            if (cpus.size()>=2) {
                batallaCPU();
            }
            else {
                cout << "Tiene que haber 2 CPUs para poder hacer batalla" << endl;
                cout << endl;
            }
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
