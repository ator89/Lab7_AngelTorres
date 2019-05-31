#include "Persona.h"

//Constructores y destructor
Persona::Persona(){
	nacion ="";
	nombre = "";
	sexo = "";
	tipo = 0;
	edad = 0;

}
Persona::Persona(string _nacion,string _nombre,string _sexo,int _edad, int _tipo){
	nacion = _nacion;
	nombre = _nombre;
	sexo = _sexo;
	edad = _edad;
	tipo = _tipo;
}
Persona::~Persona(){}

//Setters
void Persona::setNacion(string _nacion){
	nacion = _nacion;
}
void Persona::setNombre(string _nombre){
	nombre = _nombre;
}

void Persona::setSexo(string _sexo){
	sexo = _sexo;
}

void Persona::setEdad(int _edad){
	edad = _edad;
}

void Persona::setTipo(int _tipo){
	tipo = _tipo;
}

//Getters
string Persona::getNacion(){
	return nacion;
}

string Persona::getNombre(){
	return nombre;
}

string Persona::getSexo(){
	return sexo;
}

int Persona::getEdad(){
	return edad;
}

int Persona::getTipo(){
	return tipo;
}

string Persona::toString(){
	return "Persona";
}