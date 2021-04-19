#include<iostream>
class persona{

};
class alumno:public persona{

};
class matricula{
    alumno listaalumno[5];
    int con=0;
    public:
    void crear(){
        alumno newalumno;
        listaalumno[con]=newalumno;
    }
};
using namespace std;
int main(){
    matricula m;
    m.crear();
    cout<<"hola mundo!!";
    return 0;
}