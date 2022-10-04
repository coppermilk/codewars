// [Kata] https://www.codewars.com/kata/5a53a17bfd56cb9c14000003/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Disarium Number (Special Numbers Series #3).

#include <string>
#include <iostream>

using namespace std;

int count_digits_in_number(int number) {
    /*Count digits in number.*/

    int count = 0;
    do {
        count++;
        number /= 10;
    } while (number);
    return count;
}

int pow(int base, int exponent) {
    /*Returns base raised to the power exponent.*/

    int number = 1;
    for (int i = 0; i < exponent; ++i) {
        number *= base;
    }
    return number;
}

string disariumNumber(int number) {
    /*Check if number is disarium.*/

    int expected_disarium = 0;
    int count_digits = count_digits_in_number(number);
    int exponent = 0;
    int number_copy = number;

    while (number_copy) {
        expected_disarium += pow(number_copy % 10, count_digits - exponent);
        number_copy /= 10;
        ++exponent;
    }

    return expected_disarium == number ? "Disarium !!" : "Not !!";
}

int main() {
    std::cout <<
              disariumNumber(89);
}