#include<iostream>
using namespace std;
class Metodo{
    int x;
    friend class Calcular;
    public:

    Metodo(){
        this->x=1;
    }
    Metodo(int num){
        this->x=num;
    }
    int factorial(){
        //4!= 4*3*2*1
        int resp=1;
        //cout<<"estoy factorial";
        for(int i=1;i<=this->x;i++){
            //cout<<"estoy for";
            resp*=i;
        }
        return resp;
    }
};
class Calcular{
    Metodo m1;    
    public:
    void resultados(int id){
        m1.x=id;
        cout<<"El factorial es: "<<m1.factorial();
    }
};
int main(){
    Calcular c1;
    c1.resultados(3);
    return 0;
}