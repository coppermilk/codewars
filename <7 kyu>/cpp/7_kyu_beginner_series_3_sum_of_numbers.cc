// [Kata] https://www.codewars.com/kata/55f2b110f61eb01779000053/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Beginner Series #3 Sum of Numbers.
// FIND: Euler like (Gauss's) formula for negative add negative numbers!!!

#include <algorithm>

// First solution.
int get_sum(const int &a, const int &b) {
    /*sum of all the integers between and including them.*/

    int sum = 0;
    for (int i = std::min(a, b); i <= std::max(a, b); ++i) {
        sum += i;
    }
    return sum;
}

//Second solution.
int get_sum2(const int &a, const int &b) {
    /*sum of all the integers between and including them.*/

    int n = (a < b ? b - a : a - b) + 1;
    return n * (a + b) / 2;
}

int main() {
    /*Tests.*/

    get_sum(42, -42);
    get_sum2(42, -42);
}