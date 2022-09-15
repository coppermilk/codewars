// [Kata] https://www.codewars.com/kata/55c28f7304e3eaebef0000da/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Unfinished Loop - Bug Fixing #1.

#include <vector>

std::vector<int> createVector(const int n) {
    /*Create vector from 1 to n.*/

    std::vector<int> res;
    for (int i = 1; i <= n; ++i) {
        res.push_back(i);
    }
    return res;
}

int main() {
    /*Tests.*/

    createVector(23);
}