// [Kata] https://www.codewars.com/kata/5715eaedb436cf5606000381/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Sum of positive

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

// First solution.
int positive_sum(const std::vector<int> &arr) {
    int sum = 0;
    std::for_each(arr.begin(), arr.end(), [&](int n) -> void { if (n > 0) { sum += n; }});
    return sum;
}


// Second solution.
int positive_sum2(const std::vector<int> &arr) {
    return std::accumulate(arr.begin(), arr.end(), 0, [&](int x, int y) -> int { return x + std::max(0, y); });
}

int main() {
    std::cout << positive_sum({1, 2, 3, -6}) << std::endl; // Should return 6.
    std::cout << positive_sum2({1, 2, 3, -6}) << std::endl; // Should return 6.
    return 0;
}