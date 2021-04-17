
//7-	Realice un programa que calcule la suma de cuadros de 5 números ingresados 
#include<iostream>

using namespace std;
int main(){
    int acumulador=0;
    int contador=0;
    int var=0;
    while(contador<5){
        cout<<"ingresar nro: ";
        cin>>var;
        acumulador+=var;
        contador++;
    }
    cout<<"La suma de los 5 valores son: "<<acumulador<<endl;
    return 0;
}