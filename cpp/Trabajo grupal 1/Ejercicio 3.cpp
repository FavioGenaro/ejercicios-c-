#include<iostream>
#include<conio.h>
#include<ctype.h>

using namespace std;
//Definición de las constantes
#define pA  80 // Pago mensual del seguro A
#define pB  60 // Pago mensual del seguro B
#define pC  40 // Pago mensual del seguro C

#define nA 8 //N° max de consultas de A 
#define nB 6 //N° max de consultas de B
#define nC 4 //N° max de consultas de C

#define aA 8.5 //Pago adicional de A
#define aB 6.5 //Pago adicional de B
#define aC 5   //Pago adicional de C

int main(){
	//VARIABLES
	int numConsul;
	float  pagoTotal,adicional,pagoMensual;
	char tipoSegu;
	//INGRESO DE DATOS
	cout<<"Ingrese el tipo de seguro (A,B,C): ";
	cin>>tipoSegu;
	tipoSegu=toupper(tipoSegu);
	cout<<"Ingrese el numero de consultas realizadas: ";
	cin>>numConsul;
	//PROCESO
	adicional=0;
	switch (tipoSegu)
	{
		case 'A': 	pagoMensual=pA;
					if(numConsul>nA)
					adicional=(numConsul-nA)*aA;
					break;		
		case 'B': 	pagoMensual=pB;
					if(numConsul>nB)
					adicional=(numConsul-nB)*aB;
					break;
		case 'C': 	pagoMensual=pC;
					if(numConsul>nC)
					adicional=(numConsul-nC)*aC;
					break;
		default: 	cout<<"\n DATO ERRADO  ";
				 	return(0);
				 	getche();
	}
	pagoTotal=pagoMensual+adicional;	
	//SALIDA
	cout<<endl;
	cout<<"Pago mensual:     S/."<<pagoMensual<<endl;
	cout<<"Pago adicional:   S/."<<adicional<<endl;
	cout<<"El pago total es: S/."<<pagoTotal<<endl;	 
	cout<<"\n***FIN DEL PROGRAMA***"<<endl;
	return(0);
	getche();	
}
