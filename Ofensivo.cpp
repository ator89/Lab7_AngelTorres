#include "Ofensivo.h"

//Constructor y destructor
Ofensivo::Ofensivo(){
	rango = 0;
	fuerza = 0;
	nombre = "";
	nivel = 0;
	tipo = 1;
}

Ofensivo::Ofensivo(int _rango,int _fuerza, string _nombre,int _nivel,int _tipo):PoderEspecial(_nombre,_nivel,_tipo){
	rango = _rango;
	fuerza = 0;
	nombre = "";
	nivel = 0;
	tipo = 1;
}

Ofensivo::~Ofensivo(){}

//Setters
void Ofensivo::setRango(int _rango){
	rango = _rango;
}
void Ofensivo::setFuerza(int _fuerza){
	fuerza = _fuerza;
}

//Getters
int Ofensivo::getRango(){
	return rango;
}

int Ofensivo::getFuerza(){
	return fuerza;
}

string Ofensivo::toString(){
	return "Poder Ofensivo";
}