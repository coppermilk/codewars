// [Kata] https://www.codewars.com/kata/55733d3ef7c43f8b0700007c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Complete The Pattern #2.
#include <string>
#include <iostream>

std::string pattern(int n) {
    /*Returns the following Pattern upto n number of rows.*/
    if (n < 1) {
        return "";
    } else {
        std::string pattern;
        for (int i = n; i > 0; --i) {
            for (int j = n; i + j > n; --j) {
                pattern += std::to_string(j);
            }
            pattern += '\n';
        }
        pattern.pop_back();
        return pattern;
    }
}

int main() {
    std::cout << pattern(4);
}