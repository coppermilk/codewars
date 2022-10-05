// [Kata] https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Replace With Alphabet Position
// Can alocate string as string s = "".

#include <string>
#include <sstream>
#include <iostream>

// First solution.
std::string alphabet_position(std::string text) {
    /*Replace every letter with its position in the alphabet.*/

    std::ostringstream os;

    // Find last alpha id for future break insert space.
    unsigned long last_alpha_id = 0;
    for (unsigned long i = text.size() - 1; i != 0; --i) {
        if (isalpha(text[i])) {
            last_alpha_id = i;
            break;
        }
    }

    // Construct answer.
    for (unsigned long i = 0; i < text.size(); ++i) {
        if (isalpha(text[i])) {
            os << std::to_string(text[i] - (islower(text[i]) ? 'a' : 'A') + 1);
            os << (i < last_alpha_id ? " " : "");
        }
    }

    return os.str();
}

//Second solution.

std::string alphabet_position2(const std::string &text) {
    /*Replace every letter with its position in the alphabet.*/
    std::string ans;
    for (auto &ch: text) {
        if (isalpha(ch)) {
            ans += std::to_string(ch - (islower(ch) ? 'a' : 'A') + 1);
            ans += " ";
        }
    }
    if (ans.empty()) {
        return ans;
    } else {
        ans.pop_back();
        return ans;
    }
}

int main() {
    /*Tests.*/
    std::cout << alphabet_position("The sunset sets at twelve o' clock.");
    return 0;
}