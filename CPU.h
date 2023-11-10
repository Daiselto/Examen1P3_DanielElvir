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
	double overhead;
public:
	CPU(int, int, string, int, int, int);

};

