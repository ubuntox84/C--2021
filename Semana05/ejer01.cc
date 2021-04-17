#include <iostream>

using namespace std;
int main()
{
    char caracter, op;
    do
    {
        cout << "Ingrese el sexo 'F' o 'M'";
        cin >> caracter;
        string cad = toupper(caracter) == 'F' ? "Femenino" : "Masculino";
        cout << cad << endl;
        cout << "Desea continuar!! 'S' o 'N'";
        cin >> op;
    } while (op == 'S' ? true : false);
}