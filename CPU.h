#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class CPU {
	int cores = 0;
	int ram = 0;
	string tipoDisco = "";
	int almacenamiento = 0;
	int gpu = 0;
	int valorGpu = 0;
	int tareas = 0;
	double overhead = 0;
public:
	CPU(int, int, string, int, int, int);
	~CPU();
	int getCores();
	void setCores(int);
	int getRam();
	void setRam(int);
	string getTipoDisco();
	void setCores(string);
	int getAlmacenamiento();
	void setAlmacenamiento(int);
	int getGPU();
	void setGPU(int);
	int getValorGPU();
	void setValorGPU(int);
	int getTareas();
	void setTareas(int);
	int getOverhead();
	void setOverhead(int);
};

