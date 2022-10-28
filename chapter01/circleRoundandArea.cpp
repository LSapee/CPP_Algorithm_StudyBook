#include <iostream>

using namespace std;

int main(){

    /*
    cout.precision(n); 이것만 단독으로 사용하면 실수를 n 자리만 출력 (자연수자리 + 소수점 자리) n이 3일경우 10을 출력하면 10.0이된다. n이 4가 되면 10.00
    cout <<fixed; 이것을 같이 넣었을 경우 소수의 자릿수를 n으로 함
    사용안하였을 경우 6자리까지만 맞춰서 출력됨
    */
    const double PI = 3.14159;
    double radius;
    double perimeter;
    double area;

    cout <<"원의 반지름 입력 : ";
    cin >> radius;

    perimeter = 2*PI*radius;
    area = PI * PI *radius;

    cout<<"반지름 :  " <<radius << endl;
    cout <<"둘레 : " << perimeter <<endl;
    cout <<"면적 : " << area <<endl;
    return 0;

}