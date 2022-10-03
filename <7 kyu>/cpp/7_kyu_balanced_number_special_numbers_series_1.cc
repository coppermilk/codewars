// [Kata] https://www.codewars.com/kata/5a4e3782880385ba68000018/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Balanced Number (Special Numbers Series #1 ).


#include <string>
#include <iostream>

using namespace std;

unsigned long long pow(unsigned long long base, unsigned long long exponent) {
    /*Returns base raised to the power exponent:*/
    unsigned long long number = 1;
    for (unsigned long long i = 0; i < exponent; ++i) {
        number *= base;
    }
    return number;
}

unsigned long long count_digits(unsigned long long number) {
    /*Count digits in numbers*/
    unsigned long long count = 0;
    do {
        ++count;
        number /= 10;
    } while (number);
    return count;
}

unsigned long long sum_digits_in_num(unsigned long long number) {
    /*Return sum of digits in number*/
    unsigned long long sum = 0;
    while (number) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

string balancedNum(unsigned long long int number) {
    /*Check if number is balanced.*/
    unsigned long long middle = count_digits(number);
    unsigned long long left;
    unsigned long long right;
    unsigned long long decades;

    decades = pow(10, ((middle / 2)));
    left = number / (decades * 10);
    if (middle % 2) {
        right = number % decades;
    } else {
        right = number % (decades / 10);
    }
    return sum_digits_in_num(left) == sum_digits_in_num(right) ? "Balanced" : "Not Balanced";
}

int main() {
    /*Tests.*/
    std::cout << balancedNum(12);
}