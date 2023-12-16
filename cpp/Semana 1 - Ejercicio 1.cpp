//Inclusion de variables del lenguaje C
#include <iostream> // para cin>> y cout<<
#include <conio.h> 
#include <stdlib.h> 
#include <math.h> // para el manejo de las funciones matemáticas
using namespace std;
//Definición de las constantes
#define p85  0.85 // 85%
#define p27  0.27 // 27%
#define p25  0.25 // 25%
#define p23  0.23 // 23%
#define pi 3.1416
//Programa Principal
int main()
{//Declaración de variables de E/S
float  monto,	mlu,mjo,mca,mda,mdv;	
//Ingreso de datos
cout<<"Ingrese el monto a repartir :  "<<endl; //endl: cambio de línea
cin>>monto;
// Proceso
mjo =p27*monto;
mda =p25*monto;
mlu = p85*mjo;
mca =p23*(mjo + mda);
mdv = monto - (mda + mlu + mjo + mca); 
// Salida
		cout<<"El monto a repartir  es: "<<monto<<" soles"<<endl;
		cout<<"El monto para Jose  es: "<<mjo<<" soles"<<endl;
		cout<<"El monto para Daniel  es:"<<mda<<" soles"<<endl;
		cout<<"El monto para Luis  es: "<<mlu<<" soles"<<endl;
		cout<<"El monto para Carlos es: "<<mca<<" soles"<<endl;
		cout<<"El monto para David es "<<mdv<<" soles"<<endl;
		cout<<"************* FIN PROCESO ***************"<<endl;
	return(0);
getche();
}

