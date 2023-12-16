#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
//Definición de las constantes
#define p40 0.4 
#define p20 0.2 
#define p10 0.1 

using namespace std;
int main ()
{
	float precio,mc,des,mp;
	int na;
	//datos
	cout<<"Ingrese el numero de articulos: "<<endl;
	cin>>na;
	cout<<"Ingrese el precio del articulo: "<<endl;
	cin>>precio;
	//proceso
	if(na>0 && precio>0){
		mc=na*precio;
		if(na<=100){
			des=mc*p40;
		}
		else
			if(na>=25 && na<100)
			des=mc*p20;
			else
				if (na>=100 && na<25)
					des=mc*p10;
				else
					des=0;
				
	mp=mc-des;
	cout<<"Numero de articulos: "<<na<<endl;
	cout<<"Precio del articulo: "<<precio<<endl;
	cout<<"Monto de compra: "<<mc<<endl;
	cout<<"Monto de descuento: "<<des<<endl;
	cout<<"Monto a pagar: "<<mp<<endl;
	}
	else
	cout<<"Dato errado"<<endl;	
	getche();
	return(0);
}
