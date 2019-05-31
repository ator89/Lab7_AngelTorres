#include "PoderEspecial.h"

PoderEspecial::PoderEspecial(){
	nombre = "";
	nivel = 0;
}

PoderEspecial::~PoderEspecial(){}

//Getters
string PoderEspecial::getNombre(){
	return nombre;
}

int PoderEspecial::getNivel(){
	return nivel;
}

//Setters
void PoderEspecial::setNombre(string n){
	nombre = n;
}

void PoderEspecial::setNivel(int n){
	nivel = n;
}