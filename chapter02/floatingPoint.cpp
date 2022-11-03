//
// Created on 2022/11/04.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double number;
    int intPart;
    double fractPart;

    cout<<"부동 소수점 입력 : ";
    cin>>number;

    intPart = static_cast<int>(number);
    fractPart = number - intPart;

    cout<<fixed << showpoint <<setprecision(2);
    cout<< "원래 값 : "<< number <<"\n";
    cout<< "정수 부분 : "<<intPart <<"\n";
    cout<< "소수 부분 : "<<fractPart <<"\n";

    return 0;
}