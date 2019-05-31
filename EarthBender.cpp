#include "EarthBender.h"

EarthBender::EarthBender(){
	num_coles = 0;
	graduacion = 0;
	nacion ="";
	nombre = "";
	sexo = "";
	edad = 0;
	tipo = 2;
	poder = 0;
}

EarthBender::EarthBender(int coles, int grad, PoderEspecial* _po, string _nacion, string _nombre, string _sexo, int _edad, int _tipo):Persona(_nacion, _nombre, _sexo, _edad,_tipo){
	num_coles = coles;
	graduacion = grad;
	nacion = _nacion;
	nombre = _nombre;
	sexo = _sexo;
	edad = _edad;
	tipo = 2;
	poder = _po;
}

EarthBender::~EarthBender(){}

//Setters
void EarthBender::setNumColes(int coles){
	num_coles = coles;
}
void EarthBender::setGraduacion(int grad){
	graduacion = grad;
}

void EarthBender::setPoderEspecial(PoderEspecial* _po){
	poder = _po;
}

//Getters
int EarthBender::getNumColes(){
	return num_coles;
}

int EarthBender::getGraduacion(){
	return graduacion;
}

PoderEspecial* EarthBender::getPoderEspecial(){
	return poder;
}

string EarthBender::toString(){
	return "Earth Bender";
}