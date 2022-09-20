// [Kata] https://www.codewars.com/kata/5174a4c0f2769dd8b1000003/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sort Numbers.

#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> nums) {
    /*Sort vector.*/

    std::sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    /*Tests.*/

    solution({1, 2, 3, 10, 5});
}