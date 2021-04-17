
#include<iostream>
using namespace std;
template <class T>
void intercambio(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=9,y=1;
    float a=9.0,b=0.1;
    string n="Jose",m="Maria";
    cout<<x<<"\t"<<y<<endl;
    intercambio(x,y);
    cout<<x<<"\t"<<y<<endl;
    cout<<a<<"\t"<<b<<endl;
    intercambio(a,b);
    cout<<a<<"\t"<<b<<endl;
    cout<<n<<"\t"<<m<<endl;
    intercambio(n,m);
    cout<<n<<"\t"<<m<<endl;
    return 0;
}
