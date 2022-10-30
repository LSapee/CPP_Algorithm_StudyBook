//
// Created on 2022/10/30.
//
#include <iostream>
#include <limits>
using namespace std;

int main(){
    unsigned int num1 = numeric_limits<unsigned int>::max();
    unsigned int num2 = numeric_limits<unsigned int>::min();

    cout<<"부호 없는 정수의 최대값 : " <<num1 <<endl;
    cout<<"부호 없는 정수의 최th값 : " <<num2 <<endl;

    num1 +=1;
    num2 -=1;

    cout<<"오버플로우가 일어난 num1 +1의 값 : "<<num1<<endl;
    cout<<"언더플로우가 일어난 num2 -1의 값 : "<<num2<<endl;


    return 0;
}