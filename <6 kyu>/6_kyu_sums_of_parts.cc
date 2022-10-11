// [Kata] https://www.codewars.com/kata/5ce399e0047a45001c853c2b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Sums of Parts.

#include<vector>
#include <algorithm>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long> &ls) {
    /*Return a list of the sums of its parts as defined above.*/
    std::vector<unsigned long long> ans;
    unsigned long long cur_sum = 0;
    for (long long i = ls.size() - 1; i >= -1; --i) {
        ans.push_back(cur_sum);
        cur_sum += ls[i];
    }
    std::reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    partsSum({1, 2, 3, 4, 5, 6});
}