#include "Persona.h"
#ifndef NONBENDER_H
#define NONBENDER_H

class NonBender:public Persona{
	private:
		string trabajo;
		int fuerza;
		int velocidad;
	public:
		NonBender();
		NonBender(string,int,int,string,string,string,int,int);
		~NonBender();

		//Setters
		void setTrabajo(string);
		void setFuerza(int);
		void setVelocidad(int);

		//Getters
		string getTrabajo();
		int getFuerza();
		int getVelocidad();

		virtual string toString();
};

#endif