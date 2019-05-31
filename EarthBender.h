#include "Persona.h"
#include "PoderEspecial.h"

#ifndef EARTHBENDER_H
#define EARTHBENDER_H

class EarthBender:public Persona{
	private:
		int num_coles;
		int graduacion;
		PoderEspecial* poder;
	public:
		//Constructores
		EarthBender();
		EarthBender(int,int,PoderEspecial*, string,string,string,int,int);
		//Destructor
		~EarthBender();

		//Setters
		void setNumColes(int);
		void setGraduacion(int);
		void setPoderEspecial(PoderEspecial*);

		//Getters
		int getNumColes();
		int getGraduacion();
		PoderEspecial* getPoderEspecial();

		virtual string toString();
};

#endif