#include<iostream>
#include <time.h>
using namespace std;


int main(){
    time_t current_time;
    current_time=time(NULL);
    string cad=ctime(&current_time);
    cout<<cad;
    return 0;
}