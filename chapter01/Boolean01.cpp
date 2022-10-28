#include <iostream>

using namespace std;

int main(){
    bool x =123;
    bool y = -8;
    bool z =0;
    bool t = -0;
    bool u =true;
    bool v =false;

    cout<<"x value : " <<x <<endl; //123은 1로 변환 (true)
    cout<<"y value : " <<y <<endl; // -8은 1로 변환 (true)
    cout<<"z value : " <<z <<endl; // 0은 0으로 변환(false)
    cout<<"t value : " <<t <<endl; // -0은 0으로 변환(false)
    cout<<"u value : " <<u <<endl; // true는 1로 출력
    cout<<"v value : " <<v <<endl; // false는 0으로 출력
// 0이 아닌 값은 양수와 음술르 포함해서 모두 true로 변환된다!
    return 0;
}