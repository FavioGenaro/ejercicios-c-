#include<iostream>
#include<conio.h>
#include<ctype.h>

using namespace std;

#define cAT 2.5 // Pago por teja de cat A
#define cBT 2.0 // Pago por teja de cat B
#define cCT 1.5 // Pago por teja de cat C

#define cAL 2.0 // Pago por loseta de cat A
#define cBL 1.5 // Pago por loseta de cat B
#define cCL 1.0 // Pago por loseta de cat C

#define B1 0.0 // 0%   Bonificación 1
#define B2 0.5 // 50%  Bonificación 2
#define B3 1.0 // 100% Bonificación 3
#define B4 1.5 // 150% Bonificación 4

#define des 25 //descuento por seguro

int main(){
	//VARIABLES
	int cant;
	char tipo,categ;
	float pagoS,pagoT,pagoU,bonif;
	
	//INGRESO DE DATOS
	cout<<"Ingrese el tipo de producto que produce (Tejas=T, Losetas=L): ";
	cin>>tipo;
	tipo=toupper(tipo);
	cout<<"Ingrese la categoria (A,B,C): ";
	cin>>categ;
	categ=toupper(categ);
	cout<<"Ingrese la cantidad producida: ";
	cin>>cant;
	//PROCESO
	switch(tipo) {
		case 'T':
			switch (categ)
			{
				case 'A': 	pagoU=cAT;break;		
				case 'B': 	pagoU=cBT;break;
				case 'C': 	pagoU=cCT;break;
				default: cout<<"\n DATO ERRADO  ";
				return(0);
				getche();
			}
			break;		
		case 'L':
			switch (categ)
			{
				case 'A': 	pagoU=cAL;break;	
				case 'B': 	pagoU=cBL;break;
				case 'C': 	pagoU=cCL;break;
				default: cout<<"\n DATO ERRADO  ";
				return(0);
				getche();
			}
			break;
		default: cout<<"\n DATO ERRADO  ";
				 return(0);
				 getche();
	}
	pagoS=cant*pagoU;
	if (cant>=1 && cant<=250){
		bonif=pagoS*B1;
	}
	else if (cant>=251 && cant<=500){
		bonif=pagoS*B2;
	}
	else if (cant>=501 && cant<=1000){
		bonif=pagoS*B3;
	}		
	else if (cant>=1001){
		bonif=pagoS*B4;
	}
	
	pagoT=pagoS+bonif-des;
	//SALIDA	
	cout<<endl;
	//cout<<"Cantidad:               "<<cant<<endl;
	cout<<"Pago por unidad:		 S/."<<pagoU<<endl;
	cout<<"Pago neto:      		 S/."<<pagoS<<endl;
	cout<<"Bonificacion:   		 S/."<<bonif<<endl;
	cout<<"Descuento por seguro: S/."<<des<<endl;
	cout<<"Pago total:     		 S/."<<pagoT<<endl;
	
	cout<<"\n***FIN DEL PROGRAMA***"<<endl;
	return(0);
	getche();	
}
