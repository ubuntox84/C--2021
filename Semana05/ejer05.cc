#include <iostream>

using namespace std;
//funcion que no devuelve valor, paso por referencia
void operacion(int num1, int num2){
    num1=5;
    num2=10;
}

int main(){
    int x=100;
    int y=2;
    operacion(x,y);
    cout<<x<<"\t"<<y<<endl;
    return 0;
}