#include <iostream>
#include<stdlib.h>
using namespace  std;
/*
Sume independientemente los números pares y los números impares
de los números comprendidos entre 1 y 100. Ambos inclusive.
*/
/*int main()
{
	int sumapar=0,sumaimpar=0,R; 
	R=1; 
	while (R<=100) 
	{ 
		if(R%2==0) 
		{ 
		sumapar=sumapar+R;
		} 
		else 
		{
		sumaimpar=sumaimpar+R; 
		} 
		R++; 
	}
	cout<<"Suma de pares: "<<sumapar<<endl;
	cout<<"Suma de impares: "<<sumaimpar<<endl;
	
	return 0; 
	system("PAUSE");
}*/
/*
Calcule el promedio de los números entre 15 y 49, ambos inclusive. 
asi como tambien la suma de los numeros pares.
*/
/*int main()
{
	int sumapar=0,total=0,R; 
	double promedio=0;
	R=15; 
	while (R<=49) 
	{ 
		total=total+R;
		if(R%2==0) 
		{ 
		sumapar=sumapar+R;
		} 		
		R++; 
	}
	
	promedio=total/35;
	cout<<"Suma de pares: "<<sumapar<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	
	return 0; 
	system("PAUSE");
}*/
/*
Ingrese cuatro notas y válida para que las notas ingresadas 
sean mayores que 0 y menores o iguales que 20, al final debe imprimir el promedio.
*/
/*int main()
{
	int nota[4],i=0,suma=0; 
	double promedio=0;
	while (i<4) 
	{ 		
		cout<<"Ingrese la nota "<<i+1<<":";
		cin>>nota[i];

		if(nota[i]>0 && nota[i]<=20) 
		{		
		i++;		
		}
		else
		{ 
		cout<<"La nota no esta en el rango :/, ingresela nuevamente:"<<endl;
		} 			 
	}
	for(i=0;i<4;i++)
	{
		suma=suma+nota[i];
	}	
	promedio=suma/4;
	cout<<"El promedio de notas es: "<<promedio<<endl;	
	return 0; 
	system("PAUSE");
}*/
/*
Dado un conjunto de números positivos y negativos, 
sumar todos los números positivos. 
El número para finalizar es el cero.
*/
/*int main()
{
	int numero,suma=0; 	
	while (numero!=0) 
	{ 		
		cout<<"Ingrese el numero: ";
		cin>>numero;
		if(numero>0)
		{
			suma=suma+numero;
		}			 
	}
	cout<<"La suma de los numeros positivos es: "<<suma<<endl;	
	return 0; 
	system("PAUSE");
}*/
/*
Pida el ingreso de N números y finalice , 
cuando se ingrese un número negativo e imprima 
el promedio de los ingresados. 
*/
int main()
{
	double numero,suma=0,cont=0; 
	double promedio=0;
	while (numero>=0) 
	{ 		
		cout<<"Ingrese el numero: ";
		cin>>numero;
		if(numero>=0)
		{
			suma=suma+numero;
			cont=cont+1;
		}			 
	}
	promedio=suma/cont;
	cout<<"El promedio de los numeros es: "<<promedio<<endl;	
	return 0; 
	system("PAUSE");
}




