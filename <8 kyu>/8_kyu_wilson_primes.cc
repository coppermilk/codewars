// [Kata] https://www.codewars.com/kata/55dc4520094bbaf50e0000cb/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Wilson primes.

#include <iostream>

bool amIWilson(unsigned n){
    /*Check if a number is a Wilson prime.*/

    switch (n) {
        case 5:
        case 13:
        case 563:
            // If others exist, they must be greater than 2 * 10^13.
            return true;
        default:
            return false;
    }
}

int main() {
    /*Tests.*/

    for (int i = 1; i < 564; ++i){
        std::cout<< i << " " << amIWilson(i) << std::endl;
    }
    return 0;
}