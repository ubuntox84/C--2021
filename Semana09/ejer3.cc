#include <iostream>

using namespace std;

class triangulo{
    float lado;
    public:
    triangulo(float);
    triangulo(float,float);
    float area();
    float area(float);
    float area(float, float);
    float perimetro();
};
triangulo::triangulo(float x){
    lado=x;
}
triangulo::triangulo(float x, float y){
    lado=x;
}
float triangulo::area(){
    return 0.0;
}
float triangulo::area(float x){
    return 0.0;
}
float triangulo::area(float x, float y){
    return 0.0;
}
float triangulo::perimetro(){
    return 0.0;
}
int main(){
    triangulo T1(10.0);
    cout<<T1.area()<<endl;
    cout<<T1.perimetro();    
    return 0;
}