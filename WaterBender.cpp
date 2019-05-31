#include "WaterBender.h"

WaterBender::WaterBender(){
	tribu = "";
	arma = "";
	nacion ="";
	nombre = "";
	sexo = "";
	edad = 0;
	tipo = 3;
	poder = 0;
}

WaterBender::WaterBender(string tri, string ar, PoderEspecial* _po, string _nacion, string _nombre, string _sexo, int _edad, int _tipo):Persona(_nacion, _nombre, _sexo, _edad,_tipo){
	tribu = tri;
	arma = ar;
	nacion = _nacion;
	nombre = _nombre;
	sexo = _sexo;
	edad = _edad;
	tipo = 3;
	poder = _po;
}

WaterBender::~WaterBender(){}

//Setters
void WaterBender::setTribu(string tri){
	tribu = tri;
}
void WaterBender::setArma(string ar){
	arma = ar;
}

void WaterBender::setPoderEspecial(PoderEspecial* _po){
	poder = _po;
}

//Getters
string WaterBender::getTribu(){
	return tribu;
}

string WaterBender::getArma(){
	return arma;
}

PoderEspecial* WaterBender::getPoderEspecial(){
	return poder;
}

string WaterBender::toString(){
	return "Water Bender";
}