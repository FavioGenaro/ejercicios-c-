//Favio Genaro Saico Merma
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	
	int edad, tipoT;
	float costo,total=0,descuento=0;
	
	cout<<"\t\t\t\tTIPO DE TRATAMIENTO | COSTO POR DIA"<<endl;
	cout<<"\t\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t\t      1            |         38     "<<endl;
	cout<<"\t\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t\t      2            |         25     "<<endl;
	cout<<"\t\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t\t      3            |         19     "<<endl;
	cout<<"\t\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t\t      4            |         15     "<<endl;
	cout<<"\t\t\t\t------------------------------------"<<endl;
		
	do{
		cout<<"Ingrese el tipo de tratamiento: ";
		cin>>tipoT;	
	}while(tipoT<1 || tipoT>4);
	
	do{
		cout<<"Ingrese su edad: ";
		cin>>edad;
	}while(edad<=0 || edad>120);
	
	switch (tipoT){
		case 1: costo=38;break;
		case 2: costo=25;break;
		case 3: costo=19;break;
		case 4: costo=15;break;			
	}
		
	if (edad>60)descuento=costo*0.25;
	if (edad<25)descuento=costo*0.15;
	
	total=costo-descuento;
	
	cout<<endl;
	cout<<"Costo por el tipo de tratamiento:        S/"<<costo<<endl;
	cout<<"Descuento segun la edad:                 S/"<<descuento<<endl;
	cout<<"El costo total diario del tratamiento:   S/"<<total<<endl;
		
	system ("pause");
	return 0;	
}
