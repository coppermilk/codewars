// [Kata] https://www.codewars.com/kata/55b051fac50a3292a9000025/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Filter the number

#include <string>
#include <iostream>

long long filter_string(const std::string &value) {
    /*Return a number from a string.*/

    long long filter_string = 0;
    for (auto ch: value) {
        if ('0' <= ch && ch <= '9') {
            filter_string *= 10;
            filter_string += ch - '0';
        }
    }
    return filter_string;
}

int main() {
    /*Tests.*/

    std::cout << filter_string("aa***k-*{}1bb2cc3dd");
}