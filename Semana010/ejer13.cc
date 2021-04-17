#include<iostream>
using namespace std;
template <class T>
class puntosXY
{   T x;
    T y;
public:
    puntosXY(T, T);
    void setx(T);
    void sety(T);
    T getx();
    T gety();
    void display();
};
template <class T>
puntosXY<T>::puntosXY(T a, T b)
{    this->x = a;
    this->y = b;
}
template <class T>
void puntosXY<T>::setx(T a)
{    this->x=a;
}
template <class T>
void puntosXY<T>::sety(T b)
{    this->y=b;
}
template <class T>
T puntosXY<T>::getx(){
    return this->x;    
}
template <class T>
T puntosXY<T>::gety(){
    return this->y;
}
template <class T>
void puntosXY<T>::display(){
    cout<<"Valor:\t"<<this->getx()<<"\tValor:\t"<<this->gety();
}
int main(){
    puntosXY <string>aa("Maria", "Victoria");
    puntosXY <int>bb(12, 15);
    puntosXY <char>cc('a', 'b');
    aa.display();
    cout<<endl;
    bb.display();
    cout<<endl;
    cc.display();}