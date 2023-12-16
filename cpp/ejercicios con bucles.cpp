#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace  std;

void tabla(void){
	int num;
	do{
		cout<<"Digite: ";
		cin>>num;
	}while((num<1 || num>10));
	
	for (int i=1; i<=20;i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
}
void factorial(void){
	int num,cont=1,fac=1;
	cout<<"Hallar el factorial de: ";
	cin>>num;
	
	while(cont<num){
		cont=cont+1;
		fac=fac*cont;
	}
	cout<<"El resultado es: "<<fac<<endl;
}
void sumatoriaPotencia(void){
	int n=0,suma=0;
	
	cout<<"Colocar un numero: ";
	cin>>n;
	
	for (int i=1; i<=n; i++){
		suma+=pow(2,i);//pow(2,i);
	}		
	cout<<"El resultado es: "<<suma<<endl;
}
void serie(void){ //ejercicio de serie fibonacci 1 1 2 3 5 8 13
	int n=0,suma=0,x=0,y=1,z=0;
	
	cout<<"Colocar un numero: ";
	cin>>n;
	cout<<"1 ";
	for (int i=1; i<n; i++){
		z=x+y;
		cout<<z<<" ";
		x=y;
		y=z;	
	}	
	cout<<endl;	
}	
int main(){
	serie();	
	system ("pause");
	return 0;		
}
