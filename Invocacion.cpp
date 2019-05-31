#include "Invocacion.h"

Invocacion::Invocacion(){
	nombrem = "";
	especie = "";
	habilidad = "";
	tipom = "";
	nombre = "";
	nivel = 0;
	tipo = 4;
}
Invocacion::Invocacion(string _nombrem,string _especie, string _habilidad, string _tipom, string _nombre,int _nivel,int _tipo):PoderEspecial(_nombre,_nivel,_tipo){
	nombrem = _nombrem;
	especie = _especie;
	habilidad = _habilidad;
	tipom = _tipom;
	nombre = _nombre;
	nivel = _nivel;
	tipo = 4;
}
Invocacion::~Invocacion(){}

		//Setters
void Invocacion::setNombreM(string _nombrem){
	nombrem = _nombrem;
}

void Invocacion::setEspecie(string _especie){
	especie = _especie;
}

void Invocacion::setHabilidad(string _habilidad){
	habilidad = _habilidad;
}

void Invocacion::setTipoM(string _tipom){
	tipom = _tipom;
}

		//Getters
string Invocacion::getNombreM(){
	return nombrem;
}

string Invocacion::getEspecie(){
	return especie;
}

string Invocacion::getHabilidad(){
	return habilidad;
}

string Invocacion::getTipoM(){
	return tipom;
}

string Invocacion::toString(){
	return "Poder Invocacion";
}