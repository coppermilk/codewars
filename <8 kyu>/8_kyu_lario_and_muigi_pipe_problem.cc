// [Kata] https://www.codewars.com/kata/56b29582461215098d00000f/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Lario and Muigi Pipe Problem.

#include <vector>
#include <numeric>
#include <algorithm>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    /*Return a fixed list so that the values increment by 1 for each index
      from the minimum value up to the maximum value (both included).*/

    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());

    std::vector<int> v(abs(min - max) + 1);
    std::iota(v.begin(), v.end(), min);
    return v;
}

int main(){
    /*Tests.*/

    pipe_fix({3, 2, 1});
    return 0;
}