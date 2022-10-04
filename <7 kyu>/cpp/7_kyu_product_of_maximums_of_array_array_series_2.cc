// [Kata] https://www.codewars.com/kata/5a63948acadebff56f000018/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Product Of Maximums Of Array (Array Series #2)

#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int maxProduct(vector<int> numbers, int sub_size) {
    /*Given an array/list [] of integers , Find the product of the k maximal numbers.*/

    std::sort(numbers.begin(), numbers.end(), greater());
    //numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return std::accumulate(numbers.begin(), numbers.begin() + sub_size, 1, multiplies());
}

int main() {
    /*Tests.*/

    std::cout << maxProduct({10, 8, 7, 9}, 3);
    return 0;
}