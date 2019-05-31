#include "NonBender.h"

//Constructores
NonBender::NonBender(){
	trabajo = "";
	fuerza = 0;
	velocidad = 0;
	nacion ="";
	nombre = "";
	sexo = "";
	edad = 0;
	tipo = 5;
}

NonBender::NonBender(string _trabajo,int _fuerza,int _vel,string _nacion,string _nombre, string _sexo,int _edad,int _tipo):Persona(_nacion, _nombre, _sexo, _edad,_tipo){
	trabajo = _trabajo;
	fuerza = _fuerza;
	velocidad = _vel;
	nacion ="";
	nombre = "";
	sexo = "";
	edad = 0;
	tipo = 5;
}
//Destructor
NonBender::~NonBender(){}

		//Setters
void NonBender::setTrabajo(string _trabajo){
	trabajo = _trabajo;
}

void NonBender::setFuerza(int _fuerza){
	fuerza = _fuerza;
}

void NonBender::setVelocidad(int _vel){
	velocidad = _vel;
}

		//Getters
string NonBender::getTrabajo(){
	return trabajo;
}

int NonBender::getFuerza(){
	return fuerza;
}

int NonBender::getVelocidad(){
	return velocidad;
}

string NonBender::toString(){
	return "Non Bender";
}