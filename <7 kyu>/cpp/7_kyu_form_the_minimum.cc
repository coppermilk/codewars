// [Kata] https://www.codewars.com/kata/5ac6932b2f317b96980000ca/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Form The Minimum.

#include <vector>
#include <set>
#include <iostream>
#include <valarray>

using namespace std;

unsigned long long minValue(vector<int> values) {
    /*Return the smallest number that could be formed from
      these digits, using the digits only once (ignore duplicates).*/

    // Creat set.
    std::sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());

    // Construct answer.
    unsigned long long ans = 0;
    unsigned long shift = values.size() - 1;
    for (int value: values) {
        ans += value * (unsigned long long) pow(10, shift--);
    }
    return ans;
}

int main() {
    std::cout << minValue({1, 9, 1, 3, 7, 4, 6, 6, 7});
}