#include <iostream>
#include<stdlib.h>
using namespace  std;
int main()
/*{
	int num1,num2;
	cout<<"ingrese el primer numero"<<endl;
	cin>>num1;
	
	cout<<"ingrese el segundo numero"<<endl;
	cin>>num2;
	
	
	//positivos
	cout<<"Los numeros positivos son:"<<endl;
	if (num1>0)
	{
		cout<<num1<<endl;
	}
	if (num2>0)
	{
		cout<<num2<<endl;
	}
	cout<<"Los numeros negativos son:"<<endl;
	if (num1<0)
	{
		cout<<num1<<endl;
	}
	if (num2<0)
	{
		cout<<num2<<endl;
	}
	//par o impar
	cout<<"Los numeros pares son:"<<endl;
	if (num1%2==0)
	{
		cout<<num1<<endl;
	}
	if (num2%2==0)
	{
		cout<<num2<<endl;
	}
	cout<<"Los numeros impares son:"<<endl;
	if (num1%2!=0)
	{
		cout<<num1<<endl;
	}
	if (num2%2!=0)
	{
		cout<<num2<<endl;
	}
			
	return 0; 
	system("PAUSE");
}*/


/*La empresa DuraPlas S.A. desea calcular el salario de dos trabajadores. El cual se obtiene de la sig. manera: 
--Si trabaja 48 horas a la semana se le pagara 10 soles por hora; 
mientras supere las 48 horas semanales se le pagara 10 soles por cada una de las primeras 48 horas y 15 soles por cada hora extra. 
También se sabe que si trabaja menos de 48 horas semanales se le descontara un jornal de 80 soles al mes. 
Imprimir El salario de cada trabajador al mes, como también el promedio de los salarios de los dos trabajadores.*/
{
	//considero a un mes como 4 semanas
	int hora1=0, hora2=0, extra1=0,extra2=0, sueldo1=0, sueldo2=0, promedio=0 ;
	cout<<"Ingrese las horas trabajadas del primer trabajador:"<<endl;
	cin>>hora1;
	cout<<"Ingrese las horas trabajadas del segundo trabajador:"<<endl;
	cin>>hora2;	
	cout<<endl;//espacio
	//sueldo del primer trabajador
	if(hora1==48)
	{
		sueldo1=(48*10)*4;		
	}
	if(hora1>48)
	{
		extra1=(hora1-48)*15;
		sueldo1=((48*10)+extra1)*4;
	}
	if(hora1<48)
	{
		sueldo1=(48*10*4)-80;
	}
	cout<<"Sueldo mensual del primer trabajador: "<<sueldo1<<endl;	
	//sueldo del segundo trabajador
	if(hora2==48)
	{
		sueldo2=(48*10)*4;		
	}
	if(hora2>48)
	{
		extra2=(hora2-48)*15;
		sueldo2=((48*10)+extra2)*4;
	}
	if(hora2<48)
	{
		sueldo2=(48*10*4)-80;
	}
	cout<<"Sueldo mensual del segundo trabajador: "<<sueldo2<<endl;	
	promedio=(sueldo1+sueldo2)/2;
	cout<<"Sueldo promedio de los 2 trabajadores es: "<<promedio<<endl;
	return 0; 
	system("PAUSE");
}


