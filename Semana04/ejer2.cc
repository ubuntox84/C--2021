//mostrar 10 numeros pares y que no se repitan
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int vect[10];

void mostrar(){
    for(int i=0;i<10;i++){
        cout<<vect[i]<<"   ";
    }
}

bool buscar(int x){
    for(int i=0;i<10;i++){
        if(x==vect[i]){
            return true;
        }        
    }
    return false;
}

int main(){
    srand(time(NULL));
    int contador=0;
    int numero=0;
    while(contador<10)
    {
        numero=rand()%(50-1);
        bool bandera=buscar(numero);
        if(!bandera){
            if(numero%2==0){
            //cout<<numero<<"    ";
            vect[contador]=numero;
            contador++;
            }
        }        
    } 
    mostrar();
    cout<<endl;
    system("pause");
    return 0;
}