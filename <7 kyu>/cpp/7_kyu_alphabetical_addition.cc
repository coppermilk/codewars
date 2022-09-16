// [Kata] https://www.codewars.com/kata/5d50e3914861a500121e1958/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Alphabetical Addition.

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

char add_letters(std::vector<char> letters) {
    /*The function will be given a vector of letters, each one being a letter (chars) to add. Return a char.*/

    unsigned letters_sum = std::accumulate(letters.begin(), letters.end(), 0);
    letters_sum -= ('a' - 1) * letters.size();

    if (letters_sum % 26 == 0) {
        return 'z';
    } else {
        return (char) ((letters_sum % 26) + 'a' - 1);
    }
}

int main() {
    /*Tests.*/

    using vec = std::vector<char>;
    std::cout << add_letters(vec{'y', 'a'});
}