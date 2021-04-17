#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;
// 1    1   2   3   5   8   13  21 ...
int main(){
    float n, a,b,c;
    float sum=0.0;
    float sub;
    cout<<"ingresar N : ";
    cin>>n;
    a=1.0;
    b=1.0;
    for (size_t i = 0; i < n; i++)
    {
       /* sum+=a;
        a=b;
        b=a+b;*/
        cout<<a<<"\t";
        sub=pow(a,(2.0/a));
        cout<<"  "<<sub<<"\t";
        sum+=sub;
        c=a+b;
        a=b;
        b=c;
    } 
    cout<<"\tLa suma es: "<<sum<<endl;   
    return 0;
}