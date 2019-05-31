#include "PoderEspecial.h"
#ifndef DEFENSIVO_H
#define DEFENSIVO_H

class Defensivo:public PoderEspecial{
	private:
		int resistencia;
		int duracion;
	public:
		//Constructores y destructor
		Defensivo();
		Defensivo(int,int, string,int,int);
		~Defensivo();

		//Setters
		void setResistencia(int);
		void setDuracion(int);

		//Getters
		int getResistencia();
		int getDuracion();

		virtual string toString();
};

#endif