#include <iostream>
#include<stdlib.h>
using namespace  std;
/* cout<<endl;//espacio
1.	La empresa de transporte Angamos S.A. realizará una revisión técnica de sus unidades vehiculares, 
dicha revisión servirá para verificar el estado de conservación de su auto. Si la nota de la revisan 
es menor igual a 10 su estado será Malo, si es más de 10 y menor a igual a 15 será Regular, caso 20 
contrario será estado Bueno.
*/
/*int main()
{
	double nota;
	
	cout<<"Ingrese la nota de la revision:";
	cin>>nota;	
	if(nota>=0 && nota<=10)		
	{	
	cout<<"El vehiculo se encuentra en mal estado :(";
	}
	else if(nota>10 && nota<=15)
	{
		cout<<"El vehiculo se encuentra en estado regular :|";
	}
	else if (nota>15 && nota<=20)
	{
		cout<<"El vehiculo se encuentra en buen estado :)";
	}
	else
	{
		cout<<"Nota invalida";
	}
				
return 0;
system ("PAUSE");
}*/

/*
La empresa de transporte Angamos S.A. realizará una revisión técnica de sus unidades vehiculares, 
dicha revisión servirá para verificar el estado de conservación de su auto. 
Se sabe que ingresan tres autos para la revisión técnica, y la calificación es: 
Si la nota de la revisan es menor igual a 10 su estado será Malo, si es más de 10 y 
menor o igual a 15 será Regular, caso contrario será estado Bueno. Tambien se desea 
saber el promedio de los tres autos.
*/
/*
int main()
{
	double nota1,nota2,nota3, promedio=0;
	
	cout<<"Ingrese la nota del vehiculo 1:";
	cin>>nota1;	
	cout<<"Ingrese la nota del vehiculo 2:";
	cin>>nota2;
	cout<<"Ingrese la nota del vehiculo 3:";
	cin>>nota3;
	
	if(nota1>=0 && nota1<=10)		
	{	
	cout<<"El primer vehiculo se encuentra en mal estado :("<<endl;
	}
	else if(nota1>10 && nota1<=15)
	{
		cout<<"El primer vehiculo se encuentra en estado regular :|"<<endl;
	}
	else if (nota1>15 && nota1<=20)
	{
		cout<<"El primer vehiculo se encuentra en buen estado :)"<<endl;
	}
	else
	{
		cout<<"Nota invalida";
	}
	
	
	if(nota2>=0 && nota2<=10)		
	{	
	cout<<"El segundo vehiculo se encuentra en mal estado :("<<endl;
	}
	else if(nota2>10 && nota2<=15)
	{
		cout<<"El segundo vehiculo se encuentra en estado regular :|"<<endl;
	}
	else if (nota2>15 && nota2<=20)
	{
		cout<<"El segundo vehiculo se encuentra en buen estado :)"<<endl;
	}
	else
	{
		cout<<"Nota invalida";
	}
	
	
	if(nota3>=0 && nota3<=10)		
	{	
	cout<<"El tercer vehiculo se encuentra en mal estado :("<<endl;
	}
	else if(nota3>10 && nota3<=15)
	{
		cout<<"El tercer vehiculo se encuentra en estado regular :|"<<endl;
	}
	else if (nota3>15 && nota3<=20)
	{
		cout<<"El tercer vehiculo se encuentra en buen estado :)"<<endl;
	}
	else
	{
		cout<<"Nota invalida";
	}	
		
	promedio= (nota1+nota2+nota3)/3;	
	cout<<"El promedio de las tres notas es: "<<promedio;
				
return 0;
system ("PAUSE");
} */
/*
int main()
{
	double nota[3], promedio=0;
	string orden[3]={"primer", "segundo", "tercer"};
	
	cout<<"Ingrese la nota del vehiculo 1:";
	cin>>nota[1];	
	cout<<"Ingrese la nota del vehiculo 2:";
	cin>>nota[2];
	cout<<"Ingrese la nota del vehiculo 3:";
	cin>>nota[3];
	
	for (int i=0;i<3;i++)
	{		
		if(nota[i]>=0 && nota[i]<=10)		
		{	
		cout<<"El "<<orden[i]<<" vehiculo se encuentra en mal estado :("<<endl;
		}
		else if(nota[i]>10 && nota[i]<=15)
		{
			cout<<"El "<<orden[i]<<" vehiculo se encuentra en estado regular :|"<<endl;
		}
		else if (nota[i]>15 && nota[i]<=20)
		{
			cout<<"El "<<orden[i]<<" vehiculo se encuentra en buen estado :)"<<endl;
		}
		else
		{
			cout<<"Nota invalida";
		}
	}				
	promedio= (nota[0]+nota[1]+nota[2])/3;	
	cout<<"El promedio de las tres notas es: "<<promedio;
				
return 0;
system ("PAUSE");
}*/

/*
Para un alumno que llevan el curso de Programación y Computación en Estudios Generales, 
se pida el ingreso de 2 notas y valide para que las notas ingresadas, sean mayor que cero y menor o igual que 20. 
Obtener el promedio de sus 2 notas del alumno.
*/
/*int main()
{
	double nota1,nota2, promedio=0;
	
	cout<<"Ingrese la nota 1:";
	cin>>nota1;	
	cout<<"Ingrese la nota 2:";
	cin>>nota2;
	
	if(nota1>0 && nota1<=20 && nota2>0 && nota2<=20)		
	{	
	cout<<"La primera y segunda nota son validas"<<endl;
	promedio= (nota1+nota2)/2;	
	cout<<"El promedio de las dos notas es: "<<promedio;
	}
	else
	{
		if(nota1>0 && nota1<=20)		
		{	
		cout<<"La primera nota es validad"<<endl;
		}
		else
		{
			cout<<"La primera nota es invalidad"<<endl;
		}
		
			
		if(nota2>0 && nota2<=20)		
		{	
		cout<<"La segunda nota es validad"<<endl;
		
		}
		else
		{
			cout<<"La segunda nota es invalida"<<endl;
		}
		
		cout<<"No hay promedio por notas invalidas"
	}	
	return 0; 
	system("PAUSE");
}*/	
/*
Para un grupo de dos alumnos que llevan el curso de Programación y Computación en Estudios Generales, 
se pida el ingreso de 2 notas por cada alumno y valide para que las notas ingresadas, sean mayor que cero y menor o igual que 20.
 Obtener el promedio de sus 2 notas por cada alumno y el promedio general.
*/
/*int main()
{
	double nota1,nota2,nota3,nota4, promedio1=0,promedio2=0,promediog=0;
	
	
	cout<<"Ingrese la nota 1 del primer estudiante:";
	cin>>nota1;	
	cout<<"Ingrese la nota 2 del primer estudiante:";
	cin>>nota2;
	
	cout<<"Ingrese la nota 1 del segundo estudiante:";
	cin>>nota1;	
	cout<<"Ingrese la nota 2 del segundo estudiante:";
	cin>>nota2;
	
	
	cout<<endl;	
	cout<<"NOTAS DEL PRIMER ALUMNO"<<endl;	
	if(nota1>0 && nota1<=20 && nota2>0 && nota2<=20)		
	{
	cout<<"La primera y segunda nota son validas"<<endl;
	promedio1= (nota1+nota2)/2;	
	cout<<"El promedio del primer estudiante es: "<<promedio1;
	}
	else
	{
		if(nota1>0 && nota1<=20)		
		{	
		cout<<"La primera nota es valida"<<endl;
		}
		else
		{
			cout<<"La primera nota es invalida"<<endl;
		}
					
		if(nota2>0 && nota2<=20)		
		{	
		cout<<"La segunda nota es valida"<<endl;
		
		}
		else
		{
			cout<<"La segunda nota es invalida"<<endl;
		}
		
		cout<<"No hay promedio por notas invalidas";
	}	
	
	cout<<endl;
	//promedio segundo alumno
	cout<<"NOTAS DEL SEGUNDO ALUMNO"<<endl;
	if(nota3>0 && nota3<=20 && nota4>0 && nota4<=20)		
	{		
	cout<<"La primera y segunda nota son validas"<<endl;
	promedio2= (nota3+nota4)/2;	
	cout<<"El promedio del segundo estudiante es: "<<promedio2;
	}
	else
	{
		if(nota3>0 && nota3<=20)		
		{	
		cout<<"La primera nota es valida"<<endl;
		}
		else
		{
			cout<<"La primera nota es invalida"<<endl;
		}
					
		if(nota4>0 && nota4<=20)		
		{	
		cout<<"La segunda nota es valida"<<endl;
		
		}
		else
		{
			cout<<"La segunda nota es invalida"<<endl;
		}
		
		cout<<"No hay promedio por notas invalidas";
	}
	
	cout<<endl;
	
	if (promedio1==0 || promedio2==0)
	{
		cout<<"No se puede mostrar el promedio general":
	}
	else
	{
		promediog=(promedio1+promedio2)/2;
	}
		
	return 0; 
	system("PAUSE");
}*/
/*
Se tiene 2 alumnos , y se desea ayudar a todos aquellos que están desaprobados en el promedio final aumentándoles 2 puntos (a su promedio), 
siempre y cuando hayan entregado su respectivo trabajo .De no cumplirse con estas condiciones , el promedio debe permanecer igual.
*/
int main()
{
	double promedio1,promedio2;
	string rpt1,rpt2;
	
	cout<<"Ingrese el promedio del primer alumno 1:";
	cin>>promedio1;	
	cout<<"Ingrese el promedio del segundo alumno 1:";
	cin>>promedio2;
	
	cout<<endl;
	
	cout<<"El primer alumno ha entregado todos sus trabajos? Responda ""si"" o ""no"" "<<endl;
	cin>>rpt1;
	
	cout<<"El segundo alumno ha entregado todos sus trabajos? Responda ""si"" o ""no"" "<<endl;
	cin>>rpt2;
	
	if(rpt1=="si")		
	{	
	cout<<"El primer alumno gana dos puntos :)"<<endl;
	promedio1= promedio1+2;	
	cout<<"El promedio final del alumno uno es: "<<promedio1<<endl;
	}
	else
	{
		cout<<"El primer alumno no gana dos puntos :("<<endl;
		cout<<"El promedio final se mantiene: "<<promedio1<<endl;
	}	
	
	if(rpt2=="si")		
	{	
	cout<<"El segundo alumno gana dos puntos :)"<<endl;
	promedio2= promedio2+2;	
	cout<<"El promedio final del alumno uno es: "<<promedio2<<endl;
	}
	else
	{
		cout<<"El segundo alumno no gana dos puntos :("<<endl;
		cout<<"El promedio final se mantiene: "<<promedio2<<endl;
	}	
		
	return 0; 
	system("PAUSE");
}

