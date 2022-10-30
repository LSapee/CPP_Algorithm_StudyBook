//
// Created on 2022/10/30.
//

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    int x ;
    double y;

    x =23.67;
    y =130;

    cout<<"x = 23.67의 자료형 : "<<typeid(x).name()<<endl;
    cout<<"할당 후 x의 값 : "<<x <<endl;
    cout<<"y = 130의 자료형 : " <<typeid(y).name()<<endl;
    cout<<"할당 후 y의 값 : "<<y <<endl;
    return 0;
}