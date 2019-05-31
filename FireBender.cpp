#include "FireBender.h"

FireBender::FireBender(){
	num_cicatriz = 0;
	victorias = 0;
	nacion ="";
	nombre = "";
	sexo = "";
	edad = 0;
	tipo = 2;
	poder = 0;
}

FireBender::FireBender(int ncic, int vic, PoderEspecial* _po, string _nacion, string _nombre, string _sexo, int _edad, int _tipo):Persona(_nacion, _nombre, _sexo, _edad,_tipo){
	num_cicatriz = ncic;
	victorias = vic;
	nacion = _nacion;
	nombre = _nombre;
	sexo = _sexo;
	edad = _edad;
	tipo = 2;
	poder = _po;
}

FireBender::~FireBender(){}

//Setters
void FireBender::setNumCicatriz(int ncic){
	num_cicatriz = ncic;
}
void FireBender::setVictorias(int vic){
	victorias = vic;
}

void FireBender::setPoderEspecial(PoderEspecial* _po){
	poder = _po;
}

//Getters
int FireBender::getNumCicatriz(){
	return num_cicatriz;
}

int FireBender::getVictorias(){
	return victorias;
}

PoderEspecial* FireBender::getPoderEspecial(){
	return poder;
}

string FireBender::toString(){
	return "Fire Bender";
}