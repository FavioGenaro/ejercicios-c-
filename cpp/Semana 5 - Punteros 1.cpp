#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(){
	
	int x,*px;//el * lo identifica como variable puntero
	  x=100;                 
	  cout<<"Contenido de X= "<<x<<endl;
	  cout<<"Direccion de &x = "<<&x<<endl; //Direcci�n de la variable x en hexadecimal
	  px=&x;//alamaceno la direcci�n
	  //px=100; esto no puedo hacerlo ya que px ha sido declarada como puntero *px y puedo alamcenar datos
	  *px=*px+100;//al valor que contiene el puntero se le suma 100(100+100=200)
	  cout<<"Contenido de X= "<<*px<<endl;//desbloquea la direcci�n y nos da el valor de la variable
	  cout<<"Direccion de  X = "<<px<<endl;//muestro la direcci�n
	  cout<<"Direccion de px = "<<&px<<endl; //la direcci�n de nuestra variable que alamacena el puntero

	system ("pause");
	return 0;	
}
