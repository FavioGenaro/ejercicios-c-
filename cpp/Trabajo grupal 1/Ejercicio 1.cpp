/* 1.- Dada la ecuación de la recta y = mx + c, y la ecuación de la circunferencia
(x-a) ² + (y-b) ² = r ², determinar los puntos de intersección de la recta con la circunferencia, y
analizar si la recta es secante o tangente a la circunferencia.*/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	//VARIABLES
	double m, c, a, b, r, discr, x1, x2, y1, y2;
	//INGRESO DE DATOS
	cout<<"***En la ecuacion de la recta y = m*x + c***"<<endl;
	cout<<"Ingrese el valor de m: "; cin>>m;
	cout<<"Ingrese el valor de c: "; cin>>c;
	
	cout<<"\n***En la ecuacion de la circunferencia (x-a)^2 + (y-b)^2 = r^2 ***"<<endl;
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor del radio r: "; cin>>r;
	
	//PROCESO
	discr = pow(2*(m*(c-b)-a),2) - 4*(pow(m,2)+1)*(pow(a,2)+pow(c-b,2)-pow(r,2));
	x1 = (-1*2*(m*(c-b)-a) + sqrt(discr))/(2*(pow(m,2)+1));
	x2 = (-1*2*(m*(c-b)-a) - sqrt(discr))/(2*(pow(m,2)+1));
	y1 = m*x1 + c;
	y2 = m*x2 + c;
	
	if (discr > 0){
		cout<<"\nLa recta es secante con la circunferencia,"<<endl;
		cout<<"Los puntos donde la recta corta la circunferencia son: ("<<x1<<" ,"<<y1<<") y ("<<x2<<" ,"<<y2<<")."<<endl;
	} 
	else if (discr = 0){
		cout<<"\nLa recta es secante con la circunferencia,"<<endl;
		cout<<"El punto de tangencia entre la recta y la circunferencia es: ("<<x1<<" ,"<<y1<<")."<<endl;
	}
	else if (discr < 0){
		cout<<"\nLa recta es exterior a la circunferencia, no hay ningun punto de contacto entre ellas."<<endl;
	}
	cout<<"\n***FIN DEL PROGRAMA***"<<endl;
	getch();
	return 0; 
}
