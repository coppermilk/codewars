// [Kata] https://www.codewars.com/kata/557cd6882bfa3c8a9f0000c1/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Parse nice int from char problem.

#include <string>

int get_age(const std::string& she_said) {
    /*returns the girl's age (0-9) as an integer.*/

    return she_said[0] - '0';
}

int main(){
    /*Tests.*/

    get_age("5 years old");// Equals(5)
}