#include "Persona.h"
#include "PoderEspecial.h"

#ifndef AIRBENDER_H
#define AIRBENDER_H

class AirBender:public Persona{
	private:
		int cantidadPelo;
		string colorFlecha;
		PoderEspecial* poder;
	public:
		//Constructores
		AirBender();
		AirBender(int,string,PoderEspecial*, string,string,string,int,int);
		//Destructor
		~AirBender();

		//Setters
		void setCantidadPelo(int);
		void setColorFlecha(string);
		void setPoderEspecial(PoderEspecial*);

		//Getters
		int getCantidadPelo();
		string getColorFlecha();
		PoderEspecial* getPoderEspecial();

		virtual string toString();
};

#endif