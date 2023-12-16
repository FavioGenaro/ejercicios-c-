#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void aleatorio(void){ //ejercicio de serie fibonacci 1 1 2 3 5 8 13
	int num=0,contador=0,dato=0;
	
	srand(time(NULL)); // genera un numero aleatorio
	dato=1+rand()%(100); //almaceno el numero aleatorio
	
	do {
		cout<<"Digite un numero: ";
		cin>>num; 
		
		if(num>dato){
		cout<<"\nDigite un numero menor\n";
		}
		if(num<dato){
		cout<<"\nDigite un numero mayor\n";
		}
		contador++;
	}while(num !=dato);
	
	cout<<"\nFELICIDADES ADIVINASTE EL NUMERO\n";
	cout<<"Numero de intentos: "<<contador<<endl;	
}

//Mostrar los elementos de un arreglo con sus índices asociados
void arreglo2(void){ //arreglo de dos dimensiones con numeros alearios
	int num[100][100], fila=0, columna=0,dato=0;
	
	cout<<"Digite el numero de filas: ";
	cin>>fila;
	cout<<"Digite el numero de columnas: ";
	cin>>columna;
	
	srand(time(NULL));// genera un numero aleatorio
	
	for (int i=0;i<fila;i++)
	{ //relleno la matriz
		for (int j=0;j<columna;j++)
		{
			dato=1+rand()%(100);			
			num[i][j]=dato;	
		}; 			
	}
			
	//Imprimo la matriz
	cout<<"\nLa matriz es la siguiente:\n";
	for (int i=0;i<fila;i++)
	{
		for (int j=0;j<columna;j++)
		{ 	
			cout<<num[i][j]<<"\t";	
		}
	cout<<endl;
	}	
}

int main(){
	arreglo2();	
	system ("pause");
	return 0;	//system pause te muestra en pantalla que pulses una tecla para finalizar el programa, y el getch no 	
}
