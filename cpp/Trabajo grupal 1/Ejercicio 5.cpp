//Inclusion de librerias
#include<iostream>
#include<conio.h>
#include<ctype.h> //toupper//
using namespace std;
//Programa principal
int main(){
   //Declaracion de variables
   char algodon, tamano, estampa;
   int descuento = 0;
   
   //Datos
   cout<<"Indique el tipo de algodon, (S) para Simple o (P) para Pima: ";
   cin>>algodon;
   algodon = toupper(algodon);  //Por si el usuario escribe en minuscula
   
   cout<<"\n";
   cout<<"Indique el tipo de prenda, (N) para nino, (J) para joven o (A) para adulto: ";
   cin>>tamano;
   tamano = toupper(tamano);    //Por si el usuario escribe en minuscula

   cout<<"\n";
   cout<<"Indique el tipo de estampado, (S) para Sin estampado o (C) para Con estampado: ";
   cin>>estampa;
   estampa = toupper(estampa);  //Por si el usuario escribe en minuscula
   cout<<"\n";
   
   if((algodon=='S'||algodon=='P')&&(tamano=='N'||tamano=='J'||tamano=='A')&&(estampa=='S'||estampa=='C'))
   {
  	//Proceso
  	 
	 if(algodon=='S'){
	 	if(tamano=='N'){
	 		if(estampa=='S')
	 		   descuento = 3; 
			else 
			   descuento = 5;
		}
		else if(tamano=='J'){
		 	if(estampa=='S')
	 	 	   descuento = 4; 
		 	else 
		 	   descuento = 6;
		}
		else{
		    if(estampa=='S')
	 	 	   descuento = 5; 
		 	else 
		 	   descuento = 7;	
		}  
	}	
	else{
		if(tamano=='N'){
	 		if(estampa=='S')
	 		   descuento = 5; 
			else 
			   descuento = 3;
		}
		else if(tamano=='J'){
		 	if(estampa=='S')
	 	 	   descuento = 6; 
		 	else 
		 	   descuento = 4;
		}
		else{
		    if(estampa=='S')
	 	 	   descuento = 7; 
		 	else 
		 	   descuento = 5;	
		}  	
	}	 	
   }  
   else
    cout<<"Dato errado"<<endl; 
	
   //Salida
    if(descuento!=0)
	{
      cout<<"El descuento para la prenda seleccionada sera del: "<<descuento<<"%"<<endl;	
	} 
      
  getche();
  return 0;
}
