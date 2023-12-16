#include <iostream>
#include <stdlib.h> //exit
#include <fstream> //para la lectura y escritura de archivos ( f de file)
using namespace std;

void escribir();
void agregar();
void leer();

int main(){
 escribir();
}


void escribir(){
	ofstream archivo; //tipo de dato y en nombre de la variable
	string nombreArchivo, frase;
	
	cout<<"Digite nombre del archivo: ";
	getline(cin,nombreArchivo); //guardo una variable del tipo cadena 
	
	archivo.open(nombreArchivo.c_str(),ios::out); //debo escribir el nombre con .txt  - creación del archivo
	
	//archivo.open("prueba.txt",ios::out); //abriendo el archivo: si existe lo reemplaza si no lo crea
	
	if (archivo.fail()){ //archivo falla o hay un error al abrir o crear el archivo
		cout<<"No se pudo abrir el archivo";
		exit(1); //salimos del programa
	}
	cout<<"Digite el texto del archivo: ";
	getline(cin,frase);
	
	archivo<<"Hola"<<endl; //escribo algo en el archivo
	archivo<<frase; 
	archivo.close();//cerramos el archivo
}


void agregar(){//añadimos más texto al archivo, a parte del que ya tiene
	
	ofstream archivo; //o de output(salida) 
	archivo.open("progra.txt",ios::app); //abrimos el archivo en modo de añadir (app), escribira donde se quedo el marcador al final de todo
	if (archivo.fail()){ 
		cout<<"No se pudo abrir el archivo";
		exit(1); 
	}
	archivo<<"Hola"<<endl; 
	archivo.close();
	
}

void leer(){
	
	ifstream archivo;  //el if es de input(entrada) o de lectura
	string texto;
	
	archivo.open("Prueba 2.txt",ios::in); //abrimos el archivo en modo de lectura(in de input), tmb se puede poner una ruta
	if (archivo.fail()){ 
		cout<<"No se pudo abrir el archivo";
		exit(1); 
	}
	while (!archivo.eof()){ //mientras no sea el final del archivo(recorrera el archivo mientras no llegue al final) 
		getline(archivo,texto); //recorre cada linea de archivo y lo almacena en texto
		cout<<texto<<endl;
	}
	archivo.close();
}
