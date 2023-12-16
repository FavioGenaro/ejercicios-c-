#include <iostream>
#include<stdlib.h>

/*
En el mes de junio, se adecuo la gran villa panamericana para atender pacientes con el Covid–19. 
Según sus síntomas eran derivados a una determinada torre. Los datos requeridos son: Apellidos y nombres, edad, 
saturación mínima, fiebre máxima y si tiene tos seca. 
Sabiendo que: 
---Si saturación es mayor de 95, no tiene fiebre y sin tos, puede regresar a su casa. 
---Si la saturación menor igual de 95 y mayor de 92, con una fiebre de 39 grados y tos seca 
le corresponde la Torre 2 - Pacientes con síntoma Leves. 
---Si la saturación menor igual de 92 y mayor de 89, con una fiebre de 49 grados y tos seca 
le corresponde la Torre 4 - Pacientes con síntoma Moderado 
Al final se desea imprimir sus datos 
del paciente y su tipo de síntoma y la Torre que le corresponde ser internado.
*/
using namespace  std;
int main()
{
	char apenom[40];
	string tos;
	int edad ; 
	double fiebre,saturacion;	
	cout<<"Ingrese sus apellidos y nombres:"<<endl;
	gets(apenom);
	cout<<"Ingrese su edad:"<<endl;
	cin>>edad;
	cout<<"Ingrese su satutacion minima:"<<endl;
	cin>>saturacion;
	cout<<"Ingrese su fiebre maxima:"<<endl;
	cin>>fiebre;
	cout<<"Tiene tos seca? Responda ""si"" o ""no"" :" <<endl;
	cin>>tos;
	cout<<endl;//espacio
	cout<<"DATOS DEL PACIENTE"<<endl;
	cout<<"Nombre completo:-------------"<<apenom<<endl;
	cout<<"Edad:------------------------"<<edad<<endl;
	cout<<"Saturacion minima:-----------"<<saturacion<<endl;
	cout<<"Fiebre maxima:---------------"<<fiebre<<endl;
	cout<<"Presenta tos seca:-----------"<<tos<<endl;
	cout<<endl;
	cout<<"DIAGNOSTICO"<<endl;
	if (saturacion>95 && fiebre<39  && tos=="no")
	{
		cout<<"Puede regresar a casa"<<endl;
		cout<<"Se encuentra bien de salud :)"<<endl;
	}
	if (saturacion<=95 && saturacion>92 && fiebre==39 && tos=="si")
	{
		cout<<"Le corresponde ir a la Torre 2"<<endl;
		cout<<"Pacientes con síntoma Leves :|"<<endl;
	}
	if (saturacion<=92 && saturacion>89 && fiebre==40 && tos=="si")
	{
		cout<<"Le corresponde ir a la Torre 4"<<endl;
		cout<<"Pacientes con síntoma Moderado  :("<<endl;
	}
	return 0; 
	system("PAUSE");
}
