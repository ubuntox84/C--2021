#include <iostream>
using namespace std;
int main(){
    long int A;
    cout<<"Cantidad de elementos: "<<(sizeof A)<<endl;
    float B;
    cout<<"Cantidad de elementos: "<<(sizeof B)<<endl;
    int x[]={2,5,8,9,3,8,7};
    cout<<"Cantidad de elementos: "<<(sizeof x/4)<<endl;
    for(int i=0;i<(sizeof x/4);i++){
        cout<<x[i]<<endl;
    }
    bool linterna[10];
    cout<<"Cantidad de elementos: "<<(sizeof linterna)<<endl;
    for(int i=0;i<(sizeof linterna);i++){
        cout<<linterna[i]<<endl;
    }
}