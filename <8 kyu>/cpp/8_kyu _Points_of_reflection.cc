// [Kata] https://www.codewars.com/kata/57bfea4cb19505912900012c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Points of Reflection.

#include <utility>
#include <valarray>
#include <iostream>

// First solution.
std::pair<int, int> symmetricPoint(const std::pair<int, int> &p,
                                   const std::pair<int, int> &q) {
    return {-p.first + 2 * q.first, -p.second + 2 * q.second};
}

// Second solution.
std::pair<int, int> symmetricPoint2(const std::pair<int, int> &p,
                                   const std::pair<int, int> &q) {
    // Delta x and delta y.
    int dx = abs(p.first - q.first);
    int dy = abs(p.second - q.second);

    // Quadrants x and quadrants y.
    //  -+ | ++
    //  ---+---
    //  -- | +-
    //  + =>  1
    //  - => -1

    int qx = 1;
    int qy = 1;

    if (q.first < p.first) {
        qx = -1;
    }
    if (q.second < p.second) {
        qy = -1;
    }
    return {q.first + (dx * qx), q.second + (dy * qy)};
}

int main() {
    /*Tests.*/

    std::pair<int, int> x = symmetricPoint({-963, 789}, {-710, 285});
    std::pair<int, int> k = symmetricPoint2({-963, 789}, {-710, 285});
    std::cout << x.first << " " << x.second << std::endl;
    std::cout << k.first << " " << k.second;
    return 0;
}