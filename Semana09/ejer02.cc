
#include <iostream>
using namespace std;
class suma{
    int x,y;
    public:
    suma(int a, int b){
        x=a;
        y=b;
    }
    suma(int a){
        x=a;
        y=0;
    }
    suma(){
        x=0;
        y=0;
    }
    int sumatoria(int r=0){
        return x+y+r;
    }
    int resta(){
        return x-y;
    }
    int producto(){
        return x*y;
    }
};
int main(){
    suma *p1=new suma(5,3);
    suma *p2=new suma(5);
    suma *p3=new suma();
    cout<<p1->sumatoria(8);
    return 0;
}