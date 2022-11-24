//
// Created on 2022/11/24.
//
#include <iostream>
using namespace std;

int main(){
    int score;
    cout<<"0~100점 사이의 점수를 입력하세요 :";
    cin >> score;
    if(score >= 70){
        cout<<"pass입니다."<<"\n";
    }else{
        cout <<"fail입니다."<<"\n";
    }

    return 0;
}