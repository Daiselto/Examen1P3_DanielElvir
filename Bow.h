#pragma once
class Bow {
	const int** Arco;
	int fila_y_columna;
public:
	Bow(int);
	Bow();
	~Bow();
	void getArco();
	int** setArco(int**);
	void getFilaYColumna();
	int setFilaYColumna(int);
	void LlenarEIniciarMatriz();
	void CrearBow();
	void MostrarBow();
};

