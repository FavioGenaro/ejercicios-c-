#include<iostream>
#include<conio.h>
using namespace std;

void votar(int voto);
void buscar_ganador();
void mostrar_ganador();

int candidato[12]={0}, voto, pos;
float porcentaje, v_totales=0;

int main(){
	
	cout<<"\t\t\t***ELECCIONES***"<<endl;
	
	do {
		
		cout<<"Ingrese el numero del candidato por el cual votara [1-12]"<<endl;
		cout<<"Si desea finalizar las votaciones ingrese -1"<<endl;
		cout<<"Voto: "; cin>>voto;
		
		system("cls");
		if (voto>=1 && voto<=12){
	
			votar(voto);	
			
		}else if(voto == -1){
			
			cout<<"**Elecciones finalizadas**"<<endl;
			getch();
			system("cls");
			
		}else{
			
			cout<<"Solo hay 12 candidatos, ingrese un voto valido [1-12]"<<endl;
			getch();
			system("cls");
			
		}
		
	}while (voto != -1);
	
	buscar_ganador();
	
	mostrar_ganador();
	
	getch();
	return 0;
}

void votar(int voto){
	
	candidato[voto-1]++;
	cout<<"***VOTO REALIZADO***"<<endl;
	getch();
	system("cls");
	
}
void buscar_ganador(){
	
	int mayor=-999;
	
	for(int i = 0; i<12; i++){
		
		v_totales += candidato[i];
		
		if(candidato[i]>mayor){
			pos = i;
			mayor = candidato[i];
		}
	}
	
	porcentaje = (candidato[pos]/v_totales)*100;
	
}
void mostrar_ganador(){
	
	cout<<"Votos totales emitidos: "<<v_totales<<endl;	
	cout<<"\nNumero de votos por candidato: \n"<<endl;
	
	for(int i=0; i<12; i++){
		cout<<"Votos para el candidato "<<i+1<<": "<<candidato[i]<<endl;		
	}
	
	cout<<"\nEl candidato ganador de las elecciones es el numero "<<pos+1<<endl;
	cout<<"Porcentaje de votos a favor: "<<porcentaje<<"%"<<endl;
}

