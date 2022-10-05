// [Kata] https://www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Find the odd int

#include <vector>

int findOdd(const std::vector<int> &numbers) {
    /*Find the one that appears an odd number of times.*/
    int xor_sum = 0;
    for (auto &number: numbers) {
        xor_sum ^= number;
    }
    return xor_sum;
}

int main() {
    /*Tests.*/
    using V = std::vector<int>;
    findOdd(V{20, 1, -1, 2, -2, 3, 3, 5, 5, 1, 2, 4, 20, 4, -1, -2, 5});
    return 0;
}