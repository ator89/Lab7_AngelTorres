#include "PoderEspecial.h"
#ifndef OFENSIVO_H
#define OFENSIVO_H

class Ofensivo:public PoderEspecial{
	private:
		int rango;
		int fuerza;
	public:
		//Constructores y destructor
		Ofensivo();
		Ofensivo(int,int, string,int,int);
		~Ofensivo();

		//Setters
		void setRango(int);
		void setFuerza(int);

		//Getters
		int getRango();
		int getFuerza();

		virtual string toString();
};

#endif