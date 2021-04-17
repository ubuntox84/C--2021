//
#include <iostream>
#include <time.h>
using namespace std;
//funcion no devuelve valor, paso por valor
void producto(int num1, int num2){
    cout<<"La multiplicacion es "<<(num1*num2)<<endl;
}
int main(){
    int x,y;
    x=10;
    y=5;
    producto(x,y);
}