#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define mes 6 //numero de meses
#define rub 5 //numero de rubros
//Prototipos
void ingresoDatos( notas[alum][curso]); 
void promxAlum(float notas[alum][curso],float promdioAlum[alum]);
void promxCurso(float notas[alum][curso],float promCurso[curso]);
void notaMenorr(float notas[alum][curso], string &notaMenor);
void mostrarReporte(float promdioAlum[alum],char nomAlum[alum][60],float notas[alum][curso],float promCurso[curso],float totalTurno,float promGeneral,string nomMenor);

int main(){
	//Declaración de variables
	int cantidad[prod][tur],producMayor=0, suma[10], sumaTurno[tur],totalTurno=0;
	char producto[prod][60];
	string articMayor;
	
	limpiar(cantidad,suma,sumaTurno);
	//Ingreso de datos
	ingresoDatos(producto,cantidad);
	//Proceso de datos
	totalxProducto(cantidad,suma);
	totalxTurno(cantidad,sumaTurno);
	totalTurno=sumaTurno[0]+sumaTurno[1]+sumaTurno[2];	
	productoMayor(suma,producto,producMayor,articMayor);
	
	//Salida y reporte de datos
	mostrarReporte(suma,producto,cantidad,sumaTurno,totalTurno,producMayor,articMayor);   

	system ("pause");
	return 0;	
}

void ingresoDatos(char producto[prod][60],int cantidad[prod][tur])
{
	for (int i=0; i<=9; i++){ 
		cout<<"Ingrese el nombre del producto "<<i+1<<": ";
		cin>>producto[i];
	 	system("cls");	
	 	cout<<"PRODUCCION DEL PRODUCTO "<<producto[i]<<endl;
			for (int j=0; j<=2; j++){
				cout<<"Turno "<<j+1<<": ";
				cin>>cantidad[i][j];
	 		}	 	
	 	system ("pause");
	 	system("cls");
	}	
}

void limpiar(int cantidad[prod][tur],int suma[prod],int sumaTurno[tur]) //limpiar los arreglos
{
	for (int i=0; i<=9; i++){
		suma[i]=0;
		for (int j=0; j<=2; j++){
			cantidad[i][j]=0;
	 	}
	}
	for (int k=0; k<=2; k++){
		sumaTurno[k]=0;
	}
}
void totalxProducto(int cantidad[prod][tur],int suma[prod]) //cantidad total por producto
{
	for (int i=0; i<=9; i++){
		for (int j=0; j<=2; j++){
			suma[i]=suma[i]+cantidad[i][j];
	 	}
	}
}
void totalxTurno(int cantidad[prod][tur],int sumaTurno[tur]) // cantidad total por turno
{
	for (int i=0; i<=2; i++){
		for (int j=0; j<=9; j++){
			sumaTurno[i]=sumaTurno[i]+cantidad[j][i];
	 	}
	}
}
void productoMayor(int suma[prod],char producto[prod][60], int &producMayor,string &articMayor) // producto mayor
{
	for (int i=0; i<=9; i++){
		if (suma[i]>producMayor){
			producMayor=suma[i];//cantidad
			articMayor=producto[i];//nombre
		}		
	}
}
void mostrarReporte(int suma[prod],char producto[prod][60],int cantidad[prod][tur],int sumaTurno[tur], int totalTurno, int producMayor,string articMayor)
{
	cout<<"\t\t\tREPORTE DIARIO DE PRODUCCCION"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	printf("| %-20.15s \t| %-11.15s| %-11.15s| %-11.15s| %-11.15s|\n","ARTICULO","TURNO 1","TURNO 2","TURNO 3","TOT. PROD");
	cout<<"-----------------------------------------------------------------------------"<<endl;
	for (int i=0; i<=9; i++){		
		printf("| %-20.15s\t| %-011i| %-011i| %-011i| %-011i|\n",producto[i],cantidad[i][0],cantidad[i][1],cantidad[i][2],suma[i]);
		cout<<"-----------------------------------------------------------------------------"<<endl;
	}	
	printf("| %-20.15s\t| %-011i| %-011i| %-011i| %-011i|\n","TOTAL",sumaTurno[0],sumaTurno[1],sumaTurno[2],totalTurno);
	cout<<"-----------------------------------------------------------------------------"<<endl;                
	cout<<"ARTICULO CON MAYOR PRODUCCION: "<<articMayor<<endl;   
	cout<<"PRODUCCION DEL ARTICULO MAYOR: "<<producMayor<<endl;   
}
