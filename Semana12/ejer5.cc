#include<iostream>
#include<string.h>
using namespace std;
#define text "FIIS UNAS CORAZON"
class cadena{
    char *p;
    public:
    void recibir(char *a){
        p=new char[strlen(a)];
        strcpy(p,a);
    }
    void mostrar(){
        for (size_t i = 0; i < strlen(p); i++) cout<<p[i]<<"  ";        
    }
    ~cadena(){
        delete []p;    }    
};
int main(){
    char *s=new char[strlen(text)];
    strcpy(s,text);
    cadena c;
    c.recibir(s);
    c.mostrar();
    delete[]s;
    return 0;
}