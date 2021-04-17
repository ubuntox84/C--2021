#include<iostream>
using namespace std;
class persona{
    public:    
    int dato;
    static int can;
    persona(){
        can++;
        dato=0;    }
    static int getcan(){
        return can;
    }
    int getdato(){
        return this->dato;    }
    void cambiocan(int x){
        this->can=x;    }
    void cambiodato(int x){
        this->can=x;    }};
int persona::can=15;
int main(){
    persona p;  
    p.dato;
    p.getcan();
    cout<<persona::can;
    // persona a,b,c,d;
    // d.cambiocan(10);
    // d.cambiodato(10);
    // cout<<"C"<<c.getcan()<<endl;
    // cout<<"C"<<c.getdato()<<endl;   
    }