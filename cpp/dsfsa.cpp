#include <iostream>
#include <fstream>
#include <locale.h>
#include <windows.h>
#include <string>

using namespace std;

void lectura(void);

int main() {
  setlocale(LC_ALL, "spanish");
  // SetConsoleCP(1252);  
  // SetConsoleOutputCP(1252);
  
  string seguir = "S";

  while (seguir == "S" || seguir == "s")
  { 
    system("CLS");
    system("color 70");
    cout<<"\n\t\t\tPrograma que visualiza los datos del archivo del registro";
    cout<<"\n\t\t\t-----------------------------------------------------\n\n";
    lectura();

    cout<<"\n\tDesea procesar nuevamente: S o N\t";
    cin >> seguir;

    while (seguir != "S" && seguir != "s" && seguir != "N" && seguir != "n")
    {
      cout<<"\n\tError. Digite S o N\t";
      cin >> seguir;
    }
  }

  cout<<endl<<endl;
  system("pause");
  
  return 0;
}

void lectura(void) {
  ifstream entra("registro.txt", ios::in);
  string linea;
  char nombres[25];
  char apellidos[25];
  int edad;
  char ciudad[20];
  char genero[30];
  char profesion[30];
  char aficion[20];

  if(!entra.is_open()) entra.open("registro.txt", ios::in);

  cout<<"\n\tNombres\t\tApellidos\tEdad\tCiudad\t\tGénero\t\tProfesión\tAfición";   
  cout<<"\n\t---------------------------------------------------------------------------------------------------\n";

  while(!entra.eof()) {
    entra>>nombres>>apellidos>>edad>>ciudad>>genero>>profesion>>aficion;
    cout<<"\t"<<nombres<<"\t"<<apellidos<<"\t"<<edad<<"\t"<<ciudad<<"\t\t"<<genero<<"\t"<<profesion<<"\t"<<aficion<<endl;
  }

  cout<<"\n\t---------------------------------------------------------------------------------------------------\n";

  entra.close();
  cout<<endl; 
}
