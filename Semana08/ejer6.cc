#include <iostream>
#include <time.h>
using namespace std;

struct nodo
{
    int dato;
    nodo *sgte;
};

typedef struct nodo *Tlista;

void menu()
{
    cout << "\n\tLISTA ENLAZADA SIMPLE\n\n";
    cout << "1. agregar" << endl;
    cout << "2. mostrar" << endl;
    cout << "3. buscar" << endl;
    cout << "0. salir" << endl;
    cout << "\n Ingresar opcion";
}
void insertar(Tlista &lista, int valor)
{
    Tlista newnodo = new (struct nodo);
    newnodo->dato = valor;
    newnodo->sgte = lista;
    lista = newnodo;
}
void buscar(Tlista lista, int valor)
{
    bool bandera=false;
    while(lista!=NULL){
        if(lista->dato==valor){
            bandera=true;
            break;
        }        
        lista=lista->sgte;
    }
    if(bandera){
        cout<<endl<<"El valor se encuentra en la lista";
    }else{
        cout<<endl<<"El valor NO encontrado!!";
    }
}
void mostrar(Tlista lista)
{
    while(lista!=NULL){
        cout<<lista->dato<<endl;
        lista=lista->sgte;
    }
}

int main()
{
    Tlista lista = NULL;
    int op, dato;
    bool bandera = true;
    srand(time(NULL));
    while (bandera)
    {
        menu();
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Ingrese un valor: ";
            cin >> dato;
            insertar(lista, dato);
            break;
        case 2:
            mostrar(lista);
            break;
        case 3:
            cout << "Ingrese un valor a buscar: ";
            cin >> dato;
            buscar(lista,dato);
            break;
        case 0:
            bandera = false;
            break;
        default:
            cout << "Caracter desconocido!!";
        }
    }
    cout << endl
         << "Hasta pronto!!";
    return 0;
}