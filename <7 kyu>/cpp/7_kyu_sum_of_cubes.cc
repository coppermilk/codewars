// [Kata] https://www.codewars.com/kata/59a8570b570190d313000037/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sum of Cubes.

#include <iostream>

unsigned int sum_cubes(unsigned int n) {
    /*Takes a positive integer n, sums all the cubed values from 1 to n, and returns that sum.*/

    unsigned int sum_cubes = 0;
    for (unsigned int i = 1; i <= n; ++i) {
        sum_cubes += i * i * i;
    }
    return sum_cubes;
}

unsigned int sum_cubes2(unsigned int n) {
    /*Takes a positive integer n, sums all the cubed values from 1 to n, and returns that sum.*/

    return (n * (n + 1) / 2) * (n * (n + 1) / 2);
}

int main() {
    /*Tests.*/

    for (int i = 0; i < 20; ++i) {
        std::cout << sum_cubes(i) << std::endl;
        std::cout << sum_cubes2(i) << std::endl;
    }
}