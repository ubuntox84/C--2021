#include<iostream>
using namespace std;
class Departamento{
    public:
    virtual void cocina(void)=0;
    virtual void sala(void)=0;
    virtual void baño(void)=0;
    virtual void cochera(void)=0;
};
class Dueño:public Departamento{
    public: 
    void cocina(void)override{
    }
    void sala(void)override{
    }
    void baño(void)override{        
    }
    void cochera(void)override{
    }
};
int main(){
    //Departamento x;
    Dueño d=new Dueño;
    return 0;
}