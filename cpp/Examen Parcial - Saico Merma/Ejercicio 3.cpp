//Favio Genaro Saico Merma
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	string nombre[30];
	char genero[30];
	float promedio[30],mayorPro=0;
	int n,edad[30],menorEdad=0;
	
	do{
	cout<<"Ingrese la cantidad de estudiantes: (1-30) ";
	cin>>n;
	}while(n<=0 || n>30);
	
	for (int i=0;i<=n; i++){
		system("cls");
		cout<<"ESTUDIANTE "<<i+1<<endl;
		cout<<"Ingrese su nombre: ";
		cin>>nombre[i];
		do{
		cout<<"Ingrese su edad >0: ";
		cin>>edad[i];
		}while(edad[i]<=0 || edad[i]>=150);	
		do{
		cout<<"Ingrese su genero M/F: ";
		cin>>genero[i];
		genero[i]=toupper(genero[i]);
		}while(genero[i]!='M' && genero[i]!='F');
		
		do{
		cout<<"Ingrese su promedio: ";
		cin>>promedio[i];
		}while(promedio[i]<0 || promedio[i]>20);
		system ("pause");
	}
	
	menorEdad=edad[0];
	for (int i=0; i<=n; i++){  //determino el de menor edad		
		if (menorEdad>edad[i]){
			menorEdad=edad[i];
		}
	}
	cout<<endl;		
	cout<<"Los estudiantes de menor edad (La menor edad es "<<menorEdad<<"):"<<endl;	
	for (int i=1; i<=n; i++){  //muestro el o los de menor edad				
		if (menorEdad==edad[i]){
			cout<<nombre[i]<<endl;
		}
	}

	for (int i=0; i<=n; i++){  		//mejor promedio
		if (genero[i]=='F' && mayorPro<promedio[i]){
			mayorPro=promedio[i];
		}
	}
	cout<<endl;	
	cout<<"Los estudiantes genero femenino que tiene el mejor promedio (El mayor es "<<mayorPro<<"):"<<endl;	
	for (int i=0; i<=n; i++){  //muestro el o los de mayor promedio			
		if (genero[i]=='F' && mayorPro==promedio[i]){
			cout<<nombre[i]<<endl;
		}
	}
		
	system ("pause");
	return 0;	
}
