#include "Persona.h"
#include "AirBender.h"
#include "NonBender.h"
#include "PoderEspecial.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Invocacion.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <typeinfo>

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
					//variables defensivo
					int resistencia;
					int duracion;
					//variables curacion
					string curacion;
					//variables invocacion
					string nmascota;
					string especie;
					string habilidad;
					string tipoMascota;


					//variables fire bender
					int cicatrices;
					int victorias;

					//variables airbender
					int cantidadPelo;
					string colorFlecha;
					int tipoPoder;

					//variables water bender
					string tribu;
					string arma;

					//variables earth bender
					int coles;
					int graduacion;

					
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
					}else{

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
								//(string _nombre, int _nivel, int _tipo)
								PoderEspecial* poder = new Ofensivo(oRango,ofuerza,nombrePoder,nivelPoder,1);
								Persona* p = new AirBender(cantidadPelo,colorFlecha,poder,nacion,nombre,sexo,edad,1);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}
							if(tipoPoder == 2){
								cout << "Resistencia: ";
								cin >> resistencia;
								cout << "duracion: ";
								cin >> duracion;
								PoderEspecial* poder = new Defensivo(resistencia,duracion,nombrePoder,nivelPoder,2);
								Persona* p = new AirBender(cantidadPelo,colorFlecha,poder,nacion,nombre,sexo,edad,1);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

							if(tipoPoder == 3){
								cout << "Tipo de curacion: ";
								cin >> curacion;
								PoderEspecial* poder = new Curacion(curacion,nombrePoder,nivelPoder,3);
								Persona* p = new AirBender(cantidadPelo,colorFlecha,poder,nacion,nombre,sexo,edad,1);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

							if(tipoPoder == 4){
								cout << "Nombre Mascota: ";
								cin >> nmascota;
								cout << "especie: ";
								cin >> especie;
								cout << "Habilidad: ";
								cin >> habilidad;
								cout << "Tipo Mascota: (guerra o doméstico)";
								cin >> tipoMascota;
								PoderEspecial* poder = new Invocacion(nmascota,especie,habilidad,tipoMascota,nombrePoder,nivelPoder,4);
								Persona* p = new AirBender(cantidadPelo,colorFlecha,poder,nacion,nombre,sexo,edad,1);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}
						}//end if agregar air bender


						if(tipo == 2){//Agregar fire bender
							cout << "Número de cicatrices: ";
							cin >> cicatrices;
							cout << "Número victorias: ";
							cin >> victorias;


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
								//(string _nombre, int _nivel, int _tipo)
								PoderEspecial* poder = new Ofensivo(oRango,ofuerza,nombrePoder,nivelPoder,1);
								Persona* p = new FireBender(cicatrices,victorias,poder,nacion,nombre,sexo,edad,2);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}
							if(tipoPoder == 2){
								cout << "Resistencia: ";
								cin >> resistencia;
								cout << "duracion: ";
								cin >> duracion;
								PoderEspecial* poder = new Defensivo(resistencia,duracion,nombrePoder,nivelPoder,2);
								Persona* p = new FireBender(cicatrices,victorias,poder,nacion,nombre,sexo,edad,2);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

							if(tipoPoder == 3){
								cout << "Tipo de curacion: ";
								cin >> curacion;
								PoderEspecial* poder = new Curacion(curacion,nombrePoder,nivelPoder,3);
								Persona* p = new FireBender(cicatrices,victorias,poder,nacion,nombre,sexo,edad,2);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

							if(tipoPoder == 4){
								cout << "Nombre Mascota: ";
								cin >> nmascota;
								cout << "especie: ";
								cin >> especie;
								cout << "Habilidad: ";
								cin >> habilidad;
								cout << "Tipo Mascota: (guerra o doméstico)";
								cin >> tipoMascota;
								PoderEspecial* poder = new Invocacion(nmascota,especie,habilidad,tipoMascota,nombrePoder,nivelPoder,4);
								Persona* p = new FireBender(cicatrices,victorias,poder,nacion,nombre,sexo,edad,2);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}
						}//end if agregar fire bender

						if(tipo == 3){//Agregar water bender
							cout << "Nombre Tribu: ";
							cin >> tribu;
							cout << "Tipo de arma: ";
							cin >> arma;

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
								//(string _nombre, int _nivel, int _tipo)
								PoderEspecial* poder = new Ofensivo(oRango,ofuerza,nombrePoder,nivelPoder,1);
								Persona* p = new WaterBender(tribu,arma,poder,nacion,nombre,sexo,edad,3);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}
							if(tipoPoder == 2){
								cout << "Resistencia: ";
								cin >> resistencia;
								cout << "duracion: ";
								cin >> duracion;
								PoderEspecial* poder = new Defensivo(resistencia,duracion,nombrePoder,nivelPoder,2);
								Persona* p = new WaterBender(tribu,arma,poder,nacion,nombre,sexo,edad,3);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

							if(tipoPoder == 3){
								cout << "Tipo de curacion: ";
								cin >> curacion;
								PoderEspecial* poder = new Curacion(curacion,nombrePoder,nivelPoder,3);
								Persona* p = new WaterBender(tribu,arma,poder,nacion,nombre,sexo,edad,3);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

							if(tipoPoder == 4){
								cout << "Nombre Mascota: ";
								cin >> nmascota;
								cout << "especie: ";
								cin >> especie;
								cout << "Habilidad: ";
								cin >> habilidad;
								cout << "Tipo Mascota: (guerra o doméstico)";
								cin >> tipoMascota;
								PoderEspecial* poder = new Invocacion(nmascota,especie,habilidad,tipoMascota,nombrePoder,nivelPoder,4);
								Persona* p = new WaterBender(tribu,arma,poder,nacion,nombre,sexo,edad,3);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}
						}//end if agregar water bender

						if(tipo == 4){//Agregar eart bender
							cout << "Numero coles: ";
							cin >> coles;
							cout << "Graduacion: ";
							cin >> graduacion;

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
								//(string _nombre, int _nivel, int _tipo)
								PoderEspecial* poder = new Ofensivo(oRango,ofuerza,nombrePoder,nivelPoder,1);
								Persona* p = new EarthBender(coles,graduacion,poder,nacion,nombre,sexo,edad,4);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}
							if(tipoPoder == 2){
								cout << "Resistencia: ";
								cin >> resistencia;
								cout << "duracion: ";
								cin >> duracion;
								PoderEspecial* poder = new Defensivo(resistencia,duracion,nombrePoder,nivelPoder,2);
								Persona* p = new EarthBender(coles,graduacion,poder,nacion,nombre,sexo,edad,4);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

							if(tipoPoder == 3){
								cout << "Tipo de curacion: ";
								cin >> curacion;
								PoderEspecial* poder = new Curacion(curacion,nombrePoder,nivelPoder,3);
								Persona* p = new EarthBender(coles,graduacion,poder,nacion,nombre,sexo,edad,4);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

							if(tipoPoder == 4){
								cout << "Nombre Mascota: ";
								cin >> nmascota;
								cout << "especie: ";
								cin >> especie;
								cout << "Habilidad: ";
								cin >> habilidad;
								cout << "Tipo Mascota: (guerra o doméstico)";
								cin >> tipoMascota;
								PoderEspecial* poder = new Invocacion(nmascota,especie,habilidad,tipoMascota,nombrePoder,nivelPoder,4);
								Persona* p = new EarthBender(coles,graduacion,poder,nacion,nombre,sexo,edad,4);
								cout << p->toString() <<" agregado con éxito\n";
								lista.push_back(p);
							}

						}//end if agregar earth bender
						

					}//end else
					
				}//end case 1
				break;
				case 2:{//Listar


					for(int i = 0; i < lista.size(); i++){
						
						if(typeid(WaterBender) == typeid(*lista.at(i))){
							cout << lista.at(i)->toString() << endl;
						}

						if(typeid(FireBender) == typeid(*lista.at(i))){
							cout << lista.at(i)->toString() << endl;
						}

						if(typeid(AirBender) == typeid(*lista.at(i))){
							cout << lista.at(i)->toString() << endl;
						}

						if(typeid(EarthBender) == typeid(*lista.at(i))){
							cout << lista.at(i)->toString() << endl;
						}

						if(typeid(NonBender) == typeid(*lista.at(i))){
							cout << lista.at(i)->toString() << endl;
						}
					}
				}
				break;
				case 3://Eliminar
					cout << "Coming soon...\n";
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