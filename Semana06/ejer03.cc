#include <iostream>

using namespace std;

enum operacion{
    suma, resta, producto, division
};

float operar(float x,float y,enum operacion op){
    float result; 
    switch(op){
        case suma:
            result=x+y;
        break;
        case resta:
            result=x-y;
        break;
        case producto:
            result=x*y;
        break;
        case division:
            result=x/y;
        break;        
    }
    return result;
}

float ingresar();

int main(){
    float x=ingresar();
    float y=ingresar();
    cout<<"La suma es:"<<operar(x,y,suma);
    cout<<"\nLa resta es:"<<operar(x,y,resta);
    cout<<"\nLa producto es:"<<operar(x,y,producto);
    cout<<"\nLa division es:"<<operar(x,y,division);
}

float ingresar(){
    float num;
    cout<<"Ingresar Nro: ";
    cin>>num;
    return num;
}

void bomba(){

}