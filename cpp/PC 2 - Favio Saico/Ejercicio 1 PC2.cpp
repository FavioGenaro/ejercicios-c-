//Favio Genaro Saico Merma
#include <iostream> 
#include <iomanip>  
#include <conio.h>        
#include <stdio.h>         
#include <string.h> 

using namespace std;


void ingresodatos();
void mostrar();
void ordenAlfa();
#define num 900
//Declaración de variables
	int n;
	char nombre[num][100];
int main(){	

	string opSalir;
	int op;
	
	for(;;){
	system("cls");
	cout<<"\t\t\tMENU DE OPCIONES"<<endl;
	cout<<"\t\t\t****************"<<endl<<endl;
    cout<<"\t\t[1]: Ingrese en un arrays una lista de nombres"<<endl;
	cout<<"\t\t[2]: Muestra los nombres ingresados"<<endl;
	cout<<"\t\t[3]: Ordena de forma alfabetica"<<endl;
	cout<<"\t\t[4]: Salir"<<endl;
	cout<<"Ingrese una opcion :"<<endl;
    cin>>op;
    
	system("cls");
	
		switch(op)
	    {	             
	        case 1:		        		
	        		do {
						cout<<"Ingrese la cantidad de nombres: ";
						cin>>n;	
					}while(n<0 || n>num);					
					ingresodatos();					
					system ("pause");
					break;
					
	        case 2:	mostrar();
					system ("pause");									
					break;	
	        
	        case 3: ordenAlfa();
					system ("pause");
					break;
					
	        case 4:	cout<<"Esta seguro que desea salir? (S/N): ";
				    cin>>opSalir;
			    	if (opSalir=="s" || opSalir == "S"){		
						system("cls");
			 			cout<<"************** GRACIAS POR SU PREFERENCIA ***************";
						return 0;
						system ("pause"); 
					}	
		}
	}
}
void ingresodatos(){	
	for (int i=0; i<n; i++){
		cout<<"Ingrese el nombre "<<i+1<<": ";
		cin>>nombre[i];							
	}	
}
void mostrar(){	
	for (int i=0;i<n; i++){
		cout<<i+1<<".- "<<nombre[i]<<endl;					
	}
}
void ordenAlfa(){// ORDENA EN ORDEN ALFABETICO
	char aux[n];
	    
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++) {
			if (strcmp(nombre[i],nombre[j]) > 0){      
				strcpy(aux,nombre[i]);  
				strcpy(nombre[i],nombre[j]);       
				strcpy(nombre[j],aux);
			}
		}
	}         		    	 
    cout<<"LISTA DE NOMBRES ORDENADOS "<<endl;
            for(int i=0;i<n;i++){
            		cout<<i+1<<".- "<<nombre[i]<<endl;
			}           
}


