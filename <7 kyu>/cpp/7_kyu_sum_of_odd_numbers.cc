// [Kata] https://www.codewars.com/kata/55fd2d567d94ac3bc9000064/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sum of odd numbers

#include <iostream>

//First solution.
long long rowSumOddNumbers(unsigned n) {
    /*Calculate the sum of the numbers in the nth
      row of this triangle (starting at index 1).*/

    return n * n * n;
}

// Second solution.
long long rowSumOddNumbers2(unsigned n) {
    /*Calculate the sum of the numbers in the nth
      row of this triangle (starting at index 1).*/

    // Find first odd numbers in n-th row.
    long long first_odd_number_in_n_row = 1;
    for (unsigned i = 0; i < n; ++i) {
        first_odd_number_in_n_row += (2 * i);
    }

    // Calculate sum odd numbers in n-th row.
    long long sum = 0;
    for (unsigned i = 0; i < n; i++) {
        sum += first_odd_number_in_n_row + (2 * i);
    }
    return sum;
}

int main() {
    /*Tests.*/

    for (int i = 0; i < 43; ++i) {
        std::cout << rowSumOddNumbers(i) << std::endl;
    }
    for (int i = 0; i < 43; ++i) {
        std::cout << rowSumOddNumbers2(i) << std::endl;
    }
    return 0;
}