#include<iostream>
#include <unistd.h>
using namespace std;
int main(){
    int a=0,b=0;
    cout<<"Ingresar A: \n"<<endl;
    cin>>a;
    cout<<"Ingresar A: \n"<<endl;
    cin>>b;
    int sum=a+b;
    cout<<"La suma de "<<a<<" mas "<<b<<" es igual "<<(a+b)<<endl;
    sleep(1000);
    return 0;
} 