#ifndef PERSONAH
#define PERSONAH
#include<iostream>

using namespace std;
class persona{
    string name;
    public:
    persona(string a):name(a){

    }
    string display(){
        return name;
    }
};
#endif