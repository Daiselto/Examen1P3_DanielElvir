#include "CPU.h"

CPU::CPU(int Core, int RAM, string TipoDisco, int Alm, int GPU, int Tarea) {
	double OVERhead=0.0;
	cores = Core;
	ram = RAM;
	tipoDisco=TipoDisco;
	almacenamiento=Alm;
	gpu = GPU;
	tareas = Tarea;
	switch (gpu) {
	
	case 3050:
		valorGpu = 1;
		break;

	case 3060:
		valorGpu = 2;
		break;

	case 3070:
		valorGpu = 3;
		break;

	case 3090:
		valorGpu = 4;
		break;

	case 4070:
		valorGpu = 5;
		break;

	case 7090:
		valorGpu = 6;
		break;
	
	default:
		cout << "ERROR" << endl;
		break;
	}

	OVERhead = (Tarea / Core) + (1 / RAM);
	overhead = OVERhead;
}

CPU::~CPU() {
}

CPU::CPU() {
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

void CPU::setTipoDisco(string TipoDisco) {
	tipoDisco = TipoDisco;
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

double CPU::getOverhead() {
	return overhead;
}


void CPU::setOverhead(double OverHead) {
	overhead = OverHead;
}

double CPU::recalcularOverhead(int Tarea, int Core, int RAM) {
	return overhead = (Tarea / Core) + (1 / RAM);
}
