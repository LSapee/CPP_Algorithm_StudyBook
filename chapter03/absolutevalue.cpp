//
// Created on 2022/11/23.
//
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"점수를 입력해주세요.";
    cin >> number;

    if(number<0){
        number = -number;
    }
    //절대값 출력
    cout<<"입력한 숫자의 절대값 :"<<number;
    return 0;
}