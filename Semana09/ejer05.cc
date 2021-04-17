// crear un clase padre con 2 atributos y 2 metodos
#include <iostream>
using namespace std;
class persona{
    protected:
    string name;
    string spell;
    public:
    persona(string, string);
    string mostrarNombre();
    string mostrarNombreCompleto();
};
persona::persona(string a="", string b=""){
    name=a;
    spell=b;
}
string persona::mostrarNombre(){
    return "Su nombre es: "+name;
}
string persona::mostrarNombreCompleto(){
    return "Nombre completo: "+spell+" "+name;
}
class estudiante: public persona{
    public:
    estudiante(string a, string b){
        name=a;
        spell=b;
    }
};
int main(){
    estudiante e1("Christian","Garcia");
    cout<<e1.mostrarNombreCompleto()<<endl;
    cout<<e1.mostrarNombre();
    return 0;
}