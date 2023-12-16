#include <iostream>
#include<stdlib.h>
using namespace  std;
//Extraer los divisores de un número
void divisores(void){	
	int num=0;
	cout<<"Hallar los divisiores de: ";
 	cin>>num;
 	
 	cout<<"Los divisores son: ";
 	
 	for(int i=1; i<=num; i++){
 		
 		if (num%i==0){
 		cout<<i<<", ";	
		}
	 }	
}




 int main(){
 	int num=0,suma=0;
 	
 	do{
 		cout<<"Digite un numero: ";
 		cin>>num;
	}while(num<=2);
	

 	for(int i=1;i<=num;i++){ //extraigo los divisores
 		
 		if (num%i==0){
 			suma+=i;
 			//cout<<i<<", ";	
		}
	}
	if (suma==2*num){
		cout<<"El numero "<<num<<" es un numero perfecto";
	}
	else{
		cout<<"El numero "<<num<<" no es un numero perfecto";
	}
	 
	return 0;
 }
