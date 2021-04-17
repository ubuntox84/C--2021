#include <iostream>
#include <time.h>
using namespace std;

#define cantidad 10

struct alumno{
    string name;
    int old;
    string code;
};
void llenar(alumno listita[]){
    srand(time(NULL));
    string nombres[]={"Juan","Manuel","luisa","antonia","melissa","Marlon","Marcos"};
    for(int i=0;i<cantidad;i++){
        listita[i].name=nombres[rand()%6];
        listita[i].old=rand()%75+1;
        listita[i].code=to_string(rand()%1000+1);
    }
}
void mostrar(alumno listita[]){
    for(int i=0;i<cantidad;i++){
        cout<<"Nombre:\t"<<listita[i].name<<endl<<"Edad:\t"<<listita[i].old<<endl<<"Codigo:\t"<<listita[i].code<<endl<<endl;
    }

int main(){
    alumno lista[cantidad];
    llenar(lista);
    mostrar(lista);
    //string name1;
    //int old1;
    //string code1;

    //string name3;
    //int old3;
    //string code3;
}