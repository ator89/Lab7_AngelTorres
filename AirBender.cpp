AirBender();
~AirBender();

//Setters
void setCantidadPelo(int);
void setColorFlecha(string);

//Getters
int getCantidadPelo();
string getColorFlecha();

//Setters
virtual void setNacion(string);
virtual void setNombre(string);
virtual void setSexo(string);
virtual void setTipo(int);
virtual void setPoder(int);

//Getters
virtual string getNacion();
virtual string getNombre();
virtual string getSexo();
virtual int getEdad();
virtual int getTipo();
virtual int getPoder();