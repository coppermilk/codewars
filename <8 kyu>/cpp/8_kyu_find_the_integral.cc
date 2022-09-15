// [Kata] https://www.codewars.com/kata/59811fd8a070625d4c000013/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Find the Integral.

#include <string>

std::string integrate(const int &coefficient, const int &exponent) {
    /*Find the Integral.*/

    return std::to_string(coefficient / (exponent + 1)) + "x^" + std::to_string((exponent + 1));
}

int main() {
    /*Tests.*/

    integrate(12, 5);
}