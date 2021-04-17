#include <iostream>
#include <math.h>
using namespace std;
float func_darvalor(){
    float resp;
    cout<<"Ingrese un valor:";
    cin>>resp;
    return resp;
}
int main(){
    int op;
    float a,b;
    bool centinela=true;
    while(centinela){
        cout<<"\n\nBienvenido Menu: \n1:Multiplicar \n2: Dividir \n3: Sumar\n4:Restar\n0:salir\n";
        cout<<"Que desea realizar:\t";
        cin>>op;
        switch (op)
        {
        case 1:
            a=func_darvalor();
            b=func_darvalor();
            cout<<"El producto es: "<<(a*b);
            break;
        case 2:
            a=func_darvalor();
            b=func_darvalor();
            cout<<"El dividir es: "<<(a/b);
            break;
        case 3:
            a=func_darvalor();
            b=func_darvalor();
            cout<<"El sumar es: "<<(a+b);
            break;
        case 4:
            a=func_darvalor();
            b=func_darvalor();
            cout<<"El restar es: "<<(a-b);
            break;
        case 0:
            centinela=false;
            break;
        default:
            cout<<"Vuelva intentarlo!!";
            break;
        }
    }
    cout<<"\nHasta pronto!!";
}