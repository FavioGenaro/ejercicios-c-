#include <iostream>
#include <conio.h>
using namespace std;
/*
Dado la siguiente matriz T, codifique un programa, que almacene
solamente los números pares dentro de un vector PAR, y en un
vector IMPAR solamente los números impares. También en un
vector SUMA almacene la suma de cada una de las filas de la matriz.
Luego imprimir la matriz T y los vectores PAR, IMPAR y SUMA.
Resolver este ejercicio utilizando la instrucción WHILE.
*/
int main(){
	int T[4][4]={12,28,48,15,27,36,6,11,82,5,74,91,61,24,45,96},PAR[16],IMPAR[16],SUMA[4],i=0,j=0,k=0;
	
	while(i<16){	
		PAR[i]=0;
		IMPAR[i]=0;
		i++;
	}
	i=0;	
	while(i<4){
		while(j<4){
			SUMA[i]+=T[i][j];
			if (T[i][j]%2==0){
				PAR[k]=T[i][j];
			}
			else if (T[i][j]%2!=0){
				IMPAR[k]=T[i][j];
			}
			j++;
			k++;
		}
		i++;
		j=0;
	}
	
	//Imprimo la matriz T
	i=0;
	j=0;
	cout<<"El vector T es:"<<endl;
	while(i<4){
		while(j<4){
			cout<<T[i][j]<<"\t";
			j++;
		}
		cout<<endl;
		i++;
		j=0;
	}
	cout<<endl;
	//imprimo los valores del vector PAR
	j=0;
	i=0;
	cout<<"El vector PAR es:"<<endl;
	while(i<16){
		if(PAR[i]!=0){
		cout<<PAR[i]<<"\t";
		}
		i++;
	}
	cout<<endl;
	//imprimo los valores del vector IMPAR
	j=0;
	i=0;
	cout<<"El vector IMPAR es:"<<endl;
	while(i<16){
		if(IMPAR[i]!=0){
		cout<<IMPAR[i]<<"\t";
		}
		i++;
	}
	cout<<endl;
	//imprimo los valores del vector SUMA
	i=0;
	cout<<"El vector SUMA es:"<<endl;
	while(i<4){	
		cout<<SUMA[i]<<"\t";
		i++;
	}
	cout<<endl;
	system("PAUSE");
	return 0;
}
	
