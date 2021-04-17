#include<iostream>
using namespace std;
class persona{
    string name;
    string spell;
    public:

    void oper(){

    }
};
class alumno:public persona{
    string code;
    public:
    //string cursos[9];
};
class curso{

};
class matriculas{
    alumno a;
    curso a[9];
};
int main(){
    return 0;
}