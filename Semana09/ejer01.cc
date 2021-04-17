
#include <iostream>
using namespace std;
#define cantidad 100
class Soldado_terran
{
    string armadura;
    string rifles;
    int vida;

public:    
    void getarmadura(string cad){
        armadura=cad;
    }
    void getvida(int x){
        vida=x;
    }
    void getrifle(string cad){
        rifles=cad;
    }
    bool distarar()
    {
        return 0;
    }
    bool correr()
    {
        return 0;
    }
    string mostrar(){
        return armadura+"\t"+rifles+"\t"+to_string(vida);
    }


};
int main()
{

    Soldado_terran *n1 = new Soldado_terran;
    n1->getarmadura("Hierro");
    n1->getvida(100);
    n1->getrifle("C14");

    cout<<n1->mostrar();
    return 0;
}