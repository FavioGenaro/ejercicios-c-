#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int monto,puntos;
	cout<<"EN TOTTUS PREMIAMOS CON PUNTOS A NUESTROS CLIENTES"<<endl;
	cout<<"Ingrese el monto en soles de sus compras:";
	cin>>monto;
	
	if(monto<10){
	cout<<"Usted ha obtenido 1 punto"<<endl;
	}
	else{
		if(monto%10==0){
		puntos=(monto/10)*2;
		cout<<"Usted ha obtenido "<<puntos<<" puntos"<<endl;
		}
		else{
			puntos=(monto/10)*2+1;
			cout<<"Usted ha obtenido "<<puntos<<" puntos"<<endl;	
		}
	}
	system("pause");
	return 0;
}
