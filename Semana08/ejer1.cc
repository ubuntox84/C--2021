#include <iostream>
using namespace std;
void modificar(int x[]){
    x[0]=100;
}
int main(){
    int *p, a[]={2,5,8,8,11};
    cout<<a<<"\t"<<a<<"\t"<<*(a+1);
    modificar(a);
    cout<<"\n"<<a[0];
}