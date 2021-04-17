#include<iostream>
#include <unistd.h>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        cout<<"\a";
        //sleep(1000);
        cout<<"\a";
    }
    return 0;
}