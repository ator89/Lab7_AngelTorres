#include "Persona.h"
#include "PoderEspecial.h"

#ifndef WATERBENDER_H
#define WATERBENDER_H

class WaterBender:public Persona{
	private:
		string tribu;
		string arma;
		PoderEspecial* poder;
	public:
		//Constructores
		WaterBender();
		WaterBender(string,string,PoderEspecial*, string,string,string,int,int);
		//Destructor
		~WaterBender();

		//Setters
		void setTribu(string);
		void setArma(string);
		void setPoderEspecial(PoderEspecial*);

		//Getters
		string getTribu();
		string getArma();
		PoderEspecial* getPoderEspecial();

		virtual string toString();
};

#endif