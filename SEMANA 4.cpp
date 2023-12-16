#include <iostream>
#include<stdlib.h>
using namespace  std;
/*
7)	Tres personas deciden invertir su dinero para fundar una empresa. 
Cada una de ellas invierte una cantidad distinta. Obtener el porcentaje que 
cada quien invierte con respecto a la cantidad total invertida.
*/
/*int main()
{

	double in1,in2,in3,total=0,por1,por2,por3;
	
	cout<<"Ingrese la primera inversion:"<<endl;
	cin>>in1;	
	cout<<"Ingrese la segunda inversion:"<<endl;
	cin>>in2;	
	cout<<"Ingrese la tercera inversion:"<<endl;
	cin>>in3;
		
	total=in1+in2+in3;
	por1=(in1/total)*100;
	por2=(in2/total)*100;
	por3=(in3/total)*100;	
	
	cout<<endl;//espacio
	
	cout<<"Total de inversion es: "<<total<<endl;
	
	cout<<endl;
	
	cout<<"PORCENTAJES DE INVERSION"<<endl;
	cout<<"La primera inversion representa el "<<por1<<"%"<<endl;
	cout<<"La segunda inversion representa el "<<por2<<"%"<<endl;
	cout<<"La tercera inversion representa el "<<por3<<"%"<<endl;	
		
return 0;
system ("PAUSE");
}  */



/*
Un hombre desea saber cuanto dinero se genera por concepto de intereses 
sobre la cantidad que tiene en inversión en el banco. El decidirá reinvertir 
los intereses siempre y cuando estos excedan a 7000 soles, y en ese caso desea 
saber cuanto dinero tendrá finalmente en su cuenta.
*/

/*
int main()
{

	double din,t_inte,inte=0;
	
	cout<<"Ingrese la cantidad depositada:"<<endl;
	cin>>din;	
		
	cout<<"Ingrese el taza de interes en porcentaje (%):"<<endl;
	cin>>t_inte;
	
	inte=(din*t_inte)/100;
				
	if(inte>7000)
	{
	din=din + (din*t_inte)/100;
	cout<<"El interes es "<<inte<<", debe reinvertir el interes"<<endl;
	cout<<"El dinero total: s/."<<din<<" :) "<<endl;
	}
	else	
	{
	cout<<"El interes es "<<inte<<", no se reinvierte el interes :("<<endl;
	}	
		
return 0;
system ("PAUSE");
} */


/*
Determinar si un alumno aprueba o reprueba un curso, 
sabiendo que aprobara si su promedio de tres calificaciones 
es mayor o igual a 10.5; reprueba en caso contrario.
*/
/*int main()
{

	double cal1,cal2,cal3,pro=0;
	
	cout<<"Ingrese las tres calificaciones:"<<endl;
	cin>>cal1>>cal2>>cal3;	
	
	pro=(cal1+cal2+cal3)/3;
			
	if(pro>=10.5)		
	{	
	cout<<"Aprobo el curso con "<<pro<<" :) "<<endl;
	}
	else	
	{
	cout<<"Desaprobo el curso con "<<pro<<" :( "<<endl;
	}	
		
return 0;
system ("PAUSE");
}*/



/*
En un almacén se hace un 20% de descuento a los clientes 
cuya compra supere los $1000  ¿Cual será la cantidad que 
pagara una persona por su compra?
*/
/*int main()
{

	double compra,desc;
	
	cout<<"Ingrese el costo de la compra:"<<endl;
	cin>>compra;	
				
	if(compra>=1000)		
	{	
	desc=compra*0.20;
	compra=compra-desc;
	
	cout<<"Recibe el descuento de s/."<<desc<<" :) "<<endl;
	cout<<"Total a pagar: s/."<<compra<<endl;
	}
	else	
	{
	cout<<"No recibe descuento :("<<endl;
	cout<<"Total a pagar: s/."<<compra<<endl;
	}	
		
return 0;
system ("PAUSE");
}*/

/*Dos personas llegan a un almacén donde se hace un 20% de descuento 
a los clientes cuya compra supere los $1000  ¿Cual será la cantidad 
que pagara cada persona por su compra?. Asi como tambien se desea saber 
la suma total de las compras.*/
/*int main()
{

	double compra1,compra2,desc1,desc2,compraT=0;
	
	cout<<"Ingrese el costo de la primera compra:"<<endl;
	cin>>compra1;	
	cout<<"Ingrese el costo de la segunda compra:"<<endl;
	cin>>compra2;	
	
	cout<<endl;//espacio
	
	if(compra1>=1000)		
	{	
	desc1=compra1*0.20;
	compra1=compra1-desc1;
	
	cout<<"Recibe el descuento de s/."<<desc1<<" :) "<<endl;
	cout<<"Total a pagar: s/."<<compra1<<endl;
	}
	else	
	{
	cout<<"No recibe descuento :("<<endl;
	cout<<"Total a pagar: s/."<<compra1<<endl;
	}	
	
	cout<<endl;
			
	if(compra2>=1000)		
	{	
	desc2=compra2*0.20;
	compra2=compra2-desc2;
	
	cout<<"Recibe el descuento de s/."<<desc2<<" :) "<<endl;
	cout<<"Total a pagar: s/."<<compra2<<endl;
	}
	else	
	{
	cout<<"No recibe descuento :("<<endl;
	cout<<"Total a pagar: s/."<<compra2<<endl;
	}		
		
	compraT=compra1+compra2;	
	cout<<"La suma de las compras es: s/."<<compraT;	
		
return 0;
system ("PAUSE");
}*/


/*Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:
	-Si trabaja 40 horas o menos se le paga $16 por hora
	-Si trabaja más de 40 horas se le paga $16 por cada una de las primeras 40 
	horas y $20 por cada hora extra */

/*int main()
{

	double h_tra,total,adicional;
	
	cout<<"Ingrese la cantidad de horas trabajadas:"<<endl;
	cin>>h_tra;	
	
	cout<<endl;//espacio
	
	if(h_tra<=40)		
	{	
	total=40*16;
	cout<<"Recibe un pago de s/.16 la hora"<<endl;
	cout<<"Total a pagar: s/."<<total<<endl;
	}
	else if (h_tra>40)	
	{
	adicional=(h_tra-40)*20;
	total=adicional+(40*16)	;
		
	cout<<"Recibe un pago de s/.20 por cada hora extra"<<endl;
	cout<<"Total a pagar: s/."<<total<<endl;
	}	
			
return 0;
system ("PAUSE");
} */



/*
Calcular el total que una persona debe pagar en una llantera,
 si el precio de cada llanta es de $800 si se compran menos de 
 5 llantas y de $700 si se compran 5 o mas.
*/
/*int main()
{

	double cant,total;
	
	cout<<"Ingrese la cantidad de llantas compradas:"<<endl;
	cin>>cant;	
	
	cout<<endl;//espacio
	
	if(cant<5)		
	{	
	total=cant*800;
	cout<<"Total a pagar: s/."<<total<<endl;
	}
	else if (cant>=5)	
	{
	total=cant*700	;
	cout<<"Total a pagar: s/."<<total<<endl;
	}	
			
return 0;
system ("PAUSE");
}*/

/*
Calcular el total que una persona debe pagar en una llantera, 
si el precio de cada llanta es de $800 si se compran menos de 5 llantas y 
de $700 si se compran mas o igua 5 y si compra o mas de 10 el precio es 600.
*/
int main()
{

	double cant,total;
	
	cout<<"Ingrese la cantidad de llantas compradas:"<<endl;
	cin>>cant;	
	
	cout<<endl;//espacio
	
	if(cant<5)		
	{	
	total=cant*800;
	cout<<"Total a pagar: s/."<<total<<endl;
	}
	else if (cant>=5 && cant<10)	
	{
	total=cant*700	;
	cout<<"Total a pagar: s/."<<total<<endl;
	}	
	else if (cant>=10)	
	{
	total=cant*600;
	cout<<"Total a pagar: s/."<<total<<endl;
	}			
return 0;
system ("PAUSE");
}





