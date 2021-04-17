#include <iostream>
using namespace std;

class persona{
    //private:
    string name;
    int age;
    
    public:
    persona();
    persona(string a,int b);
    string getname(){
        return name;
    }
    void setname(string newcad){
        name=newcad;
    }
    void setage(int newold){
        age=newold;
    }
    int getage(){
        return age;
    }
};
persona :: persona(){
        name="";
        age=0;
    }
persona :: persona(string a, int b){
        name=a;
        age=b;
    }
int main(){
    persona p1("Jose",21),p2("Manuel",32);
    //p1.setname("Jose");
    //p1.setage(21);
    //p2.setage(32);
    //p2.setname("Manuel");

    cout<<" NOMBRE: "<<p1.getname()<<" EDAD: "<<p1.getage()<<endl;
    cout<<" NOMBRE: "<<p2.getname()<<" EDAD: "<<p2.getage();
    return 0;
}