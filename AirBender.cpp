#include "AirBender.h"

AirBender::AirBender(){
	cantidadPelo = 0;
	colorFlecha = "";
	nacion ="";
	nombre = "";
	sexo = "";
	edad = 0;
	tipo = 0;
}

AirBender::AirBender(int cPelo, string cFlecha, string _nacion, string _nombre, string _sexo, int _edad, int _tipo):Persona(_nacion, _nombre, _sexo, _edad,_tipo){
	cantidadPelo = cPelo;
	colorFlecha = cFlecha;
	nacion = _nacion;
	nombre = _nombre;
	sexo = _sexo;
	edad = _edad;
	tipo = 1;
}

AirBender::~AirBender(){}

//Setters
void AirBender::setCantidadPelo(int cPelo){
	cantidadPelo = cPelo;
}
void AirBender::setColorFlecha(string cFlecha){
	colorFlecha = cFlecha;
}

//Getters
int AirBender::getCantidadPelo(){
	return cantidadPelo;
}

string AirBender::getColorFlecha(){
	return colorFlecha;
}

string AirBender::toString(){
	return "Air Bender";
}