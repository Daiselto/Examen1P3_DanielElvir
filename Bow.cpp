#include "Bow.h"

Bow::Bow(int** arco, int filasYColumnas) {
	Arco = arco;
	fila_y_columna = filasYColumnas;
}

Bow::~Bow() {
	delete[] Arco;
}

void Bow::getArco() {
	
}

void Bow::getFilaYColumna() {
}

int Bow::setFilaYColumna(int)
{
	return 0;
}

void Bow::LlenarEIniciarMatriz(int FilayColumna) {
	
}

void Bow::CrearBow() {
}

void Bow::MostrarBow() {
}
