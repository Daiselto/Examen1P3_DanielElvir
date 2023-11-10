#pragma once
class Bow {
	int** Arco;
	int fila_y_columna;
public:
	Bow(int**, int);
	~Bow();
	void getArco();
	int** setArco(int**);
	void getFilaYColumna();
	int setFilaYColumna(int);
	void LlenarEIniciarMatriz(int);
	void CrearBow();
	void MostrarBow();
};

