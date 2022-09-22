// [Kata] https://www.codewars.com/kata/57ed30dde7728215300005fa/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Bumps in the Road.

#include <string>

std::string bumps(const std::string &road) {
    /*
     * If you are able to reach home safely by encountering
     * 15 bumps or less, return "Woohoo!", otherwise return "Car Dead".
     */

    const int BUMP_LIMIT = 15;
    int bump = 0;
    for (auto ch: road) {
        if (ch == 'n') {
            ++bump;
        }
    }
    return bump <= BUMP_LIMIT ? "Woohoo!" : "Car Dead";
}

int main() {
    /*Tests.*/

    bumps("nnn_n__n_n___nnnnn___n__nnn__");
}