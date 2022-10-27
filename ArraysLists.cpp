//
// Created by 이재관 on 2022/10/27.
//

#include <iostream>
#include <array>

using namespace std;

void print(array<int,5> arr){
    for(auto ele : arr)
        cout<<ele<<" ";
}

int main(){
    array<int, 10> arr1;

    arr1[0] = 1;
//  <<은 자바에서 + 같은 느낌 인 것 같다.
//  cout는 printf 느낌
    cout<<"arr1 배열의 첫 번째 원소 : " << arr1[0] <<"\n";

    array<int, 4> arr2 = {1,2,3,4};
    cout<<"arr2 배열의 모든 원소\n";
    for(int i=0; i<arr2.size(); ++i){
        cout<< arr2[i] << " ";
    }
    cout<<"\n";

    array<int, 4> arr3 = {1,2,3,4};

    try{
        cout<<arr3.at(3)<<"\n";
        cout<<arr3.at(4)<<"\n"; //error 발생  0=1, 1=2, 2=3, 3=4, 4는 배열에 없음
    }
    catch (const out_of_range& ex){
        cerr<< ex.what() <<"\n"; // 에러 출력
    }

    array<int, 5 > arr = {1,2,3,4,5};
    print(arr);

    return 0;
}