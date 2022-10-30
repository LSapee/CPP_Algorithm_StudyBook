//
// Created on 2022/10/30.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x = 1237234.1235;
    cout<<fixed<<setprecision(2)<<showpos<<setfill('*');
    cout<<setw(15)<<left<<x <<endl;
    cout<<setw(15) << internal << x<<endl;
    cout<<setw(15)<<right<<x;

    return 0;

}

//left의 경우 왼쪽에 붙여 출력하고 빈 공간을 오른쪽으로 보낸다
//internal의 경우 부호는 왼쪽 끝 빈 공간은 비워둔다 -> setfill('a') 빈 공간을 a로 채운다.
//rigted의 경우 오른쪽부터 출력하면 왼쪽의 공간이 빈다.

