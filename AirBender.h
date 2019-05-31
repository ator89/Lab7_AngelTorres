#include "Persona.h"
#ifndef AIRBENDER_H
#define AIRBENDER_H

class AirBender:public Persona{
	private:
		int cantidadPelo;
		string colorFlecha;
	public:
		AirBender();
		~AirBender();

		//Setters
		void setCantidadPelo(int);
		void setColorFlecha(string);

		//Getters
		int getCantidadPelo();
		string getColorFlecha();

		//Setters
		void setNacion(string);
		void setNombre(string);
		void setSexo(string);
		void setTipo(int);
		void setPoder(int);

		//Getters
		string getNacion();
		string getNombre();
		string getSexo();
		int getEdad();
		int getTipo();
		int getPoder();

		virtual string toString();
};

#endif