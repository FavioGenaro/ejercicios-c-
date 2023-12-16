//Favio Genaro Saico Merma
#include <iostream>
#include <stdlib.h>
#include <ctype.h>

#define pagoM 23
#define pagoT 25.4
#define pagoA 12

using namespace std;

int main(){
	
	//Declaración de variables
	int n,cantHoras=0,cantHorTot=0, complHor=0;
	float sueldo=0;
	char turno;
	
	do{
		cout<<"Ingrese la cantidad de obreros: ";
		cin>>n;	
	}while (n<0); 
	
	for (int i=1; i<=n; i++){
		system("cls");	
		cout<<"\t\t\tPARA EL OBRERO "<<i<<": "<<endl; 
		for (int j=1; j<=5; j++){
			cout<<"DIA "<<j<<": "<<endl;
			do{
				cout<<"Ingrese la cantidad de horas trabajadas: ";
				cin>>cantHoras;	
			}while (cantHoras<0 || cantHoras>24);
						
			do{
				cout<<"Ingrese el turno en el que trabajo [M o T]: ";
				cin>>turno;
				turno=toupper(turno);
			}while (turno!='M' && turno!='T'); 	
					
			cantHorTot=cantHorTot+cantHoras;
							
			if (cantHorTot<40){  //aun no supera las 40 horas
				
				if (turno=='M'){
					sueldo=sueldo+cantHoras*pagoM;
				}else {					
					sueldo=sueldo+cantHoras*pagoT;
				}				
			}else{  //si se superan las 40 horas
				complHor=40-(cantHorTot-cantHoras); //cantidad de horas que faltan para llegar a 40
				if (turno=='M'){					
					sueldo=sueldo+(cantHorTot-40)*pagoA+complHor*pagoM;
				}else {					
					sueldo=sueldo+(cantHorTot-40)*pagoA+complHor*pagoT;
				}					
			}			
		}	
		cout<<endl;			
		cout<<"Sueldo semanal del obrero "<<i<<" es: "<<sueldo<<endl;	//muestro el sueldo de cada uno al terminar el ingreso de datos
		system ("pause");												//el bucle sigue hasta terminar con los n obreros
	}	
	return 0;
	system ("pause"); 	
}

