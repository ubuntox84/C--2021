#include <iostream>
using namespace std;
int main(){
    int x[]={2,5,8,9};
    int *p=&x[0];
    int *r=&x[3];
    cout<<"\t"<<p<<"\t"<<r;
    int res=p-r;
    cout<<endl<<res;
}