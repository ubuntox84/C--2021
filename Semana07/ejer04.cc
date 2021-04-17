#include <iostream>
#include <time.h>
using namespace std;

int funmayor(int, int, int, int);
void funmayor(int, int, int, int, int &);



int main()
{
    int a, b, c, d;
    int m;    
    srand(time(NULL));
    a=rand()%100+1;
    b=rand()%100+1;
    c=rand()%100+1;
    d=rand()%100+1;
    cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t";
    //m = funmayor(a, b, c, d);
    funmayor(a, b, c, d, m);
    cout << "El mayor es: " << m;
}

int funmayor(int x, int y, int z)
{
    return 0;
}
int funmayor(int x, int y)
{
    return 0;
}
int funmayor(int x)
{
    return 0;
}
int funmayor(int x, int y, int z, int r)
{
    int resp;
    resp = x;
    if (resp < y)
        resp = y;
    if (resp < z)
        resp = z;
    if (resp < r)
        resp = r;
    return resp;
}
void funmayor(int x, int y, int z, int r, int &resp)
{
    resp = x;
    if (resp < y)
        resp = y;
    if (resp < z)
        resp = z;
    if (resp < r)
        resp = r;
}