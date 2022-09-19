// [Kata] https://www.codewars.com/kata/56269eb78ad2e4ced1000013/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Find the next perfect square!

#include <iostream>
#include <cmath>

long int findNextSquare(long int sq) {
    /*Find the next perfect square!.*/

    long corner = (long)sqrt((double)sq);
    return corner * corner == sq ? (corner + 1) * (corner + 1) : -1;
}

int main() {
    std::cout << findNextSquare(15241383936);
}