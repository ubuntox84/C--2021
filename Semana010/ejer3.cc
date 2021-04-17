#include<iostream>
using namespace std;
class metodo{
    private:
    int *num;    
    public:
    metodo(int);
    ~metodo();
    //int factorial();
};
metodo::metodo(int x){
    this->num=new int;
    *num=x;
    cout<<"Se creo el objeto!!"<<endl;
}
metodo::~metodo(){
    delete num;
    cout<<"Se elimino el objeto";
}
int main(){
    metodo m1(5);
    return 0;
}