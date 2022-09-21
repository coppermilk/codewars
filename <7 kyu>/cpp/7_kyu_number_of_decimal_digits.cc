// [Kata] https://www.codewars.com/kata/58fa273ca6d84c158e000052/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Number of Decimal Digits.

#include <cstdint>
#include <iostream>

int digits(uint64_t n) {
    /*Return count digits.*/
    int digits = 0;
    do {
        n /= 10;
        ++digits;
    } while (n);
    return digits;
}

int main() {
    /*Tests.*/

    std::cout << digits(9876543210ull); //  Equals(10)
}