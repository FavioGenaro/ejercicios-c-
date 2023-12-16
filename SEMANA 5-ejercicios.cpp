#include <iostream>
#include<stdlib.h>
using namespace  std;

/*
1.	Imagínate que estas de paso por una provincia , y sus limites de velocidad son :
-Menor a 60 Km/h                 Velocidad permitida
-De 60 a 65 Km/h                  Peligro , en el limite de velocidad
-Mas de 65 Km/h                   Ha superado los limites de velocidad permitida
Realice un programa que lea la velocidad y escriba un mensaje en cada caso de la velocidad y la multa.
Debe tener en cuenta , que si la velocidad es mayor a 65 Km./h , se le aplicara una multa de :
-65 a 75 Km./h                       S/.300.00
-76 a 85 Km./h                       S/.750.00
-86 a 100 Km./h                     S/.1500.00
-Mas de 100 Km./h                S/.3700.00
*/
/*int main()
{
	double velocidad;
	
	cout<<"Ingrese la velocidad en Km./h"<<endl;
	cin>>velocidad;	
	
	cout<<endl;//espacio
	
	if(velocidad<60)		
	{	
	cout<<"Su velocidad es permitida :) "<<endl;
	}
	
	if (velocidad>=60 && velocidad<=65)	
	{	
	cout<<"Peligro , en el limite de velocidad"<<endl;
	}	
	
	if (velocidad>65)	
	{
	cout<<"Ha superado los limites de velocidad permitida"<<endl;
		if (velocidad>65 && velocidad<=75)	
		{
		cout<<"Tiene que pagar una multa de S/.300.00"<<endl;
		}	
		if (velocidad>75 && velocidad<=85)	
		{
		cout<<"Tiene que pagar una multa de S/.750.00"<<endl;
		}
		if (velocidad>85 && velocidad<=100)	
		{
		cout<<"Tiene que pagar una multa de S/.1500.00"<<endl;
		}
		if (velocidad>100)	
		{
		cout<<"Tiene que pagar una multa de S/.3700.00"<<endl;
		}
	}		
return 0;
system ("PAUSE");
}*/

/*
En una llantería se ha establecido una promoción de las llantas marca “GOODYEAR”, 
dicha promoción consiste en lo siguiente : 
Si la compran menos de cinco llantas el precio es de $150 cada una , 
de $120 si se compran de 5 a 10 y de $90 si se compran mas de 10 .
Obtener la cantidad de dinero que pagara por  cada una de las llantas que compran y 
el pago general por el total de la compra.
*/

/*int main()
{
	int llantas;
	double total=0;
	
	cout<<"Ingrese la cantidad de llantas"<<endl;
	cin>>llantas;	
	
	cout<<endl;//espacio
	
	if(llantas<5)		
	{	
	
	total=llantas*150;
	cout<<"Precio unitario:-----------S/.150.00"<<endl;
	cout<<"Total a pagar:-------------S/."<<total<<".00"<<endl;
	}
	
	if (llantas>=5 && llantas<=10)	
	{	
	total=llantas*120;
	cout<<"Precio unitario:-----------S/.120.00"<<endl;
	cout<<"Total a pagar:-------------S/."<<total<<".00"<<endl;
	}	
	
	if (llantas>10)	
	{
	total=llantas*90;
	cout<<"Precio unitario:-----------S/.90.00"<<endl;	
	cout<<"Total a pagar:-------------S/."<<total<<".00"<<endl;
	}		
return 0;
system ("PAUSE");
}*/

/*
Un Molino agrícola produce alimentos para vacas .Esto se hace mezclando los siguientes 
ingredientes principales : maíz , piedra caliza ,fríjol de soya y comida de pescado,
en forma equitativa .Se hace un pedido al molino de una cierta cantidad de toneladas (métricas) 
de alimento para vacas ,teniendo en cuenta que el molino produce como máximo 100 toneladas de alimento.
Se desea obtener el total a pagar por dicho pedido, si se sabe que el precio por cada Kilogramo de 
ingrediente es $ 0.20, $ 0.12, $ 0.24, $ 0.14 respectivamente
*/
int main()
{
	double cantidad,total=0,maiz,piedraC,frijolS,Cpescado;
	
	cout<<"Ingrese la cantidad de alimento para vacas en toneladas"<<endl;
	cin>>cantidad;	
	
	cout<<endl;//espacio
	
	if(cantidad<=100)		
	{	
	maiz=(cantidad/4)*200; //multiplico por mil  porque los precios eran en kilogramos y no en toneladas
	piedraC=(cantidad/4)*120;
	frijolS=(cantidad/4)*240;
	Cpescado=(cantidad/4)*140;
	total=maiz+piedraC+frijolS+Cpescado;
	
	cout<<"Pago por maiz:----------------------S/."<<maiz<<".00"<<endl;
	cout<<"Pago por piedra caliza:-------------S/."<<piedraC<<".00"<<endl;
	cout<<"Pago por frijol de soya:------------S/."<<frijolS<<".00"<<endl;
	cout<<"Pago por comida pescado:------------S/."<<Cpescado<<".00"<<endl;
	cout<<"Total a pagar:-------------S/."<<total<<".00"<<endl;
	}else{
		cout<<"El molino no puede producir esa cantidad de comidad :("	;
	}		
return 0;
system ("PAUSE");
}

