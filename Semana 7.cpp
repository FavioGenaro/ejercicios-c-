#include <iostream>
#include<stdlib.h>
using namespace  std;

/*
Dado 6 números entre positivos y negativos, sumar todos los números positivos y sumar todos los números negativos. 
Luego imprimir los números negativos y los números positivos, como también la suma de positivos y negativos
*/
/*int main()
{
	
	double num1, num2,num3,num4,num5,num6,sumap=0,sumai=0;
	
	cout<<"Ingrese primer numero:"<<endl;
	cin>>num1;
	cout<<"Ingrese segundo numero:"<<endl;
	cin>>num2;
	cout<<"Ingrese tercer numero:"<<endl;
	cin>>num3;
	cout<<"Ingrese cuarto numero:"<<endl;
	cin>>num4;
	cout<<"Ingrese cuarto numero:"<<endl;
	cin>>num5;
	cout<<"Ingrese cuarto numero:"<<endl;
	cin>>num6;
		
	cout<<endl;	
	cout<<"Los numeros positivos son:"<<endl;
	if(num1>0) //positivos
	{
	sumap=sumap+num1;
	cout<<num1<<endl;
	}	
	if(num2>0) 
	{
	sumap=sumap+num2;
	cout<<num2<<endl;
	}
	if(num3>0) 
	{
	sumap=sumap+num3;
	cout<<num3<<endl;
	}
	if(num4>0)
	{
	sumap=sumap+num4;
	cout<<num4<<endl;
	}
	if(num5>0) 
	{
	sumap=sumap+num5;
	cout<<num5<<endl;
	}
	if(num6>0) 
	{
	sumap=sumap+num6;
	cout<<num6<<endl;
	}
	cout<<"La suma de los numeros positivos es "<<sumap<<endl;
	
	cout<<endl;	
	cout<<"Los numeros negativos son:"<<endl;
	if(num1<0) //negativos
	{
	sumai=sumai+num1;
	cout<<num1<<endl;
	}	
	if(num2<0) 
	{
	sumai=sumai+num2;
	cout<<num2<<endl;
	}
	if(num3<0) 
	{
	sumai=sumai+num3;
	cout<<num3<<endl;
	}
	if(num4<0) 
	{
	sumai=sumai+num4;
	cout<<num4<<endl;
	}
	if(num5<0) 
	{
	sumai=sumai+num5;
	cout<<num5<<endl;
	}
	if(num6<0)
	{
	sumai=sumai+num6;
	cout<<num6<<endl;
	}
	
	cout<<"La suma de los numeros negativos es "<<sumai<<endl;
	
return 0;
system ("PAUSE");
} */

/*
Calcular la media aritmética de un conjunto de 4 notas finales de los 2 alumnos del curso de informática, 
averiguar también cuántos aprobaron y cuántos desaprobaron dicho curso, sabiendo que el promedio aprobatoria 
es a partir de 10.5 .
*/

/*int main()
{
	
	double nota1p, nota2p,nota3p,nota4p,promediop;
	double nota1s, nota2s,nota3s,nota4s,promedios;
	
	cout<<"Ingrese las 4 notas del primer alumno:"<<endl;
	cin>>nota1p,nota2p,nota3p,nota4p;
	cout<<"Ingrese las 4 notas del segundo alumno:"<<endl;
	cin>>nota1s, nota2s,nota3s,nota4s;
	
	promediop=(nota1p+nota2p+nota3p+nota4p)/4;
	promedios=(nota1s+nota2s+nota3s+nota4s)/4;
	
	cout<<endl;	
	
	cout<<"El promedio del primer alumno es: "<<promediop<<endl;
	if(promediop>=10.5) 
	{
	cout<<"El primer alumno esta aprobado :)"<<endl;
	}	
	else
	{
	cout<<"El primer alumno esta desaprobado :("<<endl;	
	}
	
	cout<<endl;	
		
	cout<<"El promedio del segundo alumno es: "<<promedios<<endl;
	if(promedios>=10.5) 
	{
	cout<<"El segundo alumno esta aprobado :)"<<endl;
	}	
	else
	{
	cout<<"El segundo alumno esta desaprobado :("<<endl;	
	}

	
return 0;
system ("PAUSE");
} */

/*
Lea 6 números naturales y obtenga, cuántos de ellos son menores iguales de 20, 
mayores de 20 y menores de 55 y cuántos son mayores de iguales de 55. 
Al final indique cuántos están comprendidos en cada intervalo.
*/
/*int main()
{
	
	double num1, num2,num3,num4,num5,num6;
	int cont1=0,cont2=0,cont3=0;
	cout<<"Ingrese primer numero:"<<endl;
	cin>>num1;
	cout<<"Ingrese segundo numero:"<<endl;
	cin>>num2;
	cout<<"Ingrese tercer numero:"<<endl;
	cin>>num3;
	cout<<"Ingrese cuarto numero:"<<endl;
	cin>>num4;
	cout<<"Ingrese cuarto numero:"<<endl;
	cin>>num5;
	cout<<"Ingrese cuarto numero:"<<endl;
	cin>>num6;
	
	
	if(num1<=20) 
	{
		cont1=cont1+1;
		cout<<num1<<" Es menor igual que 20"<<endl;
	}	
	else if(num1>20 && num1<55)
	{
		cont2=cont2+1;
		cout<<num1<<" Es mayor que 20 y menor que 55"<<endl;
	}
	else if(num1>=55)
	{
		cont3=cont3+1;
		cout<<num1<<" Es mayor igual que 55"<<endl;
	}
	
	if(num2<=20) 
	{	
		cont1=cont1+1;
		cout<<num2<<" Es menor igual que 20"<<endl;
	}	
	else if(num2>20 && num2<55)
	{
		cont2=cont2+1;
		cout<<num2<<" Es mayor que 20 y menor que 55"<<endl;
	}
	else if(num2>=55)
	{
		cont3=cont3+1;
		cout<<num2<<" Es mayor igual que 55"<<endl;
	}
	
	if(num3<=20) 
	{
		cont1=cont1+1;
		cout<<num3<<" Es menor igual que 20"<<endl;
	}	
	else if(num3>20 && num3<55)
	{
		cont2=cont2+1;
		cout<<num3<<" Es mayor que 20 y menor que 55"<<endl;
	}
	else if(num3>=55)
	{
		cont3=cont3+1;
		cout<<num3<<" Es mayor igual que 55"<<endl;
	}
	
	if(num4<=20) 
	{
		cont1=cont1+1;
		cout<<num4<<" Es menor igual que 20"<<endl;
	}	
	else if(num4>20 && num4<55)
	{
		cont2=cont2+1;
		cout<<num4<<" Es mayor que 20 y menor que 55"<<endl;
	}
	else if(num4>=55)
	{
		cont3=cont3+1;
		cout<<num4<<" Es mayor igual que 55"<<endl;
	}
	
	if(num5<=20) 
	{
		cont1=cont1+1;
		cout<<num5<<" Es menor igual que 20"<<endl;
	}	
	else if(num5>20 && num5<55)
	{
		cont2=cont2+1;
		cout<<num5<<" Es mayor que 20 y menor que 55"<<endl;
	}
	else if(num5>=55)
	{
		cont3=cont3+1;
		cout<<num5<<" Es mayor igual que 55"<<endl;
	}
	
	if(num6<=20) 
	{
		cont1=cont1+1;
		cout<<num6<<" Es menor igual que 20"<<endl;
	}	
	else if(num6>20 && num6<55)
	{
		cont2=cont2+1;
		cout<<num6<<" Es mayor que 20 y menor que 55"<<endl;
	}
	else if(num6>=55)
	{
		cont3=cont3+1;
		cout<<num6<<" Es mayor igual que 55"<<endl;
	}
	cout<<endl;
	cout<<"Numeros menores iguales que 20: "<<cont1<<endl;
	cout<<"Numeros mayores que 20 y menores que 55: "<<cont2<<endl;
	cout<<"Numeros mayores iguales que 55: "<<cont3<<endl;
return 0;
system ("PAUSE");
}*/

/*
La municipalidad de Magdalena desea saber cuántos contribuyentes poseen casas de 1,2 o más de 3 pisos. 
Para ello la oficina de catastro verifica a 4 contribuyentes, y muestra al final la cantidad de contribuyentes 
con 1,2 o más de 3 pisos.
*/
int main()
{
	
	int casa1, casa2,casa3,casa4;
	int cont1=0,cont2=0,cont3=0 ;
	
	cout<<"Ingrese el numero de pisos del primer contribuyente:"<<endl;
	cin>>casa1;
	cout<<"Ingrese el numero de pisos del segundo contribuyente:"<<endl;
	cin>>casa2;
	cout<<"Ingrese el numero de pisos del tercer contribuyente:"<<endl;
	cin>>casa3;
	cout<<"Ingrese el numero de pisos del cuarto contribuyente:"<<endl;
	cin>>casa4;
	
	
	if(casa1==1) 
	{
		cont1=cont1+1;
	}	
	else if(casa1==2)
	{
		cont2=cont2+1;
		
	}
	else if(casa1>=3)
	{
		cont3=cont3+1;
	}
	
	
	if(casa2==1) 
	{
		cont1=cont1+1;
	}	
	else if(casa2==2)
	{
		cont2=cont2+1;
		
	}
	else if(casa2>=3)
	{
		cont3=cont3+1;
	}
	
	
	if(casa3==1) 
	{
		cont1=cont1+1;
	}	
	else if(casa3==2)
	{
		cont2=cont2+1;
		
	}
	else if(casa3>=3)
	{
		cont3=cont3+1;
	}
	
	
	if(casa4==1) 
	{
		cont1=cont1+1;
	}	
	else if(casa4==2)
	{
		cont2=cont2+1;
		
	}
	else if(casa4>=3)
	{
		cont3=cont3+1;
	}
	cout<<"Cantidad de contribuyentes con casa de 1 piso: "<<cont1<<endl;
	cout<<"Cantidad de contribuyentes con casa de 2 piso: "<<cont2<<endl;
	cout<<"Cantidad de contribuyentes con casa de 3 a mas pisos: "<<cont3<<endl;
return 0;
system ("PAUSE");
}



