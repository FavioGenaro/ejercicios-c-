#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;

int main()
{//declaracion de variables
  float x,fx,gx,hx;
//Datos
cout<<" Ingrese un valor para x :"<<endl;
cin>>x;
//proceso
	if (x<-5)
	   fx=abs(x)+2;
	else
	   if(x<10 && x>=-5) 
	      fx=x*x+3*x+9;
	    else
		  fx=exp(abs(2*x+1));
	if(x<0)	
	  gx=floor(x-3);
	else
	  gx=(sqrt(pow(x,5)+1));
	hx=fx+gx;
  
//Salida
cout<<"F ("<<x<<")="<<fx<<endl;
cout<<"G ("<<x<<")="<<gx<<endl;
cout<<"F ("<<x<<")+"<<"G("<<x<<") = "<<hx<<endl;
getche();
return 0;      
}

