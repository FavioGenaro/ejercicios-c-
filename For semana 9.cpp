#include <iostream>
#include<stdlib.h>
using namespace  std;

/*Se tiene 2 alumnos , y se desea ayudar a todos aquellos que están desaprobados en el promedio final aumentándoles 2 puntos (a su promedio), 
siempre y cuando hayan entregado su respectivo trabajo .De no cumplirse con estas condiciones , el promedio debe permanecer igual.
*/
/*int main()
{
	int par=0,impar=0,i;

	for (i=1; i<=100; i++) 
	{
		if(i%2==0)
		{
			par=par+i;
		}
		else
		{
			impar=impar+i;
		}
	}
cout<<"\nSuma de Pares es : "<<par<<endl;
cout<<"Suma de Impares es: "<<impar<<endl;
	
	return 0; 
	system("PAUSE");	
	
}*/
/*
Calcule la suma de la siguiente expresión :
				1/2 + 2/3 + 3/4 +...+ 100/101
*/
/*int main()
{
	double suma=0,i;

	for (i=1; i<=100; i++) 
	{
		suma=(i/(i+1))+suma;
	}
cout<<"\nLa suma es : "<<suma<<endl;
	
	return 0; 
	system("PAUSE");	
	
}*/

/*
1.	Se tiene N calificaciones de un grupo de alumnos que se presentaron a un examen de matemáticas.
Calcule e imprima cuantas calificaciones hay en cada uno de los siguientes rangos:	 
           	            0.....  5		
	 	 6..... 10
		11….15
                16.....20
*/
/*int main()
{
	double N=0,i,calificacion=0;
	int r1=0,r2=0,r3=0,r4=0;
	cout<<"Ingrese la cantidad de calificaciones: ";
	cin>>N;
	for (i=1; i<=N; i++) 
	{
		cout<<"Ingrese la calificacion "<<i<<": ";
		cin>>calificacion;
		if(calificacion>=0 && calificacion<=5){
			r1=r1+1;
		}
		else if(calificacion>=6 && calificacion<=10){
			r2=r2+1;
		}
		else if(calificacion>=11 && calificacion<=15){
			r3=r3+1;
		}
		else if(calificacion>=16 && calificacion<=20){
			r4=r4+1;
		}
		else if(calificacion<0){
			cout<<"La nota es negativa, vuelva a ingresar la nota"<<endl;
			i--;
		}	
	}
	cout<<endl;
	cout<<"Numero de notas entre 0 y 5: "<<r1<<endl;
	cout<<"Numero de notas entre 6 y 10: "<<r2<<endl;
	cout<<"Numero de notas entre 11 y 15: "<<r3<<endl;
	cout<<"Numero de notas entre 16 y 20: "<<r4<<endl;	
	return 0; 
	system("PAUSE");		
}*/

/*
Calcule el resultado de la siguiente serie:

1 +  1  +  1  +  1 + …+  1  
	2       3      4            N
*/
/*int main()
{
	double N=0,i,suma=0;

	cout<<"Ingrese el valor de N: ";
	cin>>N;
	for (i=1; i<=N; i++) 
	{
	suma=suma + (1/i);
	}
	
	cout<<endl;
	cout<<"La suma es: "<<suma<<endl;	
	
	return 0; 
	system("PAUSE");		
} */
/*
Calcule la suma de los # positivos y la suma de los negativos comprendidos entre el 3 y 999.
 Debe calcular también el promedio de los # positivos e negativos.
*/
/*int main()
{
	int i,r1=0,r2=0,sumai=0, sumap=0;
	
	for(i=3; i<=999; i++) 
	{
		if(i%2==0){
		sumap=sumap + i;
		r1=r1+1;
		}
		else{
		sumai=sumai + i;
		r2=r2+1;
		}	
	}	
	cout<<endl;
	cout<<"La suma de los pares es: "<<sumap<<endl;	
	cout<<"La suma de los impares es: "<<sumai<<endl;	
	cout<<endl;
	cout<<"El promedio de los pares es: "<<sumap/r1<<endl;	
	cout<<"El promedio de los impares es: "<<sumai/r2<<endl;
	
	return 0; 
	system("PAUSE");		
}*/
/*
La municipalidad de Magdalena desea saber cuántos contribuyentes
poseen casas de 1,2 o más de 3 pisos. Para ello la oficina de catastro
verifica a N contribuyentes, y muestra al final la cantidad de contribuyentes
con 1,2 o más de 3 pisos, como también el total de contribuyentes.
*/
int main()
{
	int contrib,piso1=0,piso2=0,piso3=0,cont=1,R=0; 
	cout<<"Ingrese el numero de contribuyentes: ";
	cin>>contrib;

	while (cont<=contrib) 
	{ 
	cout<<"Numero de pisos del contribuyente "<<cont<<": ";
	cin>>R;
	
		if(R==1) 
		{ 
		piso1=piso1+1;
		} 
		else if(R==2)
		{
		piso2=piso2+1; 
		} 
		else if(R>=3)
		{
		piso3=piso3+1; 
		}
		cont++; 
	}
	
	cout<<endl;
	cout<<"Numero de contribuyentes con casa de 1 piso: "<<piso1<<endl;
	cout<<"Numero de contribuyentes con casa de 2 pisos: "<<piso2<<endl;
	cout<<"Numero de contribuyentes con casa de 3 a mas pisos: "<<piso3<<endl;
	cout<<"El numero de contribuyentes es: "<<contrib<<endl;
	
	return 0; 
	system("PAUSE");
}


