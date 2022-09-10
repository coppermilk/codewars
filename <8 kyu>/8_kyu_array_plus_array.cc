// [Kata] https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Array plus array

#include <vector>
#include <numeric>

int arrayPlusArray(const std::vector<int> &a, const std::vector<int> &b) {
    /*Sum of all their elements.*/

    return std::accumulate(a.cbegin(), a.cend(), 0) + std::accumulate(b.cbegin(), b.cend(), 0);
}

int main(){
    /*Tests*/

    arrayPlusArray({1, 2, 3}, {4, 5, 6});
    return 0;
}