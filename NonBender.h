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
		~NonBender();

		//Setters
		void setTrabajo(string);
		void setFuerza(string);
		void setVelocidad(string);

		//Getters
		string getTrabajo();
		int getFuerza();
		int get velocidad();
};

#endif