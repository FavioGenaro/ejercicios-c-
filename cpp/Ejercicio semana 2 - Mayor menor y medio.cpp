#include <conio.h>
#include <iostream>
#include <math.h>
/*Escribir un algoritmo para ingresar tres números, y determinar el mayor, menor y el término medio;*/
using namespace std;
int main()
  {//Declracion de variables
   float a,b,c,ma,me,ce;
   //Datos
   cout<<"Primer numero  : ";
   cin>>a;
   cout<<"Segundo numero : ";
   cin>>b;
   cout<<"Tercer numero : ";
   cin>>c;
   //Proceso
   if(a>b)
    {
    	ma=a;
        me=b;
	}
   else
       {ma=b;
       me=a;
       }
  if(c>ma)
     ma=c;//si es una linea, podemos o no colocar las llaves 
  if(c<me)
     me=c;        
   ce=(a+b+c)-(ma+me);
   cout<<" mayor   : "<<ma<<endl;
   cout<<" medio   : "<<ce<<endl;
   cout<<" menor   : "<<me<<endl;
   cout<<"Ascendente: "<<me<<" - "<<ce<<" - "<<ma<<endl;
   cout<<"Descendente: "<<ma<<" - "<<ce<<" - "<<me<<endl;
   getche(); //system pause te muestra en pantalla que pulses una tecla para finalizar el programa, y el getch no 
   return 0;
}

