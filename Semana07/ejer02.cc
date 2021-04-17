#include <iostream>
using namespace std;
int main(){
    int c,*pc1,*pc2;
    c=12;
    pc1=&c;
    pc2=pc1;
    cout<<"Valor c: \t"<<&c<<endl;
    cout<<"Valor pc1: \t"<<pc1<<endl;
    cout<<"Valor pc2: \t"<<pc2<<endl;
    //Cuando colocamos asteriscos, hablamos del contenido de la direccion
    *pc1=18;
    *pc2=20;

    cout<<"Valor c: \t"<<c<<endl;
   
    
    return 0;
}