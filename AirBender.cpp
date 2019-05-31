#include "AirBender.h"

AirBender::AirBender(){
	cantidadPelo = 0;
	colorFlecha = "";
	nacion ="";
	nombre = "";
	sexo = "";
	edad = 0;
	tipo = 0;
	poder = 0;
}

AirBender::AirBender(int cPelo, string cFlecha, PoderEspecial* _po, string _nacion, string _nombre, string _sexo, int _edad, int _tipo):Persona(_nacion, _nombre, _sexo, _edad,_tipo){
	cantidadPelo = cPelo;
	colorFlecha = cFlecha;
	nacion = _nacion;
	nombre = _nombre;
	sexo = _sexo;
	edad = _edad;
	tipo = 1;
	poder = _po;
}

AirBender::~AirBender(){}

//Setters
void AirBender::setCantidadPelo(int cPelo){
	cantidadPelo = cPelo;
}
void AirBender::setColorFlecha(string cFlecha){
	colorFlecha = cFlecha;
}

void AirBender::setPoderEspecial(PoderEspecial* _po){
	poder = _po;
}

//Getters
int AirBender::getCantidadPelo(){
	return cantidadPelo;
}

string AirBender::getColorFlecha(){
	return colorFlecha;
}

PoderEspecial* AirBender::getPoderEspecial(){
	return poder;
}

string AirBender::toString(){
	return "Air Bender";
}