#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define mes 6 //numero de meses
#define rub 5 //numero de rubros
//Prototipos
void ingresoDatos(float gasto[rub][mes]); 
void gastoxMes(float gasto[rub][mes],float gastoMes[mes]);
void gastoxRubro(float gasto[rub][mes],float gastoRubro[rub]);
void gastoMayor(float gasto[rub][mes], float &gastoMenor);
void gastoMenor(float gasto[rub][mes], float &gastoMayor);
//void mostrarReporte(float promdioAlum[alum],char nomAlum[alum][60],float notas[alum][curso],float promCurso[curso],float promGeneral,float notaMenor);

int main(){
	//Declaración de variables
	float gasto[rub][mes],gastoMenor=900000,gastoMayor=0,gastoRubro[rub],gastoMes[mes];
	char nomAlum[rub][60]={"utiles de oficina","Telefono","Luz","Agua","Salarios"};
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
	 	cout<<"GASTOS DEL RUBRO 1 "<<nomAlum[i]<<endl;
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

void mostrarReporte(float promdioAlum[alum],char nomAlum[alum][60],float notas[alum][curso],float promCurso[curso],float promGeneral,float notaMenor)
{
	cout<<"\t\t\t\t REPORTE DE NOTAS"<<endl;
	cout<<"-----------------------------------------------------------------------------------"<<endl;
	printf("| %-20.15s \t| %-11.15s| %-11.15s| %-11.15s| %-11.15s| %-11.15s| %-11.15s| %-25.25s|\n","RUBRO","MES 1","MES 2","MES 3","MES 4","MES 5","MES 6","TOTAL POR RUBRO");
	cout<<"-----------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<5; i++){		
		printf("| %-20.15s\t| %-011.2f| %-011.2f| %-011.2f| %-011.2f| %-011.2f| %-011.2f| %-025.2f|\n",nomAlum[i],notas[i][0],notas[i][1],notas[i][2],promdioAlum[i]);
		cout<<"-----------------------------------------------------------------------------------"<<endl;
	}	
	printf("| %-20.20s\t| %-011.2f| %-011.2f| %-011.2f| %-011.2f| %-011.2f| %-011.2f|\n","TOTAL POR MES",promCurso[0],promCurso[1],promCurso[2]);
	cout<<"-----------------------------------------------------------------------------------"<<endl;                
	cout<<"MENOR NOTA: "<<notaMenor<<endl;   
	cout<<"PROMEDIO GENERAL: "<<promGeneral<<endl;   
}
