/*Lea un numero entero y determine si el n�mero es positivo, negativo o nulo. 
Para cada caso escriba un mensaje.*/

//6161fd

#include <iostream>
#include<stdlib.h>
using namespace  std;
/*int main()
{
	//1.	Dado dos n�meros enteros determine cu�l es el mayor.
	int num1,num2;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	
	if (num1>num2)
		{
		cout<<num1<<" es mayor  y "<<num2<<" es menor.";
		}//el endl da una linea de separacion.
	else 
		if(num1<num2)
			{
			cout<<num2<<" es mayor  y "<<num1<<" es menor.";
			}
		else
			{
			cout<<num1<<" y "<<num2<<" son iguales.";
			}	
		
	return 0;
	system ("PAUSE");		
}*/

/*
int main()
{
	//1.	Dado dos n�meros enteros determine cu�l es el mayor.
	int num1,num2,num3;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	
	cout<<"Ingrese el tercer numero"<<endl;
	cin>>num3;
	
	if (num1>num2 && num1>num3)
		{
		cout<<num3<<" es mayor ";
		}//el endl da una linea de separacion.
	else 
		if(num2>num3 && num2>num1)
			{
			cout<<num2<<" es mayor";
			}
		else
		{
			if(num3>num2 && num3>num1)
				{
				cout<<num3<<" es mayor";
				}
			else
				{
				cout<<"Los numeros son iguales";
				}	
		}		
	return 0;
	system ("PAUSE");		
}
*/

/*3.	Por estos d�as el Ej�rcito Peruano, est� realizando la  �Leva �, para incorporar  
nuevos reclutas a sus filas .Para ello, El �ltimo fin de semana levo un buen n�mero de j�venes 
varones. Los requisitos para ser enrolado son: edad m�xima 21 a�os, estatura   m�nima 1.58  mt. 
Y peso m�ximo ,90 Kilos.El programa debe leer la identificaci�n, edad, estatura y peso de los 
posibles reclutas. Verifique que cada uno de ellos cumpla con las condiciones de enrolamiento; 
si es as�, imprimase la identificaci�n, edad, estatura y peso; como tambi�n un mensaje de bienvenida 
a nuestro Glorioso Ejercito.*/


int main()
{
	//1.	Dado dos n�meros enteros determine cu�l es el mayor.
	int edad,estatura,peso,dni;
	
	cout<<"Ingrese DNI:"<<endl;
	cin>>dni;
	
	cout<<"Ingrese su edad:"<<endl;
	cin>>edad;
	
	if (edad>=18 && edad<=21)
	{
		cout<<"Ingrese su estatura en cm:"<<endl;
		cin>>estatura;
		
		if(estatura>=158)
		{
			cout<<"Ingrese su peso:"<<endl;
			cin>>peso;
			if (peso<=90)
			{
			cout<<"Apto,bienvenida a nuestro Glorioso Ejercito :)"<<endl<<"Identificacion: "<<dni<<endl;
			cout<<"Edad: "<<edad<<endl<<"Estatura: "<<estatura<<endl<<"Peso: "<<peso;
		
			}
			else
			{
			cout<<"No apto por peso :(";
			}
		}
		else
			{
			cout<<"No apto por estatura :(";
			}
	}
	else 
		{
		cout<<"No apto por edad :(";
		}
		
	return 0;
	system ("PAUSE");		
}







