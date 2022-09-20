// [Kata] https://www.codewars.com/kata/529eef7a9194e0cbc1000255/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Anagram Detection.

#include <string>
#include <vector>
#include <algorithm>

bool isAnagram(const std::string &test, const std::string &original) {
    /*Return true if the two arguments given are anagrams
      of each other; return false otherwise.*/

    std::vector<char> first_word;
    std::vector<char> second_word;

    for (auto ch: test) {
        first_word.push_back((char)tolower(ch));
    }
    for (auto ch: original) {
        second_word.push_back((char)tolower(ch));
    }
    std::sort(first_word.begin(), first_word.end());
    std::sort(second_word.begin(), second_word.end());

    return first_word == second_word;
}

#include <iostream>

int main() {
    /*Tests.*/

    std::cout << isAnagram("foefet", "toffee");
}