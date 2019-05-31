#include "PoderEspecial.h"
#ifndef CURACION_H
#define CURACION_H

class Curacion:public PoderEspecial{
	private:
		string tipoCuracion;
	public:
		//Constructores y destructor
		Curacion();
		Curacion(string, string,int,int);
		~Curacion();

		//Setters
		void setCuracion(string);

		//Getters
		string getCuracion();

		virtual string toString();
};

#endif