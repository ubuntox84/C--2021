#include<iostream>
using namespace std;
class etiqueta{
    public:
    void saludo(){
        cout<<"Hola";
    }
    virtual void despedida(){
        cout<<"Hasta luego";
    }  
    virtual void forma()=0;
};
class alumno:public etiqueta{
    void forma(){
        cout<<"Levantar la mano!!";
    }
};
int main(){
    alumno a1;    
    return 0;
}