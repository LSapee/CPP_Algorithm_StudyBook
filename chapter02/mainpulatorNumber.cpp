//
// Created on 2022/10/30.
//

#include <iostream>
using namespace std;

int main(){
    int x =1237;

    cout <<"x의 10진수 값 : "<<x <<endl;
    cout <<"x의 8진수 값 : "<<oct<<x <<endl;
    cout <<"x의 16진수 값 : "<<hex<<x <<endl;

    cout<<"x의 10진수 값: "<<showbase<<dec <<x <<endl;// 10진수는 변경x
    cout<<"x의 8진수 값: "<<showbase<<oct <<x <<endl;// 8진수의 경우 앞에 0으로 시작
    cout<<"x의 16진수 값: "<<showbase<<hex <<x <<endl;// 16수의 경우 0x로 시작


    return 0;

}
// 진법을 변환해주는 조정자 dec,oct,hex
// showbase는 접두사를 붙이는 조정자