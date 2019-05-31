#ifndef OFENSIVO_H
#define OFENSIVO_H

class Ofensivo:public PoderEspcial{
	private:
		int rango;
		int fuerza;
	public:
		//Constructor y destructor
		Ofensivo();
		~Ofensivo();

		//Setters
		void setRango(int);
		void setFuerza(int);

		//Getters
		int getRango();
		int getFuerza();
};

#endif