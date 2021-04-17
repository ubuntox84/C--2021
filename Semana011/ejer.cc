#include<iostream>

using namespace std;

class impresion{
    public:
    virtual void imprimir()=0;
};
class printA4:public impresion{
    void imprimir()=0;
};
class printA3:public impresion{
    void imprimir()=0;
};
class papelA4:public printA4{
    public:
    void A4(){

    }
};

int main(){
    papelA4 p;
    p.A4();
    return 0;
}