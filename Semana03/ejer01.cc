
/*
    semana03: uso de referencias con punteros
*/
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p;  // es un puntero
    cout<<"La direccion de x es: "<<&x<<endl;
    p=&x;
    cout<<"La direccion de p es: "<<p<<endl;
    *p=20;
    cout<<"La valor de x es: "<<x<<endl;
    return 0;
}