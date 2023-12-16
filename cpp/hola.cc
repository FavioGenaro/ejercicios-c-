#include <iostream>
#include<stdlib.h>
using namespace  std;

/*Se tiene 2 alumnos , y se desea ayudar a todos aquellos que están desaprobados en el promedio final aumentándoles 2 puntos (a su promedio), 
siempre y cuando hayan entregado su respectivo trabajo .De no cumplirse con estas condiciones , el promedio debe permanecer igual.
*/
int main()
{
	int par=0,impar=0,i;

	for (i=1; i<=100; i++) 
	{
		if(i%2==0)
		{
			par=par+i;
		}
		else
		{
			impar=impar+i;
		}
	}
cout<<"\nSuma de Pares es : "<<par<<endl;
cout<<"Suma de Impares es: "<<impar<<endl;
	return 0; 
	system("PAUSE");
}