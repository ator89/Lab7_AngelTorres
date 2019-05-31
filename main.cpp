#include "Persona.h"
#include "AirBender.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void menu();

int main(){

	//variables menú principal
	bool menuActivo = true;
	int opcionMenu = -1;

	while(menuActivo){

		do{
			cin.clear();
			menu();
			cin >> opcionMenu;
			switch(opcionMenu){
				case 1:{//Agregar
					cin.clear();
					cout << "\n\n\tAgregar Personas\n";

					int cantidadPelo;
					string colorFlecha;
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
					
					if(tipo == 1){
						cout << "Ingrese la cantidad de pelo: ";
						cin >> cantidadPelo;
						cout << "Ingrese la edad: ";
						cin >> colorFlecha;
						//(int cPelo, string cFlecha, string _nacion, string _nombre, string _sexo, int _tipo)
						Persona* p = new AirBender(cantidadPelo,colorFlecha,nacion,nombre,sexo,edad,1);
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