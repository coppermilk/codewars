// [Kata] https://www.codewars.com/kata/5667e8f4e3f572a8f2000039/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Mumbling.

#include <string>
#include <iostream>

class Accumul {
public:
    static std::string accum(const std::string &s) {
        /*See task. accum("abcd") -> "A-Bb-Ccc-Dddd.*/

        std::string accum;
        int iteration = 0;
        for (auto ch: s) {
            // Add header.
            accum += (char)toupper(ch);

            // Add lowercase body.
            accum += std::string(iteration, (char)tolower(ch));
            accum += '-';
            iteration++;
        }
        accum.pop_back();
        return accum;
    }
};

int main() {
    /*Tests.*/

    std::cout << Accumul::accum("ZpglnRxqenU");
}