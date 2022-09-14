// [Kata] https://www.codewars.com/kata/5966e33c4e686b508700002d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Sum The Strings

#include <string>

std::string sum_str(const std::string& a, const std::string &b) {
    /*Takes 2 integers in form of a string as an input, and outputs the sum.*/

    return std::to_string(strtol(a.c_str(), nullptr, 10) + strtol(b.c_str(), nullptr, 10));
}


int main(){
    /*Tests.*/

    sum_str("4", "5");
}