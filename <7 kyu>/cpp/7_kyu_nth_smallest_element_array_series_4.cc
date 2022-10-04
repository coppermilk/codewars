// [Kata] https://www.codewars.com/kata/5a512f6a80eba857280000fc/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Nth Smallest Element (Array Series #4)

#include <vector>
#include <algorithm>

using namespace std;
using vec = vector<int>;

int nthSmallest(vector<int> passed, int nSmallest) {
    /*Find the Nth smallest element in this array of integers*/

    std::sort(passed.begin(), passed.end());
    return passed[nSmallest - 1];
}

int main() {
    /*Tests.*/

    nthSmallest(vec{-102, -16, -1, -2, -367, -9}, 5);
    return 0;
}