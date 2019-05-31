#include "Persona.h"
#ifndef AIRBENDER_H
#define AIRBENDER_H

class AirBender:public Persona{
	private:
		int cantidadPelo;
		string colorFlecha;
	public:
		//Constructores
		AirBender();
		//AirBender(int,string);
		//Persona(string,string,string,int);
		AirBender(int, string, string,string,string,int,int);
		//Destructor
		~AirBender();

		//Setters
		void setCantidadPelo(int);
		void setColorFlecha(string);

		//Getters
		int getCantidadPelo();
		string getColorFlecha();

		virtual string toString();
};

#endif