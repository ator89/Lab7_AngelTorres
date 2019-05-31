#ifndef PODERESPECIAL_H
#define PODERESPECIAL_H

#include <string>
using std::string;

class PoderEspecial{
protected:
	string nombre;
	int nivel;
public:
	PoderEspecial();
	~PoderEspecial();

	string getNombre();
	int getNivel();

	void setNombre(string);
	void setNivel(int);

};

#endif