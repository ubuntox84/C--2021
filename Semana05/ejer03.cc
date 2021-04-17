#include <iostream>
#include <time.h>
using namespace std;

void llenar(int v[])
{
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        v[i] = rand() % (10);
    }
}
void mostrar(int v[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}
int mayor(int v[])
{
    int max = v[0];
    for (int i = 0; i < 3; i++)
    {
        if (max <= v[i])
            max = v[i];
    }
    return max;
}
int main()
{
    int vect[3];

    llenar(vect);

    mostrar(vect);

    cout <<"Mayor valor: "<< mayor(vect);
}