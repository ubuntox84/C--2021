#include <iostream>
using namespace std;

class padre{
    public:
    padre(){}
    void Erestu(padre &c){
        if(&c==this) cout<<"Si, soy yo"<<endl;
        else cout<<"No, soy yo"<<endl;
    }
};
int main(){
    padre p1,p2;
    p1.Erestu(p2);
    p1.Erestu(p1);
    return 0;
}