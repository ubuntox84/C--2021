#include <iostream>
#include <time.h>
using namespace std;

void sumar(int x,int y,int *p){
    *p=x+y;
}
int main()
{
    int a,b;
    int varsuma;
    srand(time(NULL));
    a=rand()%100+1;
    b=rand()%100+1;
    cout<<a<<"\t"<<b<<endl;
    sumar(a,b,&varsuma);
    cout<<"La suma es: "<<varsuma;
}