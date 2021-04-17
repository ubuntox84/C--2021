#include<iostream>
using namespace std;
class trabajador{
    int sueldo;
    friend class trabajo;
    public:
    trabajador():sueldo(0){}
    void display(){
        cout<<"Cantidad de dinero tiene: "<<sueldo;
    }
};

class trabajo{
    public:
    void pago(trabajador &obj);
};
void trabajo::pago(trabajador &obj){
    obj.sueldo=930;
}
int main(){
    trabajador p;
    trabajo T;
    T.pago(p);
    p.display();

    return 0;
}