#include <iostream>

using namespace std;

int main(){
//    1번
    cout<<"*\n";
    cout<<"**\n";
    cout<<"***\n";

//    2번
    cout<<"*\n";
    cout<<"**\n";
    cout<<"***\n";
    cout<<"**\n";
    cout<<"*\n";
//  3번
    cout<<"H\t  H\n";
    cout<<"H\t  H\n";
    cout<<"HHHHHHH\n";
    cout<<"H\t  H\n";
    cout<<"H\t  H\n";
//  4번
    int time,min,sec;
    cout<<"시간을 입력해 주세요 : ";
    cin>>time;
    cout <<"분을 입력해 주세요 : ";
    cin>>min;
    cout <<"초를 입력해 주세요 : ";
    cin>>sec;

    cout << "총 : " <<time *3600 + min * 60 + sec <<"초 입니다.\n";

//  5번
    int a,b,c,d;
    cout<<"첫번째 숫자를 입력해 주세요 : ";
    cin>>a;
    cout<<"두번째 숫자를 입력해 주세요 : ";
    cin>>b;
    cout<<"세번째 숫자를 입력해 주세요 : ";
    cin>>c;
    cout<<"네번째 숫자를 입력해 주세요 : ";
    cin>>d;

    cout <<"전체 합은 : "<< a+b+c+d<<"입니다\n";

//  6번
    int line;
    cout<<"변읠 길이를 입력해주세요.";
    cin>>line;
    cout<<"정사각형의 둘레의 길이는 "<<line*4<<"입니다.\n";
    cout<<"정사각형의 면적은"<<line*line<<"입니다\n";

    return 0;
}