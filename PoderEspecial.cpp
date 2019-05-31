#include "PoderEspecial.h"

PoderEspecial::PoderEspecial(){
	nombre = "";
	nivel = 0;
	tipo = 0;
}

PoderEspecial::PoderEspecial(string _nombre, int _nivel, int _tipo){
	nombre = _nombre;
	nivel = _nivel;
	tipo = _tipo;
}

PoderEspecial::~PoderEspecial(){}

//Getters
string PoderEspecial::getNombre(){
	return nombre;
}

int PoderEspecial::getNivel(){
	return nivel;
}

int PoderEspecial::getTipo(){
	return tipo;
}

//Setters
void PoderEspecial::setNombre(string n){
	nombre = n;
}

void PoderEspecial::setNivel(int n){
	nivel = n;
}

void PoderEspecial::setTipo(int t){
	tipo = t;
}

string PoderEspecial::toString(){
	return "Poder Especial";
}