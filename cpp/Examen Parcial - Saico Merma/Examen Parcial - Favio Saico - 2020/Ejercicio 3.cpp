//Favio Genaro Saico Merma
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	string nombre;
	int tipoE,numH,hExtra=0;
	float pagoH,pagoE=0,pagoN=0,pagoT;
	
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	
	do{
		cout<<"Ingrese el tipo de empleado [1-4]: ";
		cin>>tipoE;
	}while(tipoE<1 || tipoE>4);	
	
	do{
	cout<<"Ingrese el numero de horas trabajadas: ";
	cin>>numH;
	}while(numH<1);
	
	do{
	cout<<"Ingrese el pago por hora: ";
	cin>>pagoH;
	}while(pagoH<1);
	
	if (numH>40){
		hExtra=numH-40;
		switch (tipoE){
			case 1: pagoE=hExtra*pagoH*1.5;break;
			case 2: pagoE=hExtra*pagoH*2;break;
			case 3: pagoE=hExtra*pagoH*2.5;break;
			case 4: pagoE=hExtra*pagoH*3;break;
		}
	}
	pagoN=pagoH*40;
	pagoT=pagoN+pagoE;
	
	cout<<endl;
	cout<<"El sueldo a pagar al empleado "<<nombre<<endl;
	cout<<"Pago neto:  S/"<<pagoN<<endl;
	cout<<"Pago extra: S/"<<pagoE<<endl;
	cout<<"Pago total: S/"<<pagoT<<endl;
	
	system ("pause");
	return 0;	
}
