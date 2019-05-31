#include "Persona.h"

//Constructores y destructor
Persona::Persona();
Persona::Persona(string,string,string,int,int);
Persona::~Persona();

//Setters
void Persona::setNacion(string){}
void Persona::setNombre(string){}
void Persona::setSexo(string){}
void Persona::setTipo(int){}
void Persona::setPoder(int){}

//Getters
string Persona::getNacion(){}
string Persona::getNombre(){}
string Persona::getSexo(){}
int Persona::getEdad(){}
int Persona::getTipo(){}
int Persona::getPoder(){}

string toString(){}