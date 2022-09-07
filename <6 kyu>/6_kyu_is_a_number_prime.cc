// https://www.codewars.com/kata/5262119038c0985a5b00029f/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    for (int i = -5; i < 10; ++i) {
        std::cout << i << " " << isPrime(i) << std::endl;
    }

    return 0;
}
