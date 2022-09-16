// [Kata] https://www.codewars.com/kata/58b8c94b7df3f116eb00005b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Simple Fun #176: Reverse Letter.

#include <algorithm>
#include <string>

std::string reverse_letter(const std::string &str) {
    /*Given a string str, reverse it and omit all non-alphabetic characters.*/

    std::string reverse_letter;
    for (auto it = str.cend(); it >= str.cbegin(); --it) {
        if (std::isalpha(*it)) {
            reverse_letter += *it;
        }
    }
    return reverse_letter;
}

int main() {
    /*Tests.*/

    reverse_letter("krish21an"); //"nahsirk"
}