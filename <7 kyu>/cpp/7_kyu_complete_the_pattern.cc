// [Kata] https://www.codewars.com/kata/5572f7c346eb58ae9c000047/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Complete The Pattern #1.

#include <string>
#include <sstream>
#include <iostream>

std::string pattern(int n) {
    /*Returns the following Pattern(See Pattern & Examples) upto n number of rows.*/

    std::ostringstream os;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            os << i;
        }
        os << (i != n ? "\n" : "");
    }
    return os.str();
}

int main() {
    /*Tests.*/

    std::cout << pattern(4);
}