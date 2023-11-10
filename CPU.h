#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class CPU {
	int cores;
	int ram;
	string tipoDisco;
	int almacenamiento;
	int gpu;
	int valorGpu;
	int tareas;
	double overhead=0.0;
public:
	CPU(int, int, string, int, int, int);
	CPU();
	~CPU();
	int getCores();
	void setCores(int);
	int getRam();
	void setRam(int);
	string getTipoDisco();
	void setTipoDisco(string);
	void setCores(string);
	int getAlmacenamiento();
	void setAlmacenamiento(int);
	int getGPU();
	void setGPU(int);
	int getValorGPU();
	void setValorGPU(int);
	int getTareas();
	void setTareas(int);
	double getOverhead();
	void setOverhead(double);
	double recalcularOverhead(int, int, int);
};

