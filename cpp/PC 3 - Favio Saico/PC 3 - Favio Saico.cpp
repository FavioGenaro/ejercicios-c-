//FAVIO GENARO SAICO MERMA
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define max 5 //colocar los % como constantes
#define bon 0.03 //3%
#define deSS 0.02 //2%
#define deAFP 0.03 //3%
int i=0; //almacena la cantidad de registros
struct datos
{  
   int codigo;
   char nombre[30];
   float sueldoBruto;
   float bonif; //3% del sueldo bruto
   float descSS; //2%
   float descAFP; //3%
   float sueldoNeto;
};
//prototipos
int menu();
void ingresoDatos(datos d[max]);
void mostrarReporte(datos d[max]);
int buscarxnombre(datos d[max],char nomb[30]);
void mostrarUno(datos d[max],int posc);
void ordenaAlf(datos d[max]);
void ordenaSuelN(datos d[max]);
void modificar(datos d[max]);
void eliminarR(datos d[max]);

int main()
{
	i=0;
	datos d[max];
	int opcion,posiNom=-1,ops;
	char nombBusc[30];
	for(;;){
		opcion=menu();	
		switch (opcion){
			case 1:ingresoDatos(d); //Llamamos a la función 
				   break;
			case 2:mostrarReporte(d); //Llamamos a la función 
				   break;
			case 3:cout<<"Ingrese el nombre a buscar: "<<endl;
					fflush(stdin);
					gets(nombBusc);
					posiNom=buscarxnombre(d,nombBusc);//mando la posición del nombre encontrado
					if(posiNom>=0){
						mostrarUno(d,posiNom); //en caso el registro exista
						getche();	
					}else{
						cout<<"El nombre no existe...."<<endl;
						getche();
					} 
					break;
			case 4: ordenaAlf(d);
					cout<<"\t\t\t\t\tLISTADO EN ORDEN ALFABETICO (A-Z)"<<endl;
             		cout<<"\t\t\t\t\t================================="<<endl;
             		mostrarReporte(d);
             		break;
			case 5: ordenaSuelN(d);
					cout<<"\t\t\t\tLISTADO EN ORDEN DEL SUELDO NETO (ASCENDENTE)"<<endl;
             		cout<<"\t\t\t\t=============================================="<<endl;
             		mostrarReporte(d);
             		break;
			case 6: system("cls");
					modificar(d);
             		break;
            case 7: system("cls");
					eliminarR(d);
             		break;
            case 8: do{
					cout<<"¿Esta seguro que desea salir? Si [1] o No [0]: ";
					cin>>ops;
					}while(ops!=1 && ops!=0);//solo puede ingresar 0 o 1
					if(ops==1){
						system("cls");
						cout<<"***************** FIN PROCESO ********************";
						getche();
						return 0;
					}break;
		}	
	}
	getche();	
	return 0;
}

int menu(){
	int op;
	system("cls");
	cout<<"\t\t\t MENU DE OPCIONES"<<endl;
	cout<<"\t\t[1] Capturar datos "<<endl;
	cout<<"\t\t[2] Mostrar reporte "<<endl;
	cout<<"\t\t[3] Busqueda por nombre"<<endl;
	cout<<"\t\t[4] Ordena alfabetico"<<endl;
	cout<<"\t\t[5] Ordena por sueldo neto"<<endl;
	cout<<"\t\t[6] Modificar campos"<<endl;	
	cout<<"\t\t[7] Eliminar un registro"<<endl;
	cout<<"\t\t[8] Salir"<<endl;
	do{
		cout<<"Ingrese una opcion: ===> ";
	    cin>>op;
	}while(op<1 || op >8);
	return op;
}
void ingresoDatos(datos d[]){
	system("cls");
	bool repite=false;
	do{
		repite=false;
		cout<<"Ingrese codigo: ";
		cin>>d[i].codigo;
		for(int j=0;j<i;j++){
			if(d[i].codigo==d[j].codigo){
				repite=true;
			}
		}
	}while(repite==true);//El codigo no debe repetirse	
	cout<<"Ingrese su Nombre: ";
	fflush(stdin);
	cin.getline(d[i].nombre,30,'\n');
	do{
		cout<<"Ingrese su sueldo bruto: ";
		cin>>d[i].sueldoBruto;
	}while(d[i].sueldoBruto<0);//El sueldo debe ser positivo
	
	d[i].bonif=d[i].sueldoBruto*bon;
	d[i].descSS=d[i].sueldoBruto*deSS;
	d[i].descAFP=d[i].sueldoBruto*deAFP; 
	d[i].sueldoNeto=d[i].sueldoBruto+d[i].bonif-(d[i].descSS+d[i].descAFP);
	i=i+1;//i le agregamos un espacio 
}
void mostrarReporte(datos d[]){
	float sbt=0,bont=0,ssto=0,afpto=0,snt=0;
	cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	printf("| %-20.15s| %-25.20s| %-11.15s| %-11.15s| %-11.15s| %-11.15s| %-11.15s|\n","CODIGO","NOMBRE","S. BRUTO","BONIF","SS","AFP","S. NETO");
	cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	for (int k=0; k<i; k++){		
		printf("| %-020.2i| %-25.20s| %-011.2f| %-011.2f| %-011.2f| %-011.2f| %-011.2f|\n",d[k].codigo,d[k].nombre,d[k].sueldoBruto,d[k].bonif,d[k].descSS,d[k].descAFP,d[k].sueldoNeto);
		cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
		sbt=sbt+d[k].sueldoBruto;
		bont=bont+d[k].bonif;
		ssto=ssto+d[k].descSS;
		afpto=afpto+d[k].descAFP;
		snt=snt+d[k].sueldoNeto;
	}	
	printf("| %-20.20s %-26.20s| %-011.2f| %-011.2f| %-011.2f| %-011.2f| %-011.2f|\n","TOTALES","-->",sbt,bont,ssto,afpto,snt);
	cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
	getche();
}
int buscarxnombre(datos d[],char nomb[30]){
	int p;
	p=-1;
	for(int j=0;j<i;j++){
		if(strcmp(d[j].nombre,nomb)==0){
			p=j;
		}
	}
	return p;		
}
void mostrarUno(datos d[],int posc){ //MOSTRAR DATOS SEGUN LA POSICION
	cout<<"............................"<<endl;
	cout<<"Datos del Empleado"<<endl;
	cout<<"Codigo       : "<<d[posc].codigo<<endl;
	cout<<"Nombre       : "<<d[posc].nombre<<endl;
	cout<<"Sueldo Bruto : "<<d[posc].sueldoBruto<<endl;
	cout<<"Bonificacion : "<<d[posc].bonif<<endl;
	cout<<"Descuento SS : "<<d[posc].descSS<<endl;
	cout<<"Descuento AFP: "<<d[posc].descAFP<<endl;
	cout<<"Sueldo Neto  : "<<d[posc].sueldoNeto<<endl;
	cout<<"............................"<<endl;
}

void ordenaAlf(datos d[]){ //de la A a la Z
	datos aux;	    
    for(int k=0;k<i;k++){
    	for(int j=k+1;j<i;j++) {
			if (strcmp(d[k].nombre,d[j].nombre) > 0){ //metodo burbuja
				aux=d[k];
				d[k]=d[j];
				d[j]=aux;
			}
		}
	}         		    	 
}
void ordenaSuelN(datos d[]){ //de forma ascendente
	datos aux;	    
    for(int k=0;k<i;k++){
    	for(int j=k+1;j<i;j++) {
			if (d[k].sueldoNeto>d[j].sueldoNeto){  //metodo burbuja    
				aux=d[k];
				d[k]=d[j];
				d[j]=aux;
			}
		}
	}         		    	 
}
void modificar(datos d[]){
	int codigo,p=-1,opc,codv,suelnv;
    bool repite=false;
	cout<<"Modificar datos"<<endl;      
	cout<<"================="<<endl<<endl;
	cout<<"Ingrese el codigo a modificar: ";
	cin>>codigo;
	for(int j=0;j<i;j++){ //buscamos el codigo
		if(d[j].codigo==codigo){
			p=j;
		}
	}
	if (p!=-1){ //EN CASO EL CODIGO EXISTA
		for(;;){
            do{
            	system("cls");
				cout<<"DATOS A MODIFICAR"<<endl; //mostramos los datos del trabajador a modificar
            	mostrarUno(d,p);
				cout<<"\t\tQUE CAMPOS DESEA MODIFICAR"<<endl;
				cout<<"\t====================================="<<endl<<endl;
				cout<<"\t[1]...Codigo"<<endl;
				cout<<"\t[2]...Nombre"<<endl;
				cout<<"\t[3]...Sueldo Bruto"<<endl;
				cout<<"\t[4]...Regresar"<<endl;
				cout<<"\t\nIngrese la opcion a modificar ==>";
				cin>>opc;
            }while(opc<1 || opc>4);
            switch (opc){
				case 1:repite=false;
						cout<<"Ingrese el nuevo codigo: ";
						cin>>codv;							
						for(int j=0;j<i;j++){
							if(codv==d[j].codigo){ //verifico si el codigo se repite
								cout<<"****El codigo ya existe****"<<endl;									
								repite=true;
								getche();
								break;
							}
						}
						if(repite==false){
							d[p].codigo=codv;
							cout<<"Cambio realizado con exito..."<<endl;
							getche();
						}
                        break;
				case 2:cout<<"Ingrese el nuevo nombre: ";
                        cin>>d[p].nombre;
                        cout<<"Cambio realizado con exito..."<<endl;
						getche();
                        break;
				case 3: cout<<"Ingrese el nuevo sueldo bruto: ";
						cin>>suelnv;
						if(suelnv<0){
							cout<<"****Ingrese un sueldo valido****"<<endl;									
							getche();
							break;
						}else{
							d[p].sueldoBruto=suelnv;
							d[p].bonif=d[p].sueldoBruto*bon;
							d[p].descSS=d[p].sueldoBruto*deSS;
							d[p].descAFP=d[p].sueldoBruto*deAFP; 
							d[p].sueldoNeto=d[p].sueldoBruto+d[p].bonif-(d[p].descSS+d[p].descAFP);
							cout<<"Cambio realizado con exito..."<<endl;
							getche();
						}                       
                        break;                        
				case 4:opc=0;break;
			}
			if (opc==0)break;
		}	
		cout<<"Modificacion finalizada..."<<endl;   
		getche();
    }	
	else{ //EN CASO EL NO CODIGO EXISTA
		cout<<"Codigo no encontrado"<<endl;
		getche();
	}	
}
void eliminarR(datos d[]){
	int codigo,p=-1,ops;
    
	cout<<"ELiminar registro"<<endl;      
	cout<<"================="<<endl<<endl;
	cout<<"Ingrese el codigo a eliminar: ";
	cin>>codigo;
	for(int j=0;j<i;j++){ //recorro todo el registro y captura la posición del codigo
		if(d[j].codigo==codigo){
			p=j;
		}
	}
	if (p!=-1){//en caso encuentre el registro
		for(;;){
			system("cls");
			cout<<"DATOS A ELIMINAR"<<endl;
            mostrarUno(d,p);
            do{
	            cout<<"¿Esta seguro que desea eliminar el registro? Si [1] o No [0]: ";
				cin>>ops;
			}while(ops!=1 && ops!=0);//solo puede ingresar 0 o 1
			if (ops==1){				
				d[p].codigo=0; //borro todos lo campos
				strcpy (d[p].nombre,"");
				d[p].sueldoBruto=0;
                d[p].bonif=0;
				d[p].descSS=0;
				d[p].descAFP=0; 
				d[p].sueldoNeto=0;
				if (p<i){ //Reordeno los registros
					for (int k=p+1;k<=i;k++){
						d[k-1]=d[k];
					}					
				} 
				i=i-1;//-1 registro				
				cout<<"Registro eliminado correctamente....."<<endl;
				getche();
				break;
			}else{
				break;
			}
		}	   
    }	
	else{
		cout<<"Codigo no encontrado"<<endl;
		getche();
	}	
}
