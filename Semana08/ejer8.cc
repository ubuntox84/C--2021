#include <iostream>

using namespace std;

void modificar(string *c){
    *c="Ciudad de TINGO MARIA";
}

void modificarlema(string &c){
    c="Ciudad de la BELLA DURMIENTE";
}

int main(void){
    string cad="UNAS - FIIS";
    cout<<cad<<endl;
    modificar(&cad);
    cout<<cad<<endl;
    modificarlema(cad);
    cout<<cad<<endl;
    return 0;
}