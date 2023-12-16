//Favio Genaro Saico Merma
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	//Declaración de variables
	float t1,t2,t3,totalM=0,totalY=0,m1,m2,m3; //para el caso 1
	int num1=1,num,cont=1,sumaS=0;//para el caso 2
	int nNotas,nota,notaA,menor,suma, promedio;//para el caso 3
	string op1;
	int op;

	for(;;){
	system("cls");
	cout<<"\t\t<<<<<MENU DE OPCIONES>>>>>"<<endl<<endl;
    cout<<"\t\t[1]: Calcular el recorrido de 3 tramos en metros y yardas"<<endl;
	cout<<"\t\t[2]: Serie de numeros"<<endl;
	cout<<"\t\t[3]: Determinar las notas de un alumno"<<endl;
	cout<<"\t\t[4]: Salir"<<endl;
	cout<<"Ingrese una opcion :"<<endl;
    cin>>op;
    
	system("cls");
	
		switch(op)
	    {	             
	        case 1:	
	        		do {
					cout<<"Ingrese el tramo 1 en Kilometros: ";
					cin>>t1;	 
					}while(t1<0);
					do{	
					cout<<"Ingrese el tramo 2 en pies: ";
					cin>>t2;
					}while(t2<0);
					do{	
					cout<<"Ingrese el tramo 1 en millas: ";
					cin>>t3;
					}while(t3<0);
					//Conversión a metros
					m1=t1*1000;
					m2=t2/3.28;
					m3=t3*1609;
					totalM=m1+m2+m3;
					//Conversión a yardas
					totalY=totalM*3.28/3;
						
					cout<<endl;			
					cout<<"La longitud total recorrida en metros: "<<totalM<<" metros"<<endl;
					cout<<"La longitud total recorrida en yardas: "<<totalY<<" yardas"<<endl;
					system ("pause");
					break;
					
	        case 2:	do {
					cout<<"Coloque el numero de terminos (>0): ";
					cin>>num;
					}while(num<0);
					
					for (int i=1; i<=num; i++){
						cout<<num1<<" ";//num1 seran los valores de mi sucesión
						if (num1%2==0) sumaS+=num1; //numero par
						cont+=1;
						num1+=cont;													
					}
					cout<<"\nSuma de los pares: "<<sumaS<<endl;		

					system ("pause");									
					break;	
	        
	        case 3: do{
						cout<<"Ingrese el numero de notas (>1): ";
	        			cin>>nNotas;	        		
					}while(nNotas<=1);
					
	        		for (int i=1;i<=nNotas;i++){
						menor=nota;	        			
	        			do{							
							cout<<"Ingrese la nota numero "<<i<<" [0-20]: ";
	        				cin>>nota;
						}while(nota<0 || nota>20);
	        			        			
	        			suma+=nota;
						if(nota<menor) menor=nota;						 				      				
					}	        								
					promedio=(suma-menor)/(nNotas-1);
					cout<<"La menor nota es:     "<<menor<<" puntos"<<endl;
					cout<<"El promedio final es: "<<promedio<<" puntos"<<endl;
					system ("pause");
					break;
					
	        case 4:	cout<<"Esta seguro que desea salir? (S/N)";
				    cin>>op1;
			    	if (op1=="s" || op1 == "S"){		
						system("cls");
			 			cout<<"************** GRACIAS POR SU PREFERENCIA ***************";
						return 0;
						system ("pause"); 
					}	
		}
	}
}
