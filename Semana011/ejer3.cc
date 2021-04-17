#include<iostream>
using namespace std;

int funcion(){
    static int var=0;
    var++;
    return var;
}
int main(){
    funcion();
    funcion();
    cout<<funcion();    
}