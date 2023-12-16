#include <iostream>
#include<stdlib.h>
using namespace  std;
/*int main()
{
	int T[3][5],i=0,j=0;
	
	for (i=0; i<3; i++) 
	{
		for(j=0;j<5;j++)
	 	{
	 	T[i][j]=(i*5)+j+1;			
		}		 	
	}
	cout<<"\nLa matriz de T es: "<<endl;	
	for (i=0; i<3; i++) 
	{
		for(j=0;j<5;j++)
	 	{
	 	cout<<T[i][j]<<"\t";		
		}	
		cout<<endl;
	}
	return 0; 
	system("PAUSE");
}*/
/*
Dada una matriz cuadrada de 4x4, prepare un algoritmo
que llena de 0 dicha matriz excepto la diagonal principal
donde debe asignar 1.
*/
/*int main()
{
	int T[4][4],i=0,j=0;
	
	for (i=0; i<4; i++) 
	{
		for(j=0;j<4;j++)
	 	{
		 	if(i==j) 
			 {
			 	T[i][j]=1;
			 }
			else
			{
				T[i][j]=0;
			}		 	 				
		}		 	
	}
	cout<<"\nLa matriz de T es: "<<endl;	
	for (i=0; i<4; i++) 
	{
		for(j=0;j<4;j++)
	 	{
	 	cout<<T[i][j]<<"\t";		
		}	
		cout<<endl;
	}
	return 0; 
	system("PAUSE");
}*/

/*
matriz de 5x5 con numeros de 1 al 25.
*/
/*int main()
{
	int T[5][5],i=0,j=0;
	
	for (i=0; i<5; i++) 
	{
		for(j=0;j<5;j++)
	 	{
	 	T[i][j]=(i*5)+j+1;			
		}		 	
	}
	cout<<"\nLa matriz de T es: "<<endl;	
	for (i=0; i<5; i++) 
	{
		for(j=0;j<5;j++)
	 	{
	 	cout<<T[i][j]<<"\t";		
		}	
		cout<<endl;
	}
	return 0; 
	system("PAUSE");
}*/

/*
Dado una matriz de 3 x 3, solo deben almacenar números pares.
*/
/*int main()
{
	int T[3][3],i=0,j=0,num;
	
	for (i=0; i<3; i++) 
	{
		for(j=0;j<3;j++)
	 	{	 	
		 cout<<"Ingrese el valor para T["<<i<<"]["<<j<<"]: ";
		 cin>>num;	
	 	if(num%2==0)
		 {
		 	T[i][j]=num;
		 }
		else
		 {
		 	j--;
		 }	 				
		}
		cout<<endl;		 	
	}
	cout<<"\nLa matriz de T es: "<<endl;	
	for (i=0; i<3; i++) 
	{
		for(j=0;j<3;j++)
	 	{
	 	cout<<T[i][j]<<"\t";		
		}	
		cout<<endl;
	}
	return 0; 
	system("PAUSE");
}*/


/*
Elabore un algoritmo que almacene las notas numéricas
enteras de un grupo de 3 estudiantes con 4 notas cada uno,
el programa debe averiguar el promedio de cada estudiante
según sus notas, y el promedio final de todos los
estudiantes. Al final imprimir las notas del estudiante con su
respectivo promedio al costado, y al final de todo el
promedio general.
*/
/*int main()
{
	int T[3][5],i=0,j=0;
	
	for (i=0; i<3; i++) 
	{
		cout<<"Ingrese las nota del alumno "<<i+1<<endl;	
		for(j=0;j<5;j++)
	 	{
	 	cout<<"Ingrese la nota "<<j+1<<": ";	
	 	cin>>T[i][j];
		 if(j==4)
		 {
		 for(int a=0; a<3;a++)
		 {
		 T[i][j]=T[i][j] + T[i][a];
		 }		 
		 T[i][j]=T[i][j]/3;
		 }			
		}		 	
	}
	cout<<"\nNotas "<<endl;	
	cout<<"\t    Nota 1    Nota 2   Nota 3   Nota 4   Promedio"<<endl;
	for (i=0; i<3; i++) 
	{
		cout<<"Alumno "<<i+1<<" \t";
		for(j=0;j<5;j++)
	 	{
	 	cout<<T[i][j]<<"\t";		
		}	
		cout<<endl;
	}
	return 0; 
	system("PAUSE");
}*/
/*
Desarrolle un programa que ingrese 9 pesos en un arreglo 
bidimensional de 3 x 3, luego cuente e imprima la cantidad 
de pesos que existe en cada rango: -Menores iguales a 20. 
-Entre 20 y 40. -Mayores o igual a 40.
*/

int main()
{
	int T[3][3],i=0,j=0,cont1=0,cont2=0,cont3=0;
	
	for (i=0; i<3; i++) 
	{
		for(j=0;j<3;j++)
	 	{	 	
		 cout<<"Ingrese el valor para T["<<i<<"]["<<j<<"]: ";
		 cin>>T[i][j];	 				
		}
		cout<<endl;		 	
	}
	
	cout<<"Pesos menores iguales a 20: ";
	for (i=0; i<3; i++) 
	{
		for(j=0;j<3;j++)
	 	{
	 		if(T[i][j]<=20)
			 {
			 	cout<<T[i][j]<<"\t";
			 	cont1+=1;
			 }		
		}
	}
	cout<<endl;
	cout<<"Hay "<<cont1<<" pesos menores iguales a 20";

	cout<<endl;
	cout<<endl;
	cout<<"Pesos entre 20 y 40: ";
		for (i=0; i<3; i++) 
		{
			for(j=0;j<3;j++)
		 	{
		 		if(T[i][j]>20 && T[i][j]<40)
				 {
				 	cout<<T[i][j]<<"\t";
				 	cont2+=1;
				 }		
			}
		}
	cout<<endl;
	cout<<"Hay "<<cont2<<" pesos entre 20 y 40";

	cout<<endl;
	cout<<endl;
	cout<<"Pesos mayores iguales a 40: ";
	for (i=0; i<3; i++) 
	{
		for(j=0;j<3;j++)
	 	{
	 		if(T[i][j]>=40)
			 {
			 	cout<<T[i][j]<<"\t";
			 	cont3+=1;
			 }		
		}
	}
	cout<<endl;
	cout<<"Hay "<<cont3<<" pesos mayores iguales a 40";

	return 0; 
	system("PAUSE");
}
