#include <iostream>
using namespace std;

string funsexo(char);

int main(){
    char c;
    cout<<"ingrese Sexo!! F o M"<<endl;
    cin>>c;
    string cad=funsexo(c);
    cout<<"Es de sexo "<<cad;
}
string funsexo(char op){
    string cad;
    if(op=='M' or op=='m'){
        cad="Masculino";
    }else if(op=='F' or op=='f'){
        cad="Femenino";
    }else{
        cad="Caracter!! descnocido";
    }
    return cad;
}