// [Kata] https://www.codewars.com/kata/586f6741c66d18c22800010a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sum of a sequence.

int sequenceSum(const int &start, const int &end, const int &step) {
    /*Returns the sum of a sequence of integers.
      The sequence is defined by 3 non-negative values: begin, end, step (inclusive).
      If begin value is greater than the end, function should return 0.*/

    int sum = 0;
    for (int i = start; i <= end; i += step) {
        sum += i;
    }
    return sum;
}

#include <iostream>

int main() {
    /*Tests.*/

    std::cout << sequenceSum(16, 15, 3); // 0
}