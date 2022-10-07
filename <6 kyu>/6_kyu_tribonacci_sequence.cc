// [Kata] https://www.codewars.com/kata/556deca17c58da83c00002db/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Tribonacci Sequence

#include <vector>
#include <iostream>

std::vector<int> tribonacci(std::vector<int> &signature, int n) {
    /*Returns the first n elements - signature included of the so seeded sequence.*/
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (i < 3) {
            result.push_back(signature[i]);
        } else {
            result.push_back(result[i - 3] + result[i - 2] + result[i - 1]);
        }
    }
    return result;
}

int main() {
    /*Tests.*/
    std::vector<int> signature = {1, 1, 1};
    std::vector<int> expected = {1, 1, 1, 3, 5, 9, 17, 31, 57, 105};
    tribonacci(signature, 10);
    return 0;
}