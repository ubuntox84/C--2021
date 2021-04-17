//ENUN

#include <iostream>
using namespace std;
enum meses
{
    enero ,
    febrero,
    marzo ,
    diciembre
};
enum dias
{
    lunes = 2,
    martes,
    miercoles,
    jueves,
    viernes,
    Sabado,
    Domingo = 1
};
int main()
{
    int op;
    cout << "Ingresar numero de mes ";
    cin >> op;
    switch (op)
    {
    case enero:
        cout << "enero";
        break;
    case febrero:
        cout << "febrero";
        break;
    case marzo:
        cout << "marzo";
        break;
    case diciembre:
        cout << "Diciembre";
        break;
    }
}