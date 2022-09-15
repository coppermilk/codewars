// [Kata] https://www.codewars.com/kata/5f9f43328a6bff002fa29eb8/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Floating point comparison.

#include <cmath>

bool approx_equals(const double &a, const double &b) {
    /*Comparing floating point numbers with limited precision.*/

    const double epsilon = 0.001;
    return std::abs(a - b) < epsilon;
}

int main() {
    /*Tests.*/

    approx_equals(-156.24037, -156.24038);
    return 0;
}