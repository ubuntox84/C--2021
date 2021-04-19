#include<iostream>
using namespace std;

class persona{
    int name;
    public:
    persona(int n):name(n){
    }
    int getname(){
        return this->name;
    }
};

int main(){
    persona obj1(15);
    persona *obj2;
    cout<<obj1.getname();
    
    return 0;
}