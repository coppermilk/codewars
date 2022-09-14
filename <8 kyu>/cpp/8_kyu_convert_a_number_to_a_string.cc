// [Kata] https://www.codewars.com/kata/5265326f5fda8eb1160004c8/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Convert a Number to a String!

#include <iostream>
#include <string>

std::string number_to_string(int num) {
    return std::to_string(num);
}

int main(){
    for(int i = -3; i < 3; ++i){
        std::cout << i << " " << number_to_string(i) << std::endl;
    }
    return 0;
}