// [Kata] https://www.codewars.com/kata/57126304cdbf63c6770012bd/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Is it a number?

#include <string>
#include <algorithm>
#include <iostream>
#include <sstream>

// First solution.
bool is_digit(const std::string &s) {
    /*Return true if it's a valid single integer or floating number or false if it's not.*/

    std::istringstream iss(s);
    float check;
    iss >> std::noskipws >> check;

    return iss && iss.eof();
}

// Second solution.
bool is_digit2(const std::string &s) {
    /*Return true if it's a valid single integer or floating number or false if it's not.*/

    std::cout << s << std::endl;
    bool have_digit = false;
    for (auto &ch: s) {

        if (isalpha(ch)) {
            return false;
        } else if ((std::isspace(ch) && have_digit) || (have_digit && ch == '-')) {
            return false;
        } else if (isdigit(ch)) {
            have_digit = true;
        }
    }
    return have_digit;
}

int main() {
    /*Tests.*/

    is_digit("35.65");
    is_digit2("35.65");
    return 0;
}