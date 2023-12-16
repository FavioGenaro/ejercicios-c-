#include <iostream>
#include<stdlib.h>
using namespace  std;
/*
int main()
{
	int var[10],i;
	for (i=0; i<10; i++) 
	{
	 var[i]=i+1;
	}	
	cout<<"El arreglo es:"<<endl;
	cout<<"Elemento"<<"\t"<<"Valor"<<endl;
	for (i=0; i<10; i++) 
	{
	 cout<<"\t"<<i<<"\t"<<var[i]<<endl;
	}
	return 0; 
	system("PAUSE");
}
*/

/*
2.Dado el siguiente arreglo unidimensional
obtener la suma de los valores de dicho
arreglo e imprima el arreglo.
*/
/*int main()
{
	int var[]={1,2,3,4,5,6},i,suma=0;
	for (i=0; i<6; i++) 
	{
	 suma=suma + var[i];
	}	
	cout<<"El arreglo es:"<<endl;
	cout<<"Elemento"<<"\t"<<"Valor"<<endl;
	for (i=0; i<6; i++) 
	{
	 cout<<"\t"<<i<<"\t"<<var[i]<<endl;
	}		
	cout<<"La suma de los valores es: "<<suma<<endl;
	return 0; 
	system("PAUSE");
}*/
/*
Dado dos vectores A, B de 5 elementos enteros cada uno, 
y un vector C que contenga la suma de ambos vectores. 
Imprimir vector A, B, y C.
*/
/*int main()
{
int A[5],B[5],C[5],i;

	for (i=0; i<5; i++) 
	{
	 cout<<"Ingrese el valor del vector A["<<i+1<<"]:";
	 cin>>A[i];	 
	}		
	for (i=0; i<5; i++) 
	{
	 cout<<"Ingrese el valor del vector B["<<i+1<<"]:";
	 cin>>B[i];
	 C[i]=A[i]+B[i];
	}
	
	cout<<"\nLa matriz de A es: ";	
	for (i=0; i<5; i++) 
	{
	 cout<<A[i]<<"\t";
	}
	cout<<"\nLa matriz de B es: ";
	for (i=0; i<5; i++) 
	{
	 cout<<B[i]<<"\t";
	}
	cout<<"\nLa matriz de C es: ";
	for (i=0; i<5; i++) 
	{
	 cout<<C[i]<<"\t";
	}				
	return 0; 
	system("PAUSE");
}*/
/*
Codifique un programa, que almacene solamente 10 números dentro 
de un vector T, luego guarde en vector A los números pares 
obtenidos del vector T. Luego imprimir el vector T y los vectores A.
*/

int main()
{
	int T[10],i=0,A[10], cont=0;
	string a = "fds";
	for (i=0; i<10; i++) 
	{
		cout<<"Ingrese el valor del vector TT[i][j]=" ;
	 	cin>>T[i];	
	 	
		if(T[i]%2==0)
		{
			A[i]=T[i];
		}
		else{
			A[i]=0;
		}
	
	}
	cout<<"\nLa matriz de T es: ";	
	for (i=0; i<10; i++) 
	{
	 cout<<T[i]<<"\t";
	}
	cout<<"\nLa matriz de A es: ";
	for (i=0; i<10; i++) 
	{
		if (A[i]==0){
			
		}
		else{
			cout<<A[i]<<"\t";
		}		
	}
}



