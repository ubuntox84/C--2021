#include <iostream>

using namespace std;


void sumar(int a, int b, int &resp){
    resp=a+b;
}

int main(void){
    int a,b,resp=0;
    a=5;
    b=6;
    sumar(a,b,resp);
    cout<<"La suma es: "<<resp;
    return 0;
}