// [Kata] https://www.codewars.com/kata/5ba38ba180824a86850000f7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Simple remove duplicates.

#include <vector>
#include <algorithm>
#include <unordered_set>

std::vector<int> solve(std::vector<int> vec) {
    /*Remove the duplicates from a list of integers,
      keeping the last ( rightmost ) occurrence of each element.*/
    std::unordered_set<int> s(vec.rbegin(), vec.rend());
    vec.assign(s.begin(), s.end());
    return vec;
}

int main() {
    /*Tests.*/

    solve({3, 4, 4, 3, 6, 3});
}