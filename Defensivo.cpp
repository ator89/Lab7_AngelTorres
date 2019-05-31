#include "Defensivo.h"

//Constructor y destructor
Defensivo::Defensivo(){
	resistencia = 0;
	duracion = 0;
	nombre = "";
	nivel = 0;
	tipo = 2;
}

Defensivo::Defensivo(int _res,int _dur, string _nombre,int _nivel,int _tipo):PoderEspecial(_nombre,_nivel,_tipo){
	resistencia = _res;
	duracion = _dur;
	nombre = "";
	nivel = 0;
	tipo = 2;
}

Defensivo::~Defensivo(){}

//Setters
void Defensivo::setResistencia(int _r){
	resistencia = _r;
}
void Defensivo::setDuracion(int _duracion){
	duracion = _duracion;
}

//Getters
int Defensivo::getResistencia(){
	return resistencia;
}

int Defensivo::getDuracion(){
	return duracion;
}

string Defensivo::toString(){
	return "Poder Defensivo";
}