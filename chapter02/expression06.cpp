//
// Created on 2022/10/30.
//
#include <iostream>
using namespace std;

int main(){
    int x =10;
    int y = 20;
    y += x *=40;
    cout<<"x의 값 : "<<x <<endl;
    cout<<"y의 값 : "<<y <<endl;
    return 0;
}