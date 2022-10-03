// [Kata] https://www.codewars.com/kata/5a523566b3bfa84c2e00010b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Minimize Sum Of Array (Array Series #1).


#include <vector>
#include <algorithm>

using namespace std;

int minSum(vector<int> passed) {
    /* Find the minimum sum which is obtained
     * from summing each Two integers product .*/

    int min_sum = 0;
    unsigned long size = passed.size();
    std::sort(passed.begin(), passed.end());

    for (unsigned long i = 0; i < size / 2; ++i) {
        min_sum += passed[i] * passed[size - 1 - i];
    }
    return min_sum;
}

int main() {
    /*Tests.*/

    minSum({5, 4, 2, 3});
}