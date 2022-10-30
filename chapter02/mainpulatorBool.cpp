//
// Created on 2022/10/30.
//

#include <iostream>
using namespace std;

int main(){
    bool x = true;
    bool y =false;

    cout <<"기본적인 x의 출력 : "<<x<<"\n";
    cout <<"기본적인 y의 출력 : "<<y<<"\n";
    cout <<"조정자를 사용한 x의 값 : "<<boolalpha<<x<<endl;
    cout <<"y의 값 : "<<y <<endl;
    return 0;

}

// boolalpha 조정자를 한번 사용하면 이후에도 적용된다?