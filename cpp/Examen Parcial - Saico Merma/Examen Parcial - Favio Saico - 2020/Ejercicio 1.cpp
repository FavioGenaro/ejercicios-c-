//Favio Genaro Saico Merma
/*
Pregunta 1.											
1.- Mostrar el siguiente menú de opciones y resolver los problemas de cada opción, hasta ingresar 3 de salir.
				MENU DE OPCIONES 					(7 puntos)
  				 *******************
[1]: Escriba un algoritmo para determinar las posibles adquisiciones que se pueden  hacer con 87 soles sin que sobre dinero de 3 productos de 5 , 7 y 19 soles.  	
[2]: Se tienen cuatro esferas A, B, C y D de las cuales se sabe que tres son de igual peso y una diferente. 
	Realice un programa en C que reciba como datos los pesos de las cuatro esferas y determine cual es la esfera diferente y si es de mayor o menor peso.
[3]: Salir

*/

#include<iostream>
#include<stdlib.h>

#define cp1 5
#define cp2 7
#define cp3 19

using namespace std;

int main(){
	
	//Declaración de variables
	int cant1=1,cant2=1,cant3=1,restante,suma; //para el caso 1	cant1[18],cant2[13],cant3[5]
	int num1=1,num,cont=1,sumaS=0;//para el caso 2
	int op;
	string op1;
	
	for(;;){
	system("cls");
	cout<<"\t\t<<<<<MENU DE OPCIONES>>>>>"<<endl<<endl;
    cout<<"\t\t[1]: Posibles adquisiciones con 87 de 3 productos"<<endl;
	cout<<"\t\t[2]: A,B,C,D"<<endl;
	cout<<"\t\t[3]: Salir"<<endl;
	cout<<"Ingrese una opcion :"<<endl;
    cin>>op;
    
	system("cls");
	
		switch(op)
	    {	             
	        case 1:	
					cout<<"Las posibles adquisiciones con 87 soles es: ";
					do {
						cant2=1;
						cant3=1;
						restante=87-cp1*cant1;
						while(restante>cp2*cant2+cp3*cant3){
							restante=restante-cp2*cant2;
								if (restante%cp3==0){
									cant3=restante/cp3;	
								} else{
									cant2=cant2+1;
								}																				
						}						
						suma=cp1*cant1+cp2*cant2+cp3*cant3;
						cant1=cant1+1;
				
					}while(suma!=87 || cant1!=18);	
						
					cout<<endl;			
					cout<<"x es igual a "<<cant1<<endl;
					cout<<"y es igual a "<<cant2<<endl;
					cout<<"z es igual a "<<cant3<<endl;
					
					system ("pause");
					break;
					
	        case 2:		
					system ("pause");									
					break;	
					
	        case 3:	cout<<"Esta seguro que desea salir? (S/N)";
				    cin>>op1;
			    	if (op1=="s" || op1 == "S"){		
						system("cls");
			 			cout<<"************** GRACIAS POR SU PREFERENCIA ***************";
						return 0;
						system ("pause"); 
					}	
		}
	}
}
