//paso por defecto = predeterminado

#include <iostream>
using namespace std;

int suma(int x=8, int y=4){
    return x+y;
}

int main(){
    cout<<suma()<<endl;
    cout<<suma(2)<<endl;
    cout<<suma(2,7);
}