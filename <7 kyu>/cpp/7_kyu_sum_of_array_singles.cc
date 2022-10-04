// [Kata] https://www.codewars.com/kata/59f11118a5e129e591000134/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sum of array singles.

#include <vector>
#include <algorithm>
#include <iostream>

int repeats(std::vector<int> v) {
    /*Return the sum of the numbers that occur only once.*/

    std::sort(v.begin(), v.end());
    int sum = 0;
    for (unsigned long i = 1; i <= v.size(); ++i) {
        v[i - 1] != v[i] ? sum += v[i - 1] : ++i;

    }
    return sum;
}

int main() {
    /*Tests.*/
    repeats({4, 5, 7, 5, 4, 8});
}