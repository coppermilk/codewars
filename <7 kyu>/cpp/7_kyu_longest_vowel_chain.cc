// [Kata] https://www.codewars.com/kata/59c5f4e9d751df43cf000035/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Longest vowel chain

#include <string>
#include <iostream>

using namespace std;

bool is_vowel(char &ch) {
    switch (ch) {
        case 'a':
        case 'o':
        case 'e':
        case 'u':
        case 'i':
            //case 'y':
            return true;
        default:
            return false;

    }
}

int solve(string s) {
    int max_chain = 0;
    int current_chain = 0;
    for (auto ch: s) {
        if (is_vowel(ch)) {
            ++current_chain;
        } else {
            current_chain = 0;
        }
        max_chain = std::max(max_chain, current_chain);
    }
    return max_chain;
}

int main() {
    /*Tests.*/
    std::string s = "mnopqriouaeiopqrstuvwxyuaeiouaeiou";
    std::cout << solve(s);
    return 0;
}