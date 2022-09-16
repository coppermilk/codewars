// [Kata] https://www.codewars.com/kata/534ea96ebb17181947000ada/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Breaking chocolate problem.

#include <algorithm>
#include <iostream>

// First solution.
int break_chocolate(int n, int m){
    /*Will return minimum number of breaks needed.*/

    return std::max(0, n * m - 1);
}

//Second solution.
int break_chocolate2(int n, int m) {
    /*Will return minimum number of breaks needed.*/

    int breaks = 0;
    int max = std::max(n, m);
    int min = std::min(n, m);

    if (n < 1 || m < 1) {
        // Impossible chocolate.
        breaks = 0;
    } else if (max != min) {
        // Rectangle.
        breaks = min - 1 + min * (max - 1);
    } else {
        // Square.
        breaks = ((m - 1) * m) + m - 1;
    }
    return breaks;
}

int main() {
    /*Tests.*/

    std::cout << break_chocolate(1, 6);
}