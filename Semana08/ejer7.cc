#include <iostream>

using namespace std;
typedef int xxx;
xxx suma(xxx n, xxx m){
    return n+m;
}
int main(){
    xxx a;
    xxx b;
    a=10;
    b=10;
    cout<<"La suma es: "<<suma(a,b);
    return 0;
}