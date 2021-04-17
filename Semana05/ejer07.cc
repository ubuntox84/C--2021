// crear un aplicativo que cuente la cantidad de numeros ingresados para realizar la suma; paso por referencia

#include <iostream>

using namespace std;
void sumatoria(int &c, int s)
{
    int suma = 0, num;
    char op;
    cout << "ingrese un num";
    do
    {
        cin >> num;
        suma += num;
        c++;
    } while (num != 0 ? true : false);
    cout << "La suma es: " << suma << endl;
}
int main()
{
    int cantida = 0;
    int suma = 0;
    sumatoria(cantida, suma);
    cout << "La cantidad de elementos ingresados son: " << cantida << endl;
    return 0;
}