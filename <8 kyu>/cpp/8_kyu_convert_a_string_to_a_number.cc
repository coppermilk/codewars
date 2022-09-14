// [Kata] https://www.codewars.com/kata/544675c6f971f7399a000e79/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Convert a String to a Number!

#include <string>

// First solution.
int string_to_number(const std::string& s) {
    /*Convert a string to int.*/

    return atoi(s.c_str());
}

// Second solution.
int string_to_number2(const std::string& s) {
    /*Convert a string to int.*/

    return std::stoi(s);
}

int main(){
    /*Tests.*/

    string_to_number("-9");
    return 0;
}