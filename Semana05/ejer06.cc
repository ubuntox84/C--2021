//imprimir el valor original y el valor cambiado (sumar +10)
#include <iostream>

using namespace std;
int incremento(int x){
    return x+10;
}
int main(){
    int home=15;
    cout<<home<<"\t"<<incremento(home);
    cout<<endl;
    return 0;
}