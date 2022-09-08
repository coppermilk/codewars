// [Kata] https://www.codewars.com/kata/57f780909f7e8e3183000078/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>
#include <iostream>
#include <numeric>

// First solution.
int grow(std::vector<int> const &nums) {
    /*Result of multiplying the values together in order.*/

    int multiply = 1;
    for (auto num: nums) {
        multiply *= num;
    }
    return multiply;
}

// Second solution.
int grow2(std::vector<int> const &nums) {
    /*Result of multiplying the values together in order.*/

    return std::accumulate(nums.begin(), nums.end(), 1, std::multiplies());
}

int main() {
    std::cout << grow({1, 2, 3}) << std::endl;           // 6
    std::cout << grow2({4, 1, 1, 1, 4}) << std::endl;    // 16
    std::cout << grow2({2, 2, 2, 2, 2, 2}) << std::endl; // 64
    return 0;
}
