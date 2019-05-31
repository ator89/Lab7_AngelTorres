#include "Persona.h"
#include "PoderEspecial.h"

#ifndef FIRENDER_H
#define FIRENDER_H

class FireBender:public Persona{
	private:
		int num_cicatriz;
		int victorias;
		PoderEspecial* poder;
	public:
		//Constructores
		FireBender();
		FireBender(int,int,PoderEspecial*, string,string,string,int,int);
		//Destructor
		~FireBender();

		//Setters
		void setNumCicatriz(int);
		void setVictorias(int);
		void setPoderEspecial(PoderEspecial*);

		//Getters
		int getNumCicatriz();
		int getVictorias();
		PoderEspecial* getPoderEspecial();

		virtual string toString();
};

#endif