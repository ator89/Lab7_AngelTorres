#include "PoderEspecial.h"
#ifndef INVOCACION_H
#define INVOCACION_H

class Invocacion:public PoderEspecial{
	private:
		string nombrem;
		string especie;
		string habilidad;
		string tipom;
	public:
		//Constructores y destructor
		Invocacion();
		Invocacion(string,string, string, string, string,int,int);
		~Invocacion();

		//Setters
		void setNombreM(string);
		void setEspecie(string);
		void setHabilidad(string);
		void setTipoM(string);

		//Getters
		string getNombreM();
		string getEspecie();
		string getHabilidad();
		string getTipoM();

		virtual string toString();
};

#endif