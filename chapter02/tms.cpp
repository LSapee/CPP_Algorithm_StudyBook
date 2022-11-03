//
// Created on 2022/11/04.
//

#include <iostream>
using namespace std;
//초를 시 분 초로 표현
int main(){

    unsigned long duration ,hours ,minutes , seconds;

    cout<<"초 단위 시간을 양의 정수로 입력 : ";
    cin>>duration;

    hours = duration/3600L;
    minutes = (duration-(hours*3600L))/60L;
    seconds = duration-(hours*3600L)-(minutes*60);

    cout<<"입력된 초 단위 시간 :" <<duration <<"\n";
    cout<<"결과 : ";
    cout<< hours <<"시 ";
    cout<< minutes <<"분 ";
    cout<< seconds <<"초";

    return 0;
}