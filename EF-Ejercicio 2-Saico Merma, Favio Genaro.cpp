#include <iostream>
#include <conio.h>

using namespace std;
/*
Elabore un algoritmo que almacene en una matriz las ventas de un
grupo de 5 proveedores, cada proveedor con 4 ventas cada uno.
El programa debe averiguar el promedio de cada proveedor según
sus ventas, e imprimir la matriz visualizando también al costado de
la matriz su respectivo promedio de cada proveedor, como
también el promedio general a pagar por el total de proveedores.
No se olvide que los datos son ingresados por el teclado.
*/
int main(){
	int T[5][4],i=0,j=0,SUMA[5];
	float Promedio[5],SumaT;
	for (i=0; i<5; i++) 
	{
		cout<<"Ingrese el numero de ventas del proveerdor "<<i+1<<endl;
		for(j=0;j<4;j++)
	 	{
	 		cout<<"Venta numero "<<j+1<<":";
			cin>>T[i][j];
			SUMA[i]+=T[i][j];	
	
		}	
		cout<<endl;
	}	
	//imprimiendo la matriz		
				
	for (i=0; i<5; i++) 
	{
		cout<<"Proveedor numero "<<i+1<<":  ";
		for(j=0;j<4;j++)
	 	{
	 	cout<<T[i][j]<<"\t";		
		}
		Promedio[i]=SUMA[i]/4;	
		cout<<Promedio[i]<<endl;
	}
	cout<<"El promedio general es: ";
	for (i=0; i<5; i++) 
	{
		for(j=0;j<4;j++)
	 	{
			SumaT+=T[i][j];	
		}
	}	
	cout<<SumaT/5<<endl;
	 	
	system("PAUSE");
	return 0;
}
