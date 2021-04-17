#include<iostream>
using namespace std;

class caso{
    static int var;
    int id;
    public:
    caso(){
        id=var;
        cout<<id<<"\tSe creo un objeto!!\n";  
        var++;
    }
    ~caso(){ 
        var--; 
        cout<<id<<"\tSe elimino un objeto!!\n";  
    }     
};
int caso::var=1;
int main(){ 
    caso a,b,c,d; 
    return 0;
}