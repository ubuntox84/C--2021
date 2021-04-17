#include <iostream>
using namespace std;
int main(){
    int x=10;
    int *p;
    p=&x;
    cout<<x<<" La direccion de memoria es: "<<&x<<endl;
    cout<<" El valor de p "<<p<<" la direccion de memoria es "<<&p;
    return 0;
}