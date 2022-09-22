// [Kata] https://www.codewars.com/kata/5417423f9e2e6c2f040002ae/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Digitize.

#include <string>
#include <vector>
#include <algorithm>

std::vector<int> digitize(int n) {
    /*return an array / a list of the individual digits in order.*/

    std::vector<int> digits;
    do {
        digits.push_back(n % 10);
        n /= 10;
    } while (n);

    std::reverse(digits.begin(), digits.end());
    return digits;
}

int main() {
    /*Tests.*/

    digitize(42);
    return 0;
}