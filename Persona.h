#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

class Persona{
protected:
	string nacion;
	string nombre;
	string sexo;
	int edad;
	int tipo;
public:
	//Constructores y destructor
	Persona();
	Persona(string,string,string,int,int);
	~Persona();

	//Setters
	void setNacion(string);
	void setNombre(string);
	void setSexo(string);
	void setEdad(int);
	void setTipo(int);

	//Getters
	string getNacion();
	string getNombre();
	string getSexo();
	int getEdad();
	int getTipo();

	virtual string toString() = 0;

};

#endif