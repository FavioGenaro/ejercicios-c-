//FAVIO GENARO SAICO MERMA

#include <stdio.h> // Para el manejo de archivos
#include <string.h> // Para el manejo de cadenas
#include <conio.h> // Para el manejo de clrscr
#include <iostream> // Para el manejo de cout
#include <ctype.h> // Para el uso de toupper
#include<iomanip> //setw
using namespace std;

#define archivo "PEDIDO.DIR"
#define temp "TEMPORAL.DIR" 

//PROTOTIPOS DE FUNCIONES
void menu_Principal(int &op);
void mostrarReporte(FILE *);
void ingresoDatos (FILE *);
void buscarxNombre(FILE *);
void modificarCampos(FILE *);
void bajaLogica(FILE *);
void bajaFisica(FILE *);


struct tipo_pedidos{ 
	// Campos:
	int codigoPedido;       // codigo de pedido
	char nombres[30];    	// Nombre del cliente
	char direccion[50];    	// Direccion del cliente
	char nombreArticulo[20];// Nombre del articulo comprado
	int cantidad;        	// Cantidad comprada
	float precioUni;       	// Precio del articulo comprado
	bool estado;
};

//Declaracion global de la variable
tipo_pedidos Pedido; // "Pedido" de tipo struct
long int dir_fisica;
FILE *P;
			       
int main(){
	int op;
	P=fopen(archivo,"a");
	fclose(P);
  	do{
		menu_Principal(op);
	    switch(op){
			case 1 : ingresoDatos(P);    break;
			case 2 : mostrarReporte(P);  break;
			case 3 : buscarxNombre(P);   break;
			case 4 : modificarCampos(P); break;
			case 5 : break;
			case 6 : bajaLogica(P); 	 break;
			case 7 : bajaFisica(P);		 break;
			case 8: cout<<"\n";
					cout<<"\t\t----------------------------------------"<<endl;
					cout<<"\t\t\t**PROGRAMA FINALIZADO**"<<endl;
					cout<<"\t\t----------------------------------------"<<endl;
					getch();
					system("cls");
					break;
	    }
	}while(op!=8);
	return 0;
}
void menu_Principal(int &op){ //MENU PRINCIPAL
	do{
		system("cls");
	    cout << "\n\n\n\r\t\t 1.- Ingresar Datos";
	    cout << "\n\r\t\t 2.- Mostrar Reporte según Formato";
	    cout << "\n\r\t\t 3.- Buscar por Nombre";
	    cout << "\n\r\t\t 4.- Modificar por Campos";
	    cout << "\n\r\t\t 5.- Ordenar Alfabéticamente";
	    cout << "\n\r\t\t 6.- Baja Logica";
	    cout << "\n\r\t\t 7.- Baja Fisica";
	    cout << "\n\r\t\t 8.- Finalizar";
	
	    cout << "\n\n\n\r\t\t Seleccione su opcion ---> ";
	    cin >> op;
	    if(op<1 || op>8){
			system("cls");
			cout<<"\n";
			cout<<"\t\t----------------------------------------"<<endl;
			cout<<"\t\t   **INGRESE UNA OPCION VALIDA**"<<endl;
			cout<<"\t\t----------------------------------------"<<endl;
			getch();
		}
	}while(op<1 || op>8);
	//system("cls");
}
void ingresoDatos (FILE *P){ //INGRESO DE DATOS AL ARCHIVO
	int codpedido;
	bool repite=false;
	do{
		P=fopen(archivo,"ab+"); //crea o abre el archivo en modo de escritura y lectura
		
		if(P==NULL){
			cout<<"El archivo no existe"<<endl;
			exit(0);
		}
		//consistenciando de que el codigo exista
		system("cls");

		repite=false;
		cout<<"\nIngrese codigo de pedido: ";
		cin>>codpedido;
		//Consistenciando de que no se repita
		
		fread(&Pedido,sizeof(Pedido), 1, P);
		while(!feof(P)){
			if (codpedido==Pedido.codigoPedido){
				repite=true;
				cout<<"El codigo ya existe"<<endl;
				getche();
				fclose(P);
				break;
			}	
			fread(&Pedido,sizeof(Pedido), 1, P);
		}
		if(repite==false){ //si no se repite entonces procede a llenar los demás campos
			Pedido.codigoPedido=codpedido;cout<<"\nIngrese el nombre del cliente: ";
			fflush(stdin); cin.getline(Pedido.nombres,30,'\n'); strupr(Pedido.nombres);
			
			cout<<"\nIngrese direccion: ";
			fflush(stdin); cin.getline(Pedido.direccion,50,'\n'); strupr(Pedido.direccion);	
			
			cout<<"\nIngrese nombre del articulo: ";
			fflush(stdin); cin.getline(Pedido.nombreArticulo,20,'\n'); strupr(Pedido.nombreArticulo);	
			
			cout<<"\nIngrese la cantidad comprada: ";
			cin>>Pedido.cantidad;
			
			cout<<"\nIngrese el precio unitario: ";
			cin>>Pedido.precioUni;
			Pedido.estado=true;
			fwrite(&Pedido, sizeof(Pedido),1,P);
			fclose(P);
		}
	}while(repite==true);//mientras el codigo ingresado exista
	
	//fclose(P);	
}
void mostrarReporte(FILE *P){ 
	float total,totales;
	
	P=fopen(archivo,"r"); //crea o abre el archivo en modo de escritura y lectura	
	if(P==NULL){
		cout<<"El archivo no existe"<<endl;
		exit(0);
	}
	
	system("cls");
	//ENCABEZADO
	cout<<"\t\t\t\t\tLISTADO DE PEDIDOS";
	cout<<"\n\r"<<setw(10)<<"CODIGO"<<setw(30)<<"NOMBRES"<<setw(20)<<"ARTICULO"<<setw(15)<<"CANTIDAD"<<setw(15)<<"P.UNITARIO"<<setw(15)<<"TOTAL"<<endl;
	cout<<"\r--------------------------------------------------------------------------------------------------------------"<<endl;
	
	//CUERPO
	fread(&Pedido,sizeof(Pedido), 1, P);
	while(!feof(P)){ 
		if (Pedido.estado==true){
			total=Pedido.cantidad*Pedido.precioUni;
			cout<<"\r"<<setw(10)<<Pedido.codigoPedido<<setw(30)<<Pedido.nombres<<setw(20)<<Pedido.nombreArticulo<<setw(15)<<Pedido.cantidad<<setw(15)<<Pedido.precioUni<<setw(15)<<total<<endl;
			totales=totales+total;
		}							
		fread(&Pedido,sizeof(Pedido), 1, P);			
	}
	cout<<"\r--------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"TOTAL"<<setw(50)<<totales<<endl;
	fclose(P);
	getch();
	
}
void buscarxNombre(FILE *P){
	bool existe=false;
	char nombre[30];
	
	P=fopen(archivo,"r"); //crea o abre el archivo en modo de escritura y lectura	
	if(P==NULL){
		cout<<"El archivo no existe"<<endl;
		exit(0);
	}
	
	system("cls");
	cout<<"Ingrese el nombre que desea buscar: ";
	fflush(stdin); cin.getline(nombre,30,'\n'); strupr(nombre);
	
	/*dir_fisica=(no_prod-1)*sizeof(Registro); // Calculo de la dir. fisica
	fseek(alias,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
	fread(&Registro,sizeof(Registro),1,alias);*/
	
	fread(&Pedido,sizeof(Pedido), 1, P);
	while(!feof(P)){
		if(strcmp(Pedido.nombres,nombre)==0){
			existe=true;
			break;
		}
		fread(&Pedido,sizeof(Pedido), 1, P);
	}
	
	if (existe==true){ //si existe mostramos sus datos
		cout<<"\t\t............................"<<endl;
		cout<<"\t\tDATOS DEL CLIENTE"<<endl;
		cout<<"\t\tCodigo de pedido	   : "<<Pedido.codigoPedido<<endl;
		cout<<"\t\tNombres         	   : "<<Pedido.nombres<<endl;
		cout<<"\t\tDireccion 	   	   : "<<Pedido.direccion<<endl;
		cout<<"\t\tNombre del articulo : "<<Pedido.nombreArticulo<<endl;
		cout<<"\t\tCantidad            : "<<Pedido.cantidad<<endl;
		cout<<"\t\tPrecio unitario	   : "<<Pedido.precioUni<<endl;
		cout<<"\t\t............................"<<endl;
		getche();
	}else{
		cout<<"\t\t***El nombre ingresado no existe***"<<endl;
		getche();
	}
	fclose(P);
}
void modificarCampos(FILE *P){
	int codPedido, op1,codPedido2;
	long int dir_fisica2;
	tipo_pedidos Pedido2;
	
	P=fopen(archivo,"rb+"); //Lectura y escritura 
	if(P==NULL){
		cout<<"El archivo no existe"<<endl;
		exit(0);
	}
	
	cout << "\n\n\n\rCodigo de pedido: "; cin >> codPedido;
	
	//dir_fisica=(codPedido-1)*sizeof(Pedido); // Calculo de la dir. fisica
	//fseek(P,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
	fseek(P,ftell(P)-sizeof(Pedido),SEEK_SET);
	fread(&Pedido,sizeof(Pedido),1,P);
	
	if(Pedido.codigoPedido==codPedido){
		system("cls"); 
		cout<<"\t\t............................"<<endl;
		cout<<"\t\tDATOS DEL PEDIDO"<<endl;
		cout<<"\t\tCodigo de pedido	   : "<<Pedido.codigoPedido<<endl;
		cout<<"\t\tNombres         	   : "<<Pedido.nombres<<endl;
		cout<<"\t\tDireccion 	   	   : "<<Pedido.direccion<<endl;
		cout<<"\t\tNombre del articulo : "<<Pedido.nombreArticulo<<endl;
		cout<<"\t\tCantidad            : "<<Pedido.cantidad<<endl;
		cout<<"\t\tPrecio unitario	   : "<<Pedido.precioUni<<endl;
		cout<<"\t\t............................"<<endl;
		
		do{
			//system("cls");
			cout << "\n\n\n\t\tQue campos desea modificar ? ..."<<endl;
			cout << "\t\t[1]: Codigo de pedido"<<endl;
			cout << "\t\t[2]: Nombres"<<endl;
			cout << "\t\t[3]: Direccion"<<endl;
			cout << "\t\t[4]: Nombre del articulo"<<endl;
			cout << "\t\t[5]: Cantidad"<<endl;
			cout << "\t\t[6]: Precio unitario"<<endl;
			cout << "\t\t[7]: Salir"<<endl;
    		do{
				cout <<"\nIngrese una opcion: "<<endl;
				cin>>op1;
			}while(op1<1 || op1 >7);
			switch(op1){
				case 1: do{
							cout<<"Nuevo codigo: "<<endl;
							cin>>codPedido2;
							//CONSISTENCIAMOS
							//dir_fisica2=(codPedido2-1)*sizeof(Pedido2); // Calculo de la dir. fisica
							fseek(P,ftell(P)-sizeof(Pedido2),SEEK_SET); //Posicionar el apuntador del archivo
							fread(&Pedido2,sizeof(Pedido2),1,P);
							if(Pedido2.codigoPedido==codPedido2){ 
									cout<<"***El codigo ya existe***"<<endl;;
							}else{
								Pedido.codigoPedido=codPedido2;
								fseek(P,ftell(P)-sizeof(Pedido),SEEK_SET); //Posicionar el apuntador del archivo
								fwrite(&Pedido,sizeof(Pedido),1,P);
								break;
							}
						}while(Pedido2.codigoPedido==codPedido2);
						break;
				case 2: cout<<"Nuevos nombres: "<<endl;
						fflush(stdin); cin.getline(Pedido.nombres,30,'\n'); strupr(Pedido.nombres);
						break;
				case 3: cout<<"Nueva direccion: "<<endl;
						fflush(stdin); cin.getline(Pedido.direccion,30,'\n'); strupr(Pedido.direccion);
						break;
				case 4: cout<<"Nuevo articulo: "<<endl;
						fflush(stdin); cin.getline(Pedido.nombreArticulo,30,'\n'); strupr(Pedido.nombreArticulo);
						break;
				case 5: cout<<"Cantidad: "<<endl; 
						cin>>Pedido.cantidad;
						break;
				case 6: cout << "Nuevo precio unitario: "; 
						cin>>Pedido.precioUni;
						break;
			}	
		}while(op1!=7);
			
		fseek(P,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
		fwrite(&Pedido,sizeof(Pedido),1,P);  // Graba el registro con los nuevos campos
		fclose(P);   // Cierra el archivo
		cout << "\n\n\n\rRegistro modificado !!!";
		cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
		getch();
		return;
	}else{
  		cout << "\n\rNo se encuentra ese registro !!!";
	}
	fclose(P); // Cierra el archivo
	cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
	getch();
	return;
}
void ordenAlfabetico(FILE *P){
	
}



void bajaLogica(FILE *P){
	int codPedido, opc;
	
	system("cls");
	P=fopen(archivo,"rb+"); //Lectura y escritura 
	if(P==NULL){
		cout<<"El archivo no existe"<<endl;
		exit(0);
	}
	cout <<"\n\n\n\rCodigo de pedido: "; cin>> codPedido;
	//dir_fisica=(codPedido-1)*sizeof(Pedido); // Calculo de la dir. fisica
	//fseek(P,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
	fseek(P,ftell(P)-sizeof(Pedido),SEEK_SET);
	fread(&Pedido,sizeof(Pedido),1,P);
	
	if(Pedido.codigoPedido==codPedido){ 	
		do{
			system("cls");
			cout<<"\t\t............................"<<endl;
			cout<<"\t\tDATOS DEL PEDIDO"<<endl;
			cout<<"\t\tCodigo de pedido	   : "<<Pedido.codigoPedido<<endl;
			cout<<"\t\tNombres         	   : "<<Pedido.nombres<<endl;
			cout<<"\t\tDireccion 	   	   : "<<Pedido.direccion<<endl;
			cout<<"\t\tNombre del articulo : "<<Pedido.nombreArticulo<<endl;
			cout<<"\t\tCantidad            : "<<Pedido.cantidad<<endl;
			cout<<"\t\tPrecio unitario	   : "<<Pedido.precioUni<<endl;
			cout<<"\t\t............................"<<endl;
		
			cout<<"\nEsta seguro que desea eliminar estos datos?? (SI[1]  NO[0])"<<endl;
			cin>>opc;
		}while (opc!=1 && opc!=0);
		if(opc==1){
			Pedido.estado=false; //BORRADO LOGICO
			fseek(P,ftell(P)-sizeof(Pedido),SEEK_SET);
			fwrite(&Pedido,sizeof(Pedido),1,P);  // Graba el registro con
			cout << "\n\n\n\rRegistro eliminado!!!"<<endl;
		}
	}else{
  		cout << "\n\rNo se encuentra ese registro !!!";
	}
	fclose(P); // Cierra el archivo
	cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
	getch();
	return;
}
void bajaFisica(FILE *P){	
	
	FILE *archivoTemp;
	
	system("cls");
	P=fopen(archivo,"r"); //Lectura y escritura 
	if(P==NULL){
		cout<<"El archivo no existe"<<endl;
		exit(0);
	}
	archivoTemp=fopen(temp,"wb"); //crea el archivo para lectra y escritura
	
	fread(&Pedido,sizeof(Pedido), 1, P);
	while(!feof(P)){
		if(Pedido.estado!=false){
			fwrite(&Pedido,sizeof(Pedido),1,archivoTemp);
		}
		fread(&Pedido,sizeof(Pedido), 1, P);
	}
	
	fclose(P); // Cierra todos los archivos abiertos
	fclose(archivoTemp);
	remove(archivo); //Elimina el archivo original
	rename(temp,archivo);
	
	cout << "\n\n\r\t\t\tArchivo compactado !!!";
	cout << "\n\r\t\t\t<<< Oprima cualquier tecla para continuar >>>";
	getch();
	return;
}

