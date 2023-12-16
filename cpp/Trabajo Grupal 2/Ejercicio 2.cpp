#include<iostream>
#include<conio.h>
#include<iomanip>

#define dim 10 
#define max 999999 //Maximo de kilometros por recorrido

using namespace std;

//Prototipo de funcion
void leerdatos(char nombre[dim][30], float tramo[dim][6*dim], int &);
void recototal(float tramo[dim][6*dim], float tramototal[dim], int num);
void verrecor(char nombre[dim][30], float tramo[dim][6*dim], float tramototal[dim], int num);

int i,j;

int main(){
	
	int n;
	float tram[dim][6*dim], tramtot[dim];   // 6*dim, porque hay 6 días, y dim es la maxima cantidad de choferes
	char nom[dim][30];
	
	leerdatos(nom,tram,n);
	recototal(tram,tramtot,n);
	verrecor(nom,tram,tramtot,n);
	
	getche();
	return 0;
}

void leerdatos(char nombre[dim][30], float tramo[dim][6*dim], int &num){
	do{
	cout<<"Digite el numero de choferes: ";
	cin>>num;
	}while(num<0||num>dim);
	system("cls");
	
	//Almacenamos los datos de cada chofer
	for(i=0;i<num;i++){
		cout<<"Digite el nombre del chofer ["<<i+1<<"] : ";
		fflush(stdin);
		gets(nombre[i]);
		
		for(j=0;j<6;j++){
			do{
			cout<<"Digite cuantos km ha recorrido en el dia "<<j+1<<" : ";
			cin>>tramo[i][j];
			}while(tramo[i][j]<0||tramo[i][j]>max);
		}
		getche();	
		system("cls");
	}
}

void recototal(float tramo[dim][6*dim], float tramototal[dim], int num){
	//Hallamos el recorrido total por cada chofer
	for(i=0;i<num;i++){
		tramototal[i]=0;
		for(j=0;j<6;j++)
			tramototal[i]=tramototal[i]+tramo[i][j];
	}
}

void verrecor(char nombre[dim][30], float tramo[dim][6*dim], float tramototal[dim], int num){
	cout<<"\n";
	cout<<"\t\t\t\t\tReporte de datos"<<endl;
	cout<<"\t\t\t\t\t****************"<<endl;
	cout<<setw(10)<<"Lun"<<setw(10)<<"Mar"<<setw(10)<<"Mie"<<setw(10)<<"Jue";
	cout<<setw(10)<<"Vie"<<setw(10)<<"Sab"<<setw(15)<<"Tramo Total"<<setw(20)<<"Nombres"<<endl;
	for(i=0;i<num;i++){
		for(j=0;j<6;j++)
			cout<<setw(10)<<tramo[i][j];
		cout<<setw(15)<<tramototal[i]<<setw(20)<<nombre[i]<<endl;
	}
}
