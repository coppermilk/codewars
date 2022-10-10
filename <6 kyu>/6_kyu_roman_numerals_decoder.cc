// [Kata] https://www.codewars.com/kata/51b6249c4612257ac0000005/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Roman Numerals Decoder.
#include <iostream>
#include <string>
#include <vector>
#include <map>

int solution(std::string roman) {
    // Convert the number to a roman numeral.

    const int arabic_n[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const std::string roman_n[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};


    int solution = 0;
    int roman_n_size = sizeof(roman_n) / sizeof(roman_n[0]);
    for (int i = 0; i < roman_n_size; ++i) {

        unsigned long position = roman.find(roman_n[i]);
        if (position != std::string::npos) {
            // If find roman number.
            if (roman.substr(0, roman_n[i].size()) == roman_n[i]) {
                // And size this next number equal find.
                solution += arabic_n[i];
                roman.erase(0, roman_n[i].size());
                i -= 2;
            }
        }
    }
    return solution;
}

// Second solution.
std::map<char, int> nums = {{'M', 1000},
                            {'D', 500},
                            {'C', 100},
                            {'L', 50},
                            {'X', 10},
                            {'V', 5},
                            {'I', 1}};

int solution2(std::string roman) {
    int res = 0;
    int old = 0;
    for (auto ch: roman) {
        int cur = nums[ch];
        res += cur;
        if (cur > old) {
            res -= 2 * old;
        }
        old = cur;
    }
    return res;
}

int main() {
    std::cout << solution2("MCMLIV");
}