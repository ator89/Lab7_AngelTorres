#include "Curacion.h"

//Constructor y destructor
Curacion::Curacion(){
	tipoCuracion = "";
	nombre = "";
	nivel = 0;
	tipo = 3;
}

Curacion::Curacion(string cur, string _nombre,int _nivel,int _tipo):PoderEspecial(_nombre,_nivel,_tipo){
	tipoCuracion = cur;
	nombre = "";
	nivel = 0;
	tipo = 3;
}

Curacion::~Curacion(){}

//Setters
void Curacion::setCuracion(string cur){
	tipoCuracion = cur;
}

//Getters
string Curacion::getCuracion(){
	return tipoCuracion;
}


string Curacion::toString(){
	return "Poder Ofensivo";
}