#include <iostream>
using namespace std;
int main(){
    int x[]={2,5,7,9};
    int *p=x;
    cout<<*p<<"  ";
    p++;//p=p+1
    cout<<*p;
    p++;//p=p+1
    cout<<*p;
    p++;//p=p+1
    cout<<*p;
    
}