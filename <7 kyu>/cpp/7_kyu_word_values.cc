// [Kata] https://www.codewars.com/kata/57ee24e17b45eff6d6000164/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Cat and Mouse - Easy Version.

#include <string>
#include <vector>

std::vector<int> wordValue(const std::vector<std::string> &words) {
    /* Return the values of the strings as explained above multiplied by
     * the position of that string in the list. For our purpose, position begins with 1.*/
    std::vector<int> words_value;
    int position = 1;
    for (auto &word : words) {
        int word_value = 0;
        for (auto &ch : word) {

            if (std::isalpha(ch)) {
                word_value += (ch - 'a' + 1) * position;
            }
        }
        words_value.push_back(word_value);
        ++position;
    }
    return words_value;
}

int main() {
    /*Tests.*/
    wordValue(std::vector<std::string>{"abcdefghijklmnopqrstuvwxyz","stamford bridge","haskellers"});
}