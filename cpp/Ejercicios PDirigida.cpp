#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//programa principal
void Ejercicio2(void){
	
	int voto=0,c1=0,c2=0,c3=0,c4=0;
	float total;
	
	cout<<"ELECCIONES GENERALES 2021"<<endl;
	cout<<"Ingrese los votos (1,2,3,4)";
	cin>>voto;	
	while(voto!=0){		
		switch (voto){
			case 1:c1+=1;break;
			case 2:c2+=1;break;
			case 3:c3+=1;break;
			case 4:c4+=1;break;			
		}		
		total+=1;
		cin>>voto;
	}
	
	cout<<"\nCANTIDAD DE VOTOS PARA CADA CANDIDATO"<<endl;
	cout<<"\nVotos para el candidato 1: "<<c1<<endl;
	cout<<"Votos para el candidato 2: "<<c2<<endl;
	cout<<"Votos para el candidato 3: "<<c3<<endl;
	cout<<"Votos para el candidato 4: "<<c4<<endl;
	cout<<"Total de votos           : "<<total<<endl;
	
	cout<<"\nPORCENTAJE DE VOTOS PARA CADA CANDIDATO"<<endl;
	cout<<"\nPorcentaje de votos para el candidato 1: "<<(c1/total)*100<<"%"<<endl;
	cout<<"Porcentaje de votos para el candidato 2: "<<(c2/total)*100<<"%"<<endl;
	cout<<"Porcentaje de votos para el candidato 3: "<<(c3/total)*100<<"%"<<endl;
	cout<<"Porcentaje de votos para el candidato 4: "<<(c4/total)*100<<"%"<<endl;
	cout<<"Total de votos           			  : "<<"100%"<<endl;
}//si me pide el menor, entonces hago un for para que cada que ingrese un valor y pongo dentro un if que corra en simultaneo y una variable que contenga el valor menor


int main()
{
	//Ejercicio();
	char op1;
	int op;
	float z,f,c,g,m,n,b;//variables de la op1
	int num,num1=1,cont=1,fac=1,suma=0;//variables de la op2
	int hTr;//variables de la op3
		
	for(;;){
	system("cls");
	cout<<"<<<<<<MENU DE OPCIONES>>>>>>"<<endl<<endl;
    cout<<"[1]: Determinar el valor de Z"<<endl;
	cout<<"[2]: Sumatoria de factoriales"<<endl;
	cout<<"[3]: Determinar el sueldo de un trabajador"<<endl;
	cout<<"[4]: Salir"<<endl;
	cout<<"Ingrese una opcion :"<<endl;
    cin>>op;
    
	system("cls");
	
		switch(op)
	    {
	             
	        case 1:cout<<"Inserte el valor de f,c y g: ";
	        		cin>>f>>c>>g;
			 		z=1+f-3*(c+f*pow(2,g));
			 		cout<<"El valor de z es: "<<z<<endl;
					system ("pause");	
					break;
			 		
	        case 2:cout<<"Coloque el numero de factoriales: ";
					cin>>num;
					if (num>0){
						for (int i=1; i<=num; i++){//numero de repeticiones
							cout<<num1<<"!\t";//num1 seran los valores de mi sucesión
							while(cont<num1){//calculo el factorial de num1
								cont=cont+1;
								fac=fac*cont;
							}
							num1+=2;//
							suma+=fac;						
						}
						cout<<"\nEl resultado es: "<<suma<<endl;		
					}
					else{
						cout<<"DATO ERRADO"<<endl;
					} 
					system ("pause");									
					break;	
	        case 3:Ejercicio2();
					return 0;
					getche();
					break;
	        case 4:	cout<<"Desea hacer otro movimiento (s/n)";
				    cin>>op1;
			    	if (op1=='s' || op1 == 'S'){		
						system("cls");
			 			cout<<"************** GRACIAS POR SU PREFERENCIA ***************";
						return 0;
						getche(); 
					}					        		
		}	
	}
}
