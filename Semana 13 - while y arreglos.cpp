#include <iostream>
#include<stdlib.h>
using namespace  std;
//Leer 10 n�meros e imprimir solamente los n�meros positivos
/*int main()
{
	int i=0,t[10];
	while(i<10){
		cout<<"Ingrese un numero: ";
		cin>>t[i];
		i++;		
	}
	i=0;
	cout<<endl;
	cout<<"Los numeros positivos son: "<<endl;
	while(i<10){
		if(t[i]>0){
			cout<<t[i]<<"  ";
		}
		i++	;	
	}	
	return 0; 
	system("PAUSE");
}*/
/*
Leer 10 n�meros e imprimir solamente los n�meros NEGATIVOS y cantos n�meros positivos hay
*/
/*int main()
{
int i=0,t[10],cont=0;
	while(i<10){
		cout<<"Ingrese un numero: ";
		cin>>t[i];
		i++;		
	}
	i=0;
	cout<<endl;
	cout<<"Los numeros negativos son: "<<endl;
	while(i<10){
		if(t[i]<0){
			cout<<t[i]<<"  ";
		}
		if(t[i]>0){
			cont++;
		}
		i++	;	
	}
	cout<<"\nHay "<<cont<<" numeros positivos";
	return 0; 
	system("PAUSE");
}*/
/*
Estado a�os.civil (a.- soltero, b. Casado, c. Viudo, d. Divorciado)
Dise�e un programa  que lea todos estos datos, e imprima el n�mero 
de censo de todas las j�venes solteras que est�n entre 16 y 21 
*/
/*int main()
{
int i=0,edad,cont=0,cant=0;
string civil,sexo;
	cout<<"Ingrese la cantidad de personas a registrar: ";
	cin>>cant;
	while(i<cant){
		cout<<"Ingrese su estado civil (s,c,v,d): ";
		cin>>civil;
		cout<<"Ingrese su edad: ";
		cin>>edad;
		cout<<"Ingrese su sexo (M o F): ";
		cin>>sexo;
		i++;
		if(civil=="s" && edad>16 && edad<21 && sexo=="F"){
			cont++;
		}
		cout<<endl;		
	}
	cout<<"\nHay "<<cont<<" jovenes solteras de entre 16 y 21";
	return 0; 
	system("PAUSE");
}*/
/*
Un grupo de 10 estudiantes presentan un examen de F�sica. Dise�e un diagrama 
que lea por cada estudiante la calificaci�n obtenida y calcule e imprima:
A.- La cantidad de estudiantes que obtuvieron una calificaci�n menor a 10.
B.- La cantidad de estudiantes que obtuvieron una calificaci�n de 10 o m�s pero menor que 18.
C.- La cantidad de estudiantes que obtuvieron una calificaci�n de 18 o m�s.
*/
/*int main()
{
int i=0,nota,cont=0,cont2,cont3,cant=0;
string civil,sexo;

	while(i<10){
		cout<<"Ingrese la nota del estudiante "<<i+1<<": ";
		cin>>nota;
		
		if(nota>=0 && nota<10){
			cont++;
			i++;
		}
		else if(nota>=10 && nota<18){
			cont2++;
			i++;
		}
		else if(nota>=18 && nota<=20){
			cont3++;
			i++;
		}
		else{
			cout<<"\nLa nota debe estar entre 0-20"<<endl;
			cout<<"Ingreselo nuevamente"<<endl;
			cout<<endl;
		}			
	}
	cout<<"\nLas notas entre 0-10 es: "<<cont;
	cout<<"\nLas notas entre 11-17 es: "<<cont2;
	cout<<"\nLas notas entre 18-20 es: "<<cont3;
	return 0; 
	system("PAUSE");
}*/
/*
Un grupo de N estudiantes presentan un examen de F�sica. Dise�e un diagrama 
que lea por cada estudiante la calificaci�n obtenida, valide la calificaci�n 
entre 0 y 20 ambos inclusive, y calcule e imprima:
A.- La cantidad de estudiantes que obtuvieron una calificaci�n menor a 10.5 (Desaprobado)
B.- La cantidad de estudiantes que obtuvieron una calificaci�n de mayor igual 10.5 (aprobado) 
*/
/*int main(){
	int i=0,cont=0,cont2,cant=0;
	double nota;
	cout<<"Ingrese la cantidad de estdiantes: ";
	cin>>cant;	
	
	while(i<cant){
		cout<<"Ingrese la nota del estudiante "<<i+1<<": ";
		cin>>nota;
		
		if(nota>=0 && nota<10.5){
			cont++;
			i++;
		}
		else if(nota>=10.5 && nota<=20){
			cont2++;
			i++;
		}
		else{
			cout<<"\nLa nota debe estar entre 0-20"<<endl;
			cout<<"Ingreselo nuevamente"<<endl;
			cout<<endl;
		}			
	}
	cout<<"\nLa cantidad de aprobados es: "<<cont;
	cout<<"\nLa cantidad de desaprobados es: "<<cont2;
	return 0; 
	system("PAUSE");
}*/
/*
Una persona debe realizar un muestreo con 5 personas para determinar 
el promedio de peso de los ni�os, j�venes, adultos y viejos que existen 
en su zona habitacional. Se determinan las categor�as con base  en la sig, tabla:
		CATEGORIA			EDAD
		Ni�os				0 - 12
		J�venes			13 - 29
		Adultos			30 - 59
		Viejos				60 en adelante
*/
/*int main(){
	int i=0,edad;
	float peso,sumapeso1=0,sumapeso2=0,sumapeso3=0,sumapeso4=0,cont1=0,cont2=0,cont3=0,cont4=0;
		
	while(i<5){
		cout<<"\nPERSONA "<<i+1<<endl;		
		cout<<"Ingrese su edad: ";
		cin>>edad;
		cout<<"Ingrese su peso: ";
		cin>>peso;
		if(edad>=0 && edad<=12){
			sumapeso1+=peso;
			cont1++;
			i++;
		}
		else if(edad>=13 && edad<=29){
			sumapeso2+=peso;
			cont2++;
			i++;
		}else if(edad>=30 && edad<=59){
			sumapeso3+=peso;
			cont3++;
			i++;
		}else if(edad>=60){
			sumapeso4+=peso;
			cont4++;
			i++;
		}
		else{
			cout<<"\nLa edad no puede ser negativa"<<endl;
			cout<<"Ingreselo nuevamente"<<endl;
			cout<<endl;
		}			
	}
	
	cout<<"\nEl promedio de los pesos de los ni�os es: "<<sumapeso1/cont1;
	cout<<"\nEl promedio de los pesos de los jovenes es: "<<sumapeso2/cont2;
	cout<<"\nEl promedio de los pesos de los adultos es: "<<sumapeso3/cont3;
	cout<<"\nEl promedio de los pesos de los viejos es: "<<sumapeso4/cont4;
	return 0; 
	system("PAUSE");
}*/
/*
El Depto. de Seguridad Publica y Transito del D.F. desea saber, 
de los n autos que entran a la ciudad de M�xico, cuantos entran 
con calcoman�a de cada color. Conociendo el �ltimo d�gito de la 
placa de cada autom�vil se puede determinar el color de la calcoman�a 
utilizando la sig. relaci�n:

		D�GITO		COLOR
		1 o 2			amarilla
		3 o 4			rosa
		5 o 6			roja
		7 o 8			verde
		9 o 0			azul
*/
int main(){
	int i=0,digito,cantidad,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
	cout<<"Ingrese el numero de autos: ";
	cin>>cantidad;
	while(i<cantidad){
		cout<<"\nAUTO"<<i+1<<endl;		
		cout<<"Ingrese el el �ltimo d�gito de la  placa: ";
		cin>>digito;

		if(digito==1 || digito==2){
			cont1++;
			i++;
		}
		else if(digito==3 || digito==4){
			cont2++;
			i++;
		}else if(digito==5 || digito==6){		
			cont3++;
			i++;	
		}else if(digito==7 || digito==8){
			cont4++;
			i++;
		}else if(digito==9 || digito==0){
			cont5++;
			i++;
		}
		else{
			cout<<"\nEl digito esta entre 0-9"<<endl;
			cout<<"Ingreselo nuevamente"<<endl;
			cout<<endl;
		}			
	}	
	cout<<"\nLa cantidad de color amarillo: "<<cont1;
	cout<<"\nLa cantidad de color rosa: "<<cont2;
	cout<<"\nLa cantidad de color roja: "<<cont3;
	cout<<"\nLa cantidad de color verde: "<<cont4;
	cout<<"\nLa cantidad de color azul: "<<cont5;
	return 0; 
	system("PAUSE");
}




