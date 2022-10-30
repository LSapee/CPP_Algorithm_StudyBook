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

    cout <<"전체 합은 : "<< a+b+c+d<<"입니다.\n";

//  6번
    int line;
    cout<<"변의 길이를 입력해주세요 :";
    cin>>line;
    cout<<"정사각형의 둘레의 길이는 "<<line*4<<"입니다.\n";
    cout<<"정사각형의 면적은"<<line*line<<"입니다\n";
//  7번

    string name,lastname;
    cout<<"이름을 입력해주세요 : ";
    cin >> name;
    cout <<"성을 입력해주세요 : ";
    cin >> lastname;

    cout<<"서양식 이름 표현 : "<< name <<" " <<lastname <<"\n";

//  8번

    int q1,q2;
    cout<<"숫자를 입력해주세요 : ";
    cin >> q1;
    cout<<"숫자를 입력해주세요 :";
    cin >> q2;

    cout<<"두 수의 합은 "<<q1+q2<<"입니다.\n";

//  9번
    double n1,n2;
    cout<<"소비세는 전체 금액의 9%입니다\n";
    cout<<"판매금액을 입력해주세요 : ";
    cin >> n1;
    n2 = n1/100*9;
    cout <<"소비세는 "<< n2<<"원입니다.\n";
    cout <<"전체 금액 : "<<n1+n2<<"원입니다.\n";

//  10번
    string sido,gu,doro,doronum,unum;
    cout<<"시/도 이름을 입력해주세요 : ";
    cin >> sido;
    cout<<"구 이름을 입력해주세요 : ";
    cin >> gu;
    cout<<"도로명을 입력해주세요 : ";
    cin >> doro;
    cout<<"도로번호를 입력해주세요 : ";
    cin >> doronum;
    cout<<"우편번호를 입력해주세요 : ";
    cin >> unum;

    cout<<sido<<" " << gu<<" " <<doro<<" " <<doronum<<" " << unum;


    return 0;
}