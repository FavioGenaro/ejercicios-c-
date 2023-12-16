#include <iostream>
#include<stdlib.h>
using namespace  std;
/*
Calcule la suma de la siguiente expresión :
				1/2 + 2/3 + 3/4 +...+ 100/101
*/
/*int main()
{
	double suma=0,i=1;
//no puedo sumar valores del tipo double con int y viseversa
	while(i<=100){
		suma=suma+(i/(i+1));
		i++;
	}
	
	cout<<"La suma es "<<suma;
	return 0; 
	system("PAUSE");
}*/

/*
Desarrolle un programa que ingrese 9 pesos en un arreglo 
bidimensional de 3 x 3, luego cuente e imprima la cantidad 
de pesos que existe en cada rango: -Menores iguales a 20. 
-Entre 20 y 40. -Mayores o igual a 40.
*/
int main(){
	int i=0,j=0,T[3][3];
	
	while(i<3){
		while(j<3){
			cout<<"Ingrese un valor para T["<<i<<"]["<<j<<"]: ";
			cin>>T[i][j];
			j++;
		}
		cout<<endl;
		i++;
		j=0;		
	}
	i=0;
	j=0;
	while(i<3){
		while(j<3){
			cout<<T[i][j]<<"\t";			
			j++;
		}
		cout<<endl;
		i++;
		j=0;		
	}
	return 0; 
	system("PAUSE");
}
