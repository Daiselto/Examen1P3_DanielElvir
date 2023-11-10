#include "CPU.h"

CPU::CPU(int Core, int RAM, string TipoDisco, int Alm, int GPU, int Tarea) {
	Core = cores;
	RAM = ram;
	TipoDisco = tipoDisco;
	Alm = almacenamiento;
	GPU = gpu;
	Tarea = tareas;
	switch (gpu) {
	
	case 1:
		valorGpu = 1;
		break;

	case 2:
		valorGpu = 2;
		break;

	case 3:
		valorGpu = 3;
		break;

	case 4:
		valorGpu = 4;
		break;

	case 5:
		valorGpu = 5;
		break;

	case 6:
		valorGpu = 6;
		break;
	
	default:
		cout << "ERROR" << endl;
		break;
	}

	overhead = (tareas / cores) + (1 / ram);
}

CPU::~CPU() {
}

int CPU::getCores() {
	return cores;
}

void CPU::setCores(int Core) {
	cores = Core;
}

int CPU::getRam() {
	return ram;
}

void CPU::setRam(int RAM) {
	ram = RAM;
}

string CPU::getTipoDisco() {
	return tipoDisco;
}

void CPU::setCores(string tipoDeDisco) {
	tipoDisco = tipoDeDisco;
}

int CPU::getAlmacenamiento() {
	return almacenamiento;
}

void CPU::setAlmacenamiento(int alm) {
	almacenamiento = alm;
}

int CPU::getGPU() {
	return gpu;
}

void CPU::setGPU(int GPU) {
	gpu = GPU;
}

int CPU::getValorGPU() {
	return valorGpu;
}

void CPU::setValorGPU(int ValorGPU) {
	valorGpu = ValorGPU;
}

int CPU::getTareas() {
	return tareas;
}

void CPU::setTareas(int Tarea) {
	tareas = Tarea;
}

int CPU::getOverhead() {
	return overhead;
}

void CPU::setOverhead(int OverHead) {
	overhead = OverHead;
}
