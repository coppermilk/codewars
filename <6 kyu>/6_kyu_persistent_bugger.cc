// [Kata] https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Persistent Bugger.


#include <iostream>

int persistence(long long n) {
    /* Takes in a positive parameter num and returns its
     * multiplicative persistence, which is the number of
     * times you must multiply the digits in num until
     * you reach a single digit.
     */

    int times = 0;
    while (n >= 10) {
        long long multiplicative_persistence = 1;
        long long n_copy = n;
        while (n_copy) {
            multiplicative_persistence *= n_copy % 10;
            n_copy /= 10;
        }
        n = multiplicative_persistence;
        ++times;
    }
    return times;
}

// Solution 2. To understand;
int persistence2(long long n) {
    long long p = 1;
    if (n < 10) { return 0; }
    while (n > 0) {
        p *= (n % 10);
        n = n / 10;
    }
    return persistence2(p) + 1;
}

int main() {
    /*Tests.*/
    std::cout << persistence2(999);
   // std::cout << persistence(999);
}