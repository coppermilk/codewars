// [Kata] https://www.codewars.com/kata/5d5ee4c35162d9001af7d699/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sum of Minimums!

#include <vector>
#include <algorithm>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers) {
    /*Find the sum of the minimum values in each row.*/

    int sum = 0;
    for (auto number: numbers) {
        sum += *min_element(number.begin(), number.end());
    }
    return sum;
}

int main() {
    /*Tests.*/

    sum_of_minimums({{7, 9, 8, 6, 2},
                     {6, 3, 5, 4, 3},
                     {5, 8, 7, 4, 5}});
}