#include<iostream>
using namespace std;
class alumno{
    float n1,n2;
    float prom; 
    friend void promedio(alumno);   
    public:    
    alumno():n1(0.0),n2(0.0),prom(0.0){}
    alumno(float x, float y){
        this->n1=x;
        this->n2=y;
    }
};

void promedio(alumno obj){
    float promedio=(obj.n1+obj.n2)/2;
    cout<<"Calificacion 01:"<<obj.n1<<"\nCalificacion 02:"<<obj.n2<<"\nPromedio:"<<promedio;
}
int main(){
    alumno a(10,15);
    promedio(a);
    return 0;
}