// [Kata] https://www.codewars.com/kata/59590976838112bfea0000fa/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu English beggars.

#include <vector>

std::vector<int> beggars(const std::vector<int> &values, unsigned int n) {
    /* Return an array with the sum of what each beggar brings home, assuming
     * they all take regular turns, from the first to the last.*/
    std::vector<int> ans(n);
    for (unsigned long i = 0; i < values.size() && n; ++i) {
        ans[i % n] += values[i];
    }
    return ans;
}

int main() {
    /*Tests.*/
    using V = std::vector<int>;
    beggars(V{1, 2, 3, 4, 5}, 0);
}