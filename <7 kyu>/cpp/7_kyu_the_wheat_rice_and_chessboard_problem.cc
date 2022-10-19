// [Kata] https://www.codewars.com/kata/5b0d67c1cb35dfa10b0022c7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu The wheat/rice and chessboard problem.

#include <cmath>
#include <iostream>

unsigned int squaresNeeded(long long n) {
    /*Return up to which square of the chessboard one should count in order to get at least as many.*/
    for (int i = 0; i < 64 && n; ++i) {
        n -= pow(2, i);
        if (n <= 0) {
            return i + 1;
        }
    }
    return  0;
}


int main() {
    /*Tests.*/
    for (int i = 0; i < 40; ++i) {
        std::cout << i << " " << squaresNeeded(i) << std::endl;
    }
}