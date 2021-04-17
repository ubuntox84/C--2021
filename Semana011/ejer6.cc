#include<iostream>
#include <time.h>
using namespace std;

class persona{
    string name;
    string spell;
    public:
    persona(string a, string b){
        this->name=a;
        this->spell=b;
    }
    string nombre(){
        return this->name+" "+this->spell;
    }
};
class profesor:public persona{
    string codigo;
    static int cod;
    public:
    profesor(string a, string b):persona(a,b){
        this->codigo="Prof "+to_string(cod);
        cod++;
    }
    string codigoprofesor(){
        return this->codigo;
    }
    int getcod(){
        return cod-1;
    }
};
int profesor::cod=1;

class profesorinterino:public profesor{
    string incorporo;
    public:
    profesorinterino(string i,string a,string b):profesor(a,b){
        incorporo=i;
    }
    string fecha(){
        return incorporo;
    }
    void display(){
        cout<<"Profesor de nombre: "<<this->nombre()<<" con Id de profesor : "<<this->codigoprofesor()<<endl;
        cout<<"El profesor interino "<<this->getcod()<<" Se incorporo en la fecha "<<this->fecha()<<endl;
    }
};
int main(){
    time_t current_time;
    current_time=time(NULL);
    string fecha=ctime(&current_time);
    profesorinterino p(fecha, "Christian","Garcia");
    p.display();
    fecha=ctime(&current_time);
    profesorinterino p1(fecha, "Jose","Vasquez");
    p1.display();
    return 0;
}