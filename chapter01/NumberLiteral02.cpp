#include <iostream>
using namespace std;

int main(){
    int x;
    unsigned long int y;

    x =1456;
    y = -14567;

    cout << x <<endl;
    cout << y <<endl; //오류 출력이 이상함
    cout << 1234 <<endl;
    cout << 143267L <<endl;

    return 0;
}