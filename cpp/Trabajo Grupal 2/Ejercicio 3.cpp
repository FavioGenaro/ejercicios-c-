#include<iostream>
#include<conio.h>
using namespace std;
void pedirDatos();
int num_alm;
void articulos(int x);
void agotados(int x);
int Menu(){
	int opcion;
	do{
		system("cls");
		cout<<"     --------------------"<<endl;
		cout<<"\tMENU DE OPCIONES"<<endl; 
		cout<<"     --------------------"<<endl;
		cout<<"[1]. Articulos agotados en el almacen 1"<<endl;
		cout<<"[2]. Articulos agotados segun el almacen"<<endl;
		cout<<"[3]. Articulos que cuentan con stock"<<endl;
		cout<<"[4]. Costo total por almacen"<<endl;
		cout<<"[5]. Costo total de cada articulo en todos los almacenes"<<endl;
		cout<<"[6]. Costo global del inventario"<<endl;
		cout<<"[7]. SALIR"<<endl;
		cout<<"Ingresa una opcion: ";
		cin>>opcion;
	}while(opcion<0 || opcion>7);
	return opcion;
}
void pedirDatos(){
	cout<<"Ingrese el numero del almacen: ";
	cin>>num_alm;
}
void articulos(int x){
	if (num_alm==0){
	cout<<"\t"<<"     Articulo 0"<<"\t"<<"     Articulo 1"<<"\t"<<"     Articulo 3"<<endl;
	cout<<"\t"<<"  ------------------------------------------------"<<endl;
	cout<<"Cantidades"<<"       30"<<"\t"<<"\t"<<" 50"<<"\t"<<"\t"<<"25"<<endl;
	}
	else if (num_alm==1){
	cout<<"\t"<<"     Articulo 1"<<"\t"<<"     Articulo 2"<<"\t"<<"     Articulo 3"<<endl;
	cout<<"\t"<<"  ------------------------------------------------"<<endl;
	cout<<"Cantidades"<<"       29"<<"\t"<<"\t"<<" 20"<<"\t"<<"\t"<<"65"<<endl;
	}
	else if (num_alm==2){
	cout<<"\t"<<"     Articulo 0"<<"\t"<<"     Articulo 2"<<"\t"<<"     Articulo 3"<<endl;
	cout<<"\t"<<"  ------------------------------------------------"<<endl;
    cout<<"Cantidades"<<"       10"<<"\t"<<"\t"<<" 17"<<"\t"<<"\t"<<"45"<<endl;
	} 
	else {
	cout<<"No existe ese almacen"<<endl;
	}
}
void agotados(int x){
	if (num_alm==0){
	cout<<"Para este almacen, el articulo 2 no cuenta con stock"<<endl;
	}
	else if (num_alm==1){
	cout<<"Para este almacen, el articulo 0 no cuenta con stock"<<endl;
	}
	else if (num_alm==2){
	cout<<"Para este almacen, el articulo 1 no cuenta con stock"<<endl;
	}
	else {
	cout<<"No existe ese almacen"<<endl;
	} 
}	
int main(){
	int opcion;
	do{
		opcion=Menu();
		switch(opcion)
		{
			case 1: cout<<"El almacen 1 no cuenta con articulos del tipo 0"<<endl; break;
			case 2: pedirDatos();
					agotados(num_alm); break;
			case 3: pedirDatos();
					articulos(num_alm); break;
			case 4: cout<<"\t"<<"       Almacen 0"<<"\t"<<"Almacen 1"<<"\t"<<"Almacen 2"<<endl;
					cout<<"\t"<<"  ------------------------------------------------"<<endl;
					cout<<"Costo total"<<"      615.5"<<"\t"<<"\t"<<" 657.6"<<"\t"<<"\t"<<"331.8"<<endl; break;
			case 5: cout<<"\t"<<"       Articulo 0"<<"\t"<<"Articulo 1"<<"\t"<<"Articulo 2"<<"\t"<<"Articulo 3"<<endl;
					cout<<"\t"<<"     --------------------------------------------------------------"<<endl;
					cout<<"Almacen 0"<<"         78"<<"\t"<<"\t"<<"   395"<<"\t"<<"\t"<<"  0"<<"\t"<<"\t"<<"142,5"<<endl;
					cout<<"Almacen 1"<<"         0"<<"\t"<<"\t"<<"  229.1"<<"\t"<<"\t"<<"  58"<<"\t"<<"\t"<<"370,5"<<endl;
					cout<<"Almacen 2"<<"         26"<<"\t"<<"\t"<<"    0"<<"\t"<<"\t"<<"  49,3"<<"\t"<<"\t"<<"256,5"<<endl; break;
			case 6: cout<<"Se calcula un costo global de 1604.9"; break;
		}
		getche();
	}while(opcion!=7);
	cout<<"*****FIN PROCESO*****"<<endl;
	getche();
	return 0;
}
