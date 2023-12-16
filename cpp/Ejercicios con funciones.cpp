// Hora un segundo después
#include <iostream>
#include <iomanip>
using namespace std;
void segundo_despues(int *h, int *m, int *s);

int main()
{   int horas, minutos, segundos;
    do
    {
        cout << "Introduce hora: ";
        cin >> horas;
    }while(horas<0 || horas > 23);
    do
    {
        cout << "Introduce minutos: ";
        cin >> minutos;
    }while(minutos<0 || minutos > 59);
    do
    {
        cout << "Introduce segundos: ";
        cin >> segundos;
    }while(segundos<0 || segundos > 59);

    //llamada a la función
    segundo_despues(&horas, &minutos, &segundos);

    cout << setfill('0');
    cout << endl << "Hora un segundo despues: ";
    cout << setw(2) << horas << ":";
    cout << setw(2) << minutos << ":";
    cout << setw(2) << segundos << endl;
    system("pause");
}

//function c++ que recibe una hora expresada en
//horas, minutos y segundos y calcula la hora
//un segundo después
void segundo_despues(int *h, int *m, int *s)
{
     (*s)++;
     if(*s == 60)
     {
            *s = 0;
            (*m)++;
            if(*m == 60)
                {
                    *m = 0;
                    (*h)++;
                    if(*h == 24)
                        {
                            *h = 0;
                        }
                }
    }
}

