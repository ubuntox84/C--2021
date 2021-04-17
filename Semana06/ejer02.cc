#include <iostream>
#include <time.h>
using namespace std;

#define cantidad 10

enum existe{NO,SI};

void llenar(int v[]){
    srand(time(NULL));
    for (size_t i = 0; i < cantidad; i++)
        v[i]=rand()%100+1;     
}

void mostrar(int v[]);

bool consulta(int [],int);

int main(){
    int v[cantidad];
    int num;
    llenar(v);
    mostrar(v);
    cout<<"ingresar el numero a buscar!!";
    cin>>num;
    bool sentinela=consulta(v,num);
    if(sentinela)
        cout<<"El numero si existe!!";
    else
        cout<<"El numero no existe!!";
    return 0;
}

void mostrar(int v[]){
    for (size_t i = 0; i < cantidad; i++)
        cout<<v[i]<<"\t";
    cout<<endl;
}

bool consulta(int v[],int num){
    for (size_t i = 0; i < cantidad; i++){
        if(v[i]==num){
            return SI;
        }
    }
    return NO;
}
