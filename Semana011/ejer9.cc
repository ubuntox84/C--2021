#include<iostream>
using namespace std;
class print{
    public:
    virtual void imprimir(string){

    } 
};
class impresionCorre:public print{
    public:
    void imprimir(string cad){

    }
};
class impresionEtiquetera:public print{
    public:
    void imprimir(string cad){

    }
    void mostrar(){

    }
};
class impresion:public print{
    public:
    void imprimir(string cad){

    }
};
class operacion{
    impresion p;
    void guardar(){
        p.imprimir("documento");
    }
};

int main(){
    int op;
    cout<<"Que desea realizar!!";
    cin>>op;
    print *p;
    
    

    switch (op)
    {
    case 1:
        print *p = new impresionCorre();
        break;
    case 2:
        print *w = new impresionEtiquetera();
        break;
    case 3:
        print *r = new impresion();
        break;
    
    default:
        break;
    }
    return 0;
}