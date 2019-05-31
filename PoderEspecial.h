#ifndef PODERESPECIAL_H
#define PODERESPECIAL_H

#include <string>
using std::string;

class PoderEspecial{
protected:
	string nombre;
	int nivel;
	int tipo;
public:
	//Constructores
	PoderEspecial();
	PoderEspecial(string,int,int);
	~PoderEspecial();

	//Getters
	string getNombre();
	int getNivel();
	int getTipo();

	//Setters
	void setNombre(string);
	void setNivel(int);
	void setTipo(int);

	virtual string toString() = 0;
};

#endif