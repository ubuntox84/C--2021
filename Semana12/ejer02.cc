#include<iostream>
#define cant 10
using namespace std;
class persona{};
class alumno:public persona{

};
class matricula{
    alumno *listaalumno=NULL;
    int con=0;
    public:
    matricula(alumno &listaa[]){
        listaalumno=listaa;
    }
    void crear(){
        alumno newalumno;
        listaalumno[con]=newalumno;
    }
};
int main(){
    alumno lista[cant];
    matricula m(lista);
    m.crear();   
    cout<<"hola mundo!!";
    return 0;
}