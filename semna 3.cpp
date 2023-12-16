#include <iostream>
#include<stdlib.h>
using namespace  std;

/*int main()
{
	
	int subtotal,total,descuento;
	cout<<"Ingrese total de compra:"<<endl;
	cin>>total;
	descuento=subtotal*0.15;
	total=subtotal*0.85;
	
	cout<<"Subtotal: "<<subtotal<<endl;
	cout<<"Descuento: "<<descuento<<endl;
	cout<<"Total a pagar es: "<<total<<endl;
	
	return 0;
	system ("PAUSE");		
}*/

//Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior.
/* int main()
{
	
	int sueldo,aumento,sueldototal;
	cout<<"Ingrese sueldo:"<<endl;
	cin>>sueldo;
	
	aumento=sueldo*0.25;
	sueldototal=sueldo*1.25;
	
	cout<<"Sueldo:..........."<<sueldo<<endl;
	cout<<"Aumento:.........."<<aumento<<endl;
	cout<<"_____________________________"<<aumento<<endl;
	cout<<"Total a pagar:...."<<sueldototal<<endl;
	
	
	return 0;
	system ("PAUSE");		
}*/


/*Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. Dicha calificación se compone de los siguientes porcentajes:
55% del promedio de sus tres calificaciones parciales.
30% de la calificación del examen final. 
15% de la calificación de un trabajo final.*/


/* int main()
{
	
	double p1,p2,p3,pro,examenf,trabajof,califiF;
	
	cout<<"Ingrese nota del parcial 1:"<<endl;
	cin>>p1;
	cout<<"Ingrese nota del parcial 2:"<<endl;
	cin>>p2;
	cout<<"Ingrese nota del parcial 3:"<<endl;
	cin>>p3;
	pro=(p1+p2+p3)/3;
	
	cout<<endl;
	cout<<"Ingrese calificación del examen final:"<<endl;
	cin>>examenf;
	
	cout<<"Ingrese calificación de un trabajo final:"<<endl;
	cin>>trabajof;
		
	califiF=(pro*0.55)+(examenf*0.3)+(trabajof*0.15);
	
	cout<<endl;
	cout<<"Parciales:..............."<<pro<<endl;
	cout<<"Examen final:............"<<examenf<<endl;
	cout<<"Trabajo final:..........."<<trabajof<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"CALIFICACION FINAL:......"<<califiF<<endl;
		
	return 0;
	system ("PAUSE");		
}*/

//Dado un numero entero, determine si en par o impar.
/*
int main()
{	
	int num;
	
	cout<<"Ingrese un numero:"<<endl;
	cin>>num;

	if(num==0)
	{
	cout<<"Ese numero es cero"<<endl;	
	}
	else if (num%2==0)
		{
		cout<<"Ese numero es par"<<endl;	
		}
	else
		{
		cout<<"Ese numero es impar"<<endl;
		}
	
	return 0;
	system ("PAUSE");		
}*/


//Dado dos números enteros, luego sumar solamente si son números pares.

/*int main()
{	
	int num1, num2,suma;
	
	cout<<"Ingrese un numero:"<<endl;
	cin>>num1;
	cout<<"Ingrese otro numero:"<<endl;
	cin>>num2;

	suma=num1+num2;

	if(num1==0 || num2==0)
	{
	cout<<"Uno de los numeros es cero"<<endl;	
	}
	else if (num1%2==0 && num2%2==0)
	{
	cout<<"La suma es "<<suma<<endl;	
	}
	else 
	{
		cout<<"Uno de los numeros es impar"<<endl;	
	}	
		
		
	return 0;
	system ("PAUSE");		
}*/



//Dados cuatro numero enteros, sumar solamente los números pares. Al final imprimir los números pares y su suma

/*int main()
{	
	int num1, num2,num3,num4,suma;
	
	cout<<"Ingrese primer numero:"<<endl;
	cin>>num1;
	cout<<"Ingrese segundo numero:"<<endl;
	cin>>num2;
	cout<<"Ingrese tercer numero:"<<endl;
	cin>>num3;
	cout<<"Ingrese cuarto numero:"<<endl;
	cin>>num4;
	
	suma=0;

cout<<"Los numeros pares son:"<<endl;
	if(num1%2==0)
	{
	suma=suma+num1;
	cout<<num1<<"+"<<endl;
	}

	if(num2%2==0)
	{
	suma=suma+num2;
	cout<<num2<<endl;
	}
	
	if(num3%2==0)
	{
	suma=suma+num3;
	cout<<num3<<endl;
	}
	
	if(num4%2==0)
	{
	suma=suma+num4;
	cout<<num4<<endl;
	}

	cout<<"La suma es "<<suma<<endl;
	
	return 0;
	system ("PAUSE");		
}*/

//Dados cuatro numero enteros, sumar los números pares y sumar los números impares, 
//Al final imprimir los números pares y su suma, como también los números imapres y su suma.

/*int main()
{	
	int num1, num2,num3,num4,sumap=0,sumai=0;
	
	cout<<"Ingrese primer numero:"<<endl;
	cin>>num1;
	cout<<"Ingrese segundo numero:"<<endl;
	cin>>num2;
	cout<<"Ingrese tercer numero:"<<endl;
	cin>>num3;
	cout<<"Ingrese cuarto numero:"<<endl;
	cin>>num4;

	cout<<endl;
	cout<<endl;
	
cout<<"Los numeros pares son:"<<endl;
	if(num1%2==0)
	{
	sumap=sumap+num1;
	cout<<num1<<endl;
	}

	if(num2%2==0)
	{
	sumap=sumap+num2;
	cout<<num2<<endl;
	}
	
	if(num3%2==0)
	{
	sumap=sumap+num3;
	cout<<num3<<endl;
	}
	
	if(num4%2==0)
	{
	sumap=sumap+num4;
	cout<<num4<<endl;
	}

	cout<<"La suma de pares es "<<sumap<<endl;
	
	cout<<endl;
	cout<<endl;
	
	
	cout<<"Los numeros impares son:"<<endl;
	sumai=0;
	if(num1%2>0)
	{
	cout<<num1<<endl;
	sumai=sumai+num1;
	}

	if(num2%2>0)
	{
	cout<<num2<<endl;
	sumai=sumai+num2;
	}
	
	if(num3%2>0)
	{
	cout<<num3<<endl;
	sumai=sumai+num3;
	}
	
	if(num4%2>0)
	{
	cout<<num4<<endl;
	sumai=sumai+num4;
	}
	cout<<"La suma de impares es "<<sumai<<endl;
	
	
	
	return 0;
	system ("PAUSE");		
}*/


//9.	En un hospital existen tres áreas: Ginecología, Pediatría, Traumatología. El presupuesto anual del hospital se reparte conforme a 
	//la sig. tabla:
		//	Área			Porcentaje del presupuesto
			//Ginecología			40%
			//Traumatología		30%
			//Pediatría			30%
	//Obtener la cantidad de dinero que recibirá cada área, para cualquier monto presupuestal.


int main()
{
	
	double presu,pre_g,pre_t,pre_p;
	string area;
	
	cout<<"Ingrese el presupuesto"<<endl;
	cin>>presu;
	
	cout<<"Ingrese el area"<<endl;
	cin>>area;
	
		if (area=="ginecologia")
		{
		pre_g=presu*0.4;
		cout<<"El presupuesto de ginecologia es: "<<pre_g<<endl;
		}
		else if(area=="traumatologia")
		{
		pre_t=presu*0.3;
		cout<<"El presupuesto de traumatologia es: "<<pre_t<<endl;			
		}
		else if(area=="pediatria")
		{
		pre_p=presu*0.3;
		cout<<"El presupuesto de pediatria es: "<<pre_p<<endl;			
		}
		else
		{
		cout<<"Esa area no existe"<<endl;	
		}

}



