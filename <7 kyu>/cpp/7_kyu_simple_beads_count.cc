// [Kata] https://www.codewars.com/kata/58712dfa5c538b6fc7000569/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Simple beads count.

#include <iostream>

unsigned int countRedBeads(unsigned int n) {
    /*Returns the number of red beads.*/

    return n ? (n - 1) * 2 : 0;
}

int main() {
    /*Tests.*/

    for (int i = 0; i < 20; ++i) {
        std::cout << countRedBeads(i) << std::endl;
    }
}