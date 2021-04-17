//Escribir un programa para calcular:  1expo2+2expo2+3expo2+4expo2…+nexpo2

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int acumulador=0;
    int contador=1;
    int cantidad=0;
    cout<<"Ingrese numero de elementos";
    cin>>cantidad;
    while(10){
        acumulador+=pow(contador,2);
        if(contador==cantidad){
            break;
        }
        contador++;
    }
    cout<<"mostrara la sumatoria es: "<<acumulador;
    return 100;
} 