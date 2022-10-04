// [Kata] https://www.codewars.com/kata/5a092d9e46d843b9db000064/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Array element parity.

#include <numeric>
#include <vector>
#include <algorithm>
#include <set>

int solve (std::vector<int> v){
    std::set s(v.begin(), v.end());
    return std::accumulate(s.begin(), s.end(), 0);
}

int main() {
    /*Tests.*/

    solve(std::vector <int> {-9,-105,-9,-9,-9,-9,105});
}