// [Kata] https://www.codewars.com/kata/5aa1bcda373c2eb596000112/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Maximum Triplet Sum (Array Series #7).

#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>

using namespace std;

int maxTriSum(vector<int> numbers) {
    /*Given an array/list [] of n integers , find maximum triplet sum in the array Without duplications .*/

    std::sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return std::accumulate(numbers.end() - 3, numbers.end(), 0);
}

int main() {
    /*Tests.*/

    std::cout << maxTriSum({2, 9, 13, 10, 5, 2, 9, 5});
}