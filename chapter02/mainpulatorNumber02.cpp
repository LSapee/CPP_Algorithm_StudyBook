//
// Created on 2022/10/30.
//

#include <iostream>
using namespace std;

int main(){
    double x = 1237;
    double y = 12376755.5623;
    double a = 13123.1231421;
    double z = 12344122.12345;
    cout<<"x의 고정 수소점 형식 : "<<x <<endl;
    cout<<"x의 고정 소수점 형식 : "<<showpoint<<x <<endl;
    cout <<"y의 과학 표기법 형식 : "<<y <<scientific<<endl;
    cout<<a;
    return 0;

}


//고정 소수점 형식 showpoint를 사용하면 소수점 자리가 0이여도 소수점 자리를 출력함
//과학표기법 형식 부호 /정수 부분이 한자리로 고정 /e또는 E/ 지수 부호/ 지수