#include "Persona.h"
#include "AirBender.h"
#include "NonBender.h"
#include "PoderEspecial.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Invocacion.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

void menu();

int main(){

	//variables menú principal
	bool menuActivo = true;
	int opcionMenu = -1;
	vector<Persona*> lista;

	while(menuActivo){

		do{
			cin.clear();
			menu();
			cin >> opcionMenu;
			switch(opcionMenu){
				case 1:{//Agregar
					cin.clear();
					cout << "\n\n\tAgregar Personas\n";

					//variables poder especial
					string nombrePoder;
					int nivelPoder;

					//variables ofensivo
					int oRango;
					int ofuerza;


					//variables airbender
					int cantidadPelo;
					string colorFlecha;
					int tipoPoder;

					
					//variables nonbender
					string trabajo;
					int fuerza;
					int velocidad;

					//variables persona
					string nacion;
					string nombre;
					string sexo;
					int edad;
					int tipo;

					cout << "Ingrese la nación: ";
					cin >> nacion;
					cout << "Ingrese el nombre: ";
					cin >> nombre;
					cout << "Ingrese el sexo: ";
					cin >> sexo;
					cout << "Ingrese la edad: ";
					cin >> edad;
					cout << "Ingrese el tipo \n(1:Air Bender, 2:Fire Bender, 3:Water Bender, 4:Earth Bender, 5:Non Bender): ";
					cin >> tipo;
					
					if(tipo == 1){//Agregar air bender
						cout << "Ingrese la cantidad de pelo: ";
						cin >> cantidadPelo;
						cout << "Color de Flecha: ";
						cin >> colorFlecha;
						cout << "nombre poder: ";
						cin >> nombrePoder;
						cout << "nivel poder: ";
						cin >> nivelPoder;

						cout << "Ingrese el tipo poder \n(1:Ofensivo, 2:Defensivo, 3:Curación, 4:Invocar Animal): ";
						cin >> tipoPoder;

						if(tipoPoder ==1){
							cout << "Ingrese el rango: ";
							cin >> oRango;
							cout << "Ingrese la fuerza: ";
							cin >> ofuerza;
						}
						//(string _nombre, int _nivel, int _tipo)
						PoderEspecial* poder = new Ofensivo(oRango,ofuerza,nombrePoder,nivelPoder,1);
						//(int cPelo, string cFlecha, string _nacion, string _nombre, string _sexo, int _tipo)
						
						Persona* p = new AirBender(cantidadPelo,colorFlecha,poder,nacion,nombre,sexo,edad,1);
						lista.push_back(p);

						cout << p->toString() <<" agregado con éxito\n";
						
					}

					if(tipo == 5){//Agregar non bender
						cout << "En qué trabaja: ";
						cin >> trabajo;
						cout << "Velocidad: ";
						cin >> velocidad;
						cout << "Nivel de fuerza: ";
						cin >> fuerza;
						//(int cPelo, string cFlecha, string _nacion, string _nombre, string _sexo, int _tipo)
						Persona* p = new NonBender(trabajo,fuerza,velocidad,nacion,nombre,sexo,edad,5);
						cout << p->toString() <<" agregado con éxito\n";
					}
				}
				break;
				case 2://Listar
				break;
				case 3://Eliminar
				break;
				case 0://Salir
				break;
				default:
					cout << "Seleccione una opción válida.\n";
				break;
			}
		}while(opcionMenu != 0); //end do-while menu activo
		menuActivo = false;
	}//end while menu activo

	//limpiar vector
	for(int i=0; i<lista.size();i++){
		//delete lista[i];
	}
	//lista.clear();
	return 0;
}

void menu(){
	cout << "\n\tRegistro Nacional de los Maestros\n\n"
		<< "1 - Agregar\n"
		<< "2 - Listar\n"
		<< "3 - Eliminar\n"
		<< "0 - Salir\n"
		<< "Seleccione una opción: \n";
}


/*
	//variables menú principal
	bool menuActivo = true;
	int opcionMenu = -1;

	while(menuActivo){

		do{
			cin.clear();
			menu();
			cin >> opcionMenu;
			switch(opcionMenu){
				case 1://Agregar
				break;
				case 2://Listar
				break;
				case 3://Eliminar
				break;
				case 0://Salir
				break;
				default:
					cout << "Seleccione una opción válida.\n";
				break;
			}
		}while(opcionMenu != 0); //end do-while menu activo
		menuActivo = false;
	}//end while menu activo

*/