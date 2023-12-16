//Favio Genaro Saico Merma
#include<iostream>
#include<stdlib.h>
using namespace std;

/*
Escribir una función para determinar los números perfectos en el intervalo <2, n>. 
Un numero perfecto es igual a la suma de sus divisores incluido el 1 y excluido el propio número. 
*/

int main(){
	
	int num=0,suma=0;
 	
 	do{
 		cout<<"Digite un numero: ";
 		cin>>num;
	}while(num<=2);
	

 	for(int i=1;i<num;i++){ //extraigo los divisores
 		
 		if (num%i==0){
 			suma+=i;
			 cout<<i<<" ";	
		}
	}
	cout<<endl;
	cout<<"La suma de los divisores es "<<suma<<endl;
	
	if (suma==num) {
		cout<<"El numero "<<num<<" es un numero perfecto"<<endl;
	}
	else{
		cout<<"El numero "<<num<<" no es un numero perfecto"<<endl;
	}
		
	system ("pause");
	return 0;	
}
