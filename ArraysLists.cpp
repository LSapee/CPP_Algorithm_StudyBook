//
// Created by 이재관 on 2022/10/27.
//

#include <iostream>
#include <array>

using namespace std;

int main(){
    std::array<int, 10> arr1;

    arr1[0] = 1;
    std::cout<<"arr1 배열의 첫 번째 원소 : " << arr1[0] <<"\n";
    return 0;
}