#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define max 4
struct datos
{  
   int codigo;
   char nombre[30];
   char sexo;
   int edad;
   float talla;
   float peso;
   int colorOjos;
   int colorCabello;
};

void ingresoDatos(datos d[max]);
void mostrarDatos(datos d[max]);

int main()
{
	datos d[max];
	int op;
	for(;;){
		system("cls");
		cout<<"\t\t\t MENU DE OPCIONES"<<endl;
		cout<<"\t\t[1] Carga Datos "<<endl;
		cout<<"\t\t[2] Mostrar Datos "<<endl;
		cout<<"\t\t[3] Filtro 1 "<<endl;
		cout<<"\t\t[4] Salir "<<endl;
	
		do{
		cout<<"Ingrese una opcion : ===>";
	    cin>>op;
		}while(op<1 || op >3);
		
		switch (op){
			case 1:ingresoDatos(d);
				   break;
			case 2:mostrarDatos(d);
				   break;
			case 3:
					break;
		}	
	}
	
	
	getche();	
	return 0;
}

void ingresoDatos(datos d[]){
	for (int i=0; i<max;i++){
		system("cls");	
		cout<<"Ingrese codigo "<<i+1<<": ";
		cin>>d[i].codigo;
		cout<<"Ingrese su Nombre: ";
		fflush(stdin);
		cin.getline(d[i].nombre,30,'\n');
		cout<<"Ingrese su sexo(M o F): ";
		d[i].sexo=toupper(d[i].sexo);
		cin>>d[i].sexo;
		cout<<"Ingrese su edad: ";
		cin>>d[i].edad;
		cout<<"Ingrese su talla: ";
		cin>>d[i].talla;
		cout<<"Ingrese su peso: ";
		cin>>d[i].peso;
		cout<<"Ingrese su color de ojos:(1: azules, 2: castaño, 3: otros): ";
		cin>>d[i].colorOjos;
		cout<<"Ingrese su color de cabello:(1: castaño, 2: rubio, 3: otros): ";
		cin>>d[i].colorCabello;		
	}
}
void mostrarDatos(datos d[]){

	cout<<setw(10)<<"Codigo |"<<setw(20)<<"Nombres |"<<setw(10)<<"Sexo |"<<setw(10)<<"Edad |"<<endl;
	for (int i=0; i<max;i++){
	cout<<setw(10)<<d[i].codigo<<setw(20)<<d[i].nombre<<setw(10)<<d[i].sexo<<setw(10)<<d[i].edad<<endl;
	}
}
