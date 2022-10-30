//
// Created on 2022/10/30.
//
#include <iostream>
#include <limits>
using namespace std;

int main(){
     double num1 = +numeric_limits<double>::max();
     double num2 = -numeric_limits<double>::max();

    cout<<"부호 없는 정수의 최대값 : " <<num1 <<endl;
    cout<<"부호 없는 정수의 최th값 : " <<num2 <<endl;

    num1 *=1000.00;
    num2 *=1000.00;

    cout<<"오버플로우가 일어난 num1 +1의 값 : "<<num1<<endl;
    cout<<"언더플로우가 일어난 num2 -1의 값 : "<<num2<<endl;
    

    return 0;
}