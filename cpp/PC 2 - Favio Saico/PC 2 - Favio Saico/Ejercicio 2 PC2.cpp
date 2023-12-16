//Favio Genaro Saico Merma
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

#define alum 5 //numero de alumnos
#define curso 3 //numero de cursos

using namespace std;
//Prototipos
void ingresoDatos(char nomAlum[alum][60],float notas[alum][curso]); 
void promxAlum(float notas[alum][curso],float promdioAlum[alum]);
void promxCurso(float notas[alum][curso],float promCurso[curso]);
void notaMenorr(float notas[alum][curso], float &notaMenor);
void promTotal(float notas[alum][curso], float &promGeneral);
void mostrarReporte(float promdioAlum[alum],char nomAlum[alum][60],float notas[alum][curso],float promCurso[curso],float promGeneral,float notaMenor);

int main(){
	//Declaración de variables
	float notas[alum][curso],notaMenor=21, promdioAlum[alum], promCurso[curso],promGeneral=0;
	char nomAlum[alum][60];
	string nomMenor;

	//Ingreso de datos
	ingresoDatos(nomAlum,notas);
	//Proceso de datos
	promxAlum(notas,promdioAlum);
	promxCurso(notas,promCurso);
	notaMenorr(notas,notaMenor);
	promTotal(notas,promGeneral);
	//Salida y reporte de datos
	mostrarReporte(promdioAlum,nomAlum,notas,promCurso,promGeneral,notaMenor);

	system ("pause");
	return 0;	
}

void ingresoDatos(char nomAlum[alum][60],float notas[alum][curso])
{
	for (int i=0; i<5; i++){ 		
		cout<<"Ingrese el nombre del alumno "<<i+1<<": ";
		cin>>nomAlum[i];				
	 	system("cls");	
	 	cout<<"NOTAS DEL ALUMNO "<<nomAlum[i]<<endl;
			for (int j=0; j<3; j++){
				do{
				cout<<"CURSO "<<j+1<<": ";
				cin>>notas[i][j];
				}while(notas[i][j]<0 || notas[i][j]>20);
	 		}	  	
	 	system ("pause");
	 	system("cls");
	}	
}

void promxAlum(float notas[alum][curso],float promdioAlum[alum]) //promedio por alumno
{	
 	float suma[alum];
	for (int i=0; i<5; i++){
		for (int j=0; j<3; j++){
			suma[i]=suma[i]+notas[i][j];
	 	}
	 	promdioAlum[i]=suma[i]/curso;
	}
}
void promxCurso(float notas[alum][curso],float promCurso[curso]) //promedio por curso
{
	float sumaCur[curso];
	for (int i=0; i<3; i++){
		for (int j=0; j<5; j++){
			sumaCur[i]=sumaCur[i]+notas[j][i];
	 	}
	 	promCurso[i]=sumaCur[i]/alum;
	}
}
void notaMenorr(float notas[alum][curso], float &notaMenor) // nota menor
{		
	for (int i=0; i<5; i++){	
		for (int j=0; j<3; j++){
			if (notas[i][j]<notaMenor){
				notaMenor=notas[i][j];//nota
			}			
		}
	}
}
void promTotal(float notas[alum][curso], float &promGeneral) // nota menor
{		
	for (int i=0; i<5; i++){	
		for (int j=0; j<3; j++){
				promGeneral+=notas[i][j];//nota			
		}
	}
	promGeneral=promGeneral/(alum*curso);
}
void mostrarReporte(float promdioAlum[alum],char nomAlum[alum][60],float notas[alum][curso],float promCurso[curso],float promGeneral,float notaMenor)
{
	cout<<"\t\t\t\t REPORTE DE NOTAS"<<endl;
	cout<<"-----------------------------------------------------------------------------------"<<endl;
	printf("| %-20.15s \t| %-11.15s| %-11.15s| %-11.15s| %-25.25s|\n","ALUMNOS","CURSO 1","CURSO 2","CURSO 3","PROMEDIO POR ALUMNO");
	cout<<"-----------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<5; i++){		
		printf("| %-20.15s\t| %-011.2f| %-011.2f| %-011.2f| %-025.2f|\n",nomAlum[i],notas[i][0],notas[i][1],notas[i][2],promdioAlum[i]);
		cout<<"-----------------------------------------------------------------------------------"<<endl;
	}	
	printf("| %-20.20s\t| %-011.2f| %-011.2f| %-011.2f|\n","PROMEDIO POR CURSO",promCurso[0],promCurso[1],promCurso[2]);
	cout<<"-----------------------------------------------------------------------------------"<<endl;                
	cout<<"MENOR NOTA: "<<notaMenor<<endl;   
	cout<<"PROMEDIO GENERAL: "<<promGeneral<<endl;   
}
