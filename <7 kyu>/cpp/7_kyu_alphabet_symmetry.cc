// [Kata] https://www.codewars.com/kata/59d9ff9f7905dfeed50000b0/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Alphabet symmetry.

#include <vector>
#include <string>

std::vector<int> solve(const std::vector<std::string> &arr) {
    /*Return an array of the number of letters that occupy
      their positions in the alphabet for each word.*/

    std::vector<int> solve;

    for (const auto &word: arr) {

        char expected_letter = 'a';
        int occupy_their_positions_count = 0;
        for (const auto &ch: word) {
            if (tolower(ch) == expected_letter) {
                ++occupy_their_positions_count;
            }
            ++expected_letter;
        }
        solve.push_back(occupy_their_positions_count);
    }
    return solve;
}

int main() {
    /*Tests.*/

    solve({"encode", "abc", "xyzD", "ABmD"});
}
