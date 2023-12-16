//Favio Genaro Saico Merma
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

#define NA 0.50         
#define NB 0.40          
#define NC 0.30
#define PA 0.25         
#define PB 0.29            
#define PC 0.15

void ingreso(char &colegio,char &instituto,float &monto)  //ingreso de datos
{
	do{	
		system("cls");
		cout<<"\t\t<<<<<ESCOJA SU COLEGIO>>>>>"<<endl;
	    cout<<"\t\t[N]: Colegio Nacional"<<endl;
		cout<<"\t\t[P]: Colegio Particular"<<endl<<endl;
		cout<<"Ingrese una opcion:"<<endl;
		cin>>colegio;	
		colegio=toupper(colegio);
	}while(colegio!='N' && colegio!='P');
	do{
		system("cls");
		cout<<"\t\t<<<<<ESCOJA EL INSTITUTO>>>>>"<<endl;
	    cout<<"\t\t[A]: Instituto A"<<endl;
		cout<<"\t\t[B]: Instituto B"<<endl;
		cout<<"\t\t[C]: Instituto C"<<endl<<endl;
		cout<<"Ingrese una opcion:"<<endl;
		cin>>instituto;
		instituto=toupper(instituto);
	}while(instituto!='A' && instituto!='B' && instituto!='C');
	do{
		system("cls");
		cout<<"Ingrese el monto a pagar:";
		cin>>monto;
	}while(monto<=0);	
}
float descuento(char colegio,char instituto,float monto) //elijo el descuento
{
	float desc;
 	switch(instituto) 
	   {case 'A':
	   	  switch (colegio)
	   	    {	case 'N':desc=monto*NA;break;
	   	      	case 'P':desc=monto*PA;break;
			}break;
		case 'B':
	   	    switch (colegio)
	   	    {	case 'N':desc=monto*NB;break;
	   	      	case 'P':desc=monto*PB;break;
			}break;
		case 'C':
	   	    switch (colegio)
	   	    {	case 'N':desc=monto*NC;break;
	   	      	case 'P':desc=monto*PC;break;
			}break;				
	   }
   return desc;
}

float montoapagar(float monto,float des) //calculo el monto a pagar
{	float mp;
    mp=monto-des;
    return mp; 
}

int main(){
	
	char col,inst;
	float mont,des;
 	
	ingreso(col,inst,mont);
	des=descuento(col,inst,mont);
	mont=montoapagar(mont,des);
	system("cls");
	cout<<"El descuento es:       S/"<<des<<".00"<<endl;
	cout<<"El importe a pagar es: S/"<<mont<<".00"<<endl;
	
	system ("pause");
	return 0;	
}
