#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int a,b,c;
    int max;
    srand(time(NULL));
    a=rand()%(10);
    b=rand()%(10);
    c=rand()%(10);
    max=a;
    max=a>b?(a>c?a:c):(b>c?b:c);
    cout<<a<<"\t"<<b<<"\t"<<c<<"\t";
    cout<<"\t El mayor es: "<<max<<endl;
}