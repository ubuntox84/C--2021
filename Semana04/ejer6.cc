#include <iostream>

using namespace std;
int main()
{
    bool centinela = true;
    char op;
    while (centinela)
    {
        cout << "Ingresar un caracter ";
        cin >> op;
        switch (op)
        {
        case 'a':
            cout << "A\n\n";
            
        case 'e':
            cout << "E\n\n";
            
        case 'i':
            cout << "I\n\n";
        case 'o':
            cout << "O\n\n";
            break;
        case 'u':
            cout << "U\n\n";
            break;
        default:
            centinela = false;
            break;
        }
    }
    return 0;
}