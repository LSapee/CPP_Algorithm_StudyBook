//
// Created on 2022/11/08.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c,sum;
    double avg,num1,num2,num3;

    cout<<"첫 번째 숫자를 입력해주세요 : \n";
    cin>>a;
    cout<<"두 번째 숫자를 입력해주세요 : \n";
    cin>>b;
    cout<<"세 번째 숫자를 입력해주세요 : \n";
    cin>>c;

    sum = a+b+c;
    avg = static_cast<double>(sum)/3;
    num1 = a-avg;
    num2 = b-avg;
    num3 = c-avg;

    cout<<fixed <<setprecision(2);
    cout<<"세 숫자의 합 : " <<sum<<"\n";
    cout<<"평 균 " <<avg <<"\n";
    cout<<"첫 번째 숫자의 분산 : "<<setw(9)<<num1<<"\n";
    cout<<"두 번째 숫자의 분산 : "<<setw(9)<<num2<<"\n";
    cout<<"세 번째 숫자의 분산 : "<<setw(9)<<num3<<"\n";
    return 0;
}