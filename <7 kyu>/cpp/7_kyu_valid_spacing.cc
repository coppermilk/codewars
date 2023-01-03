// [Kata] https://www.codewars.com/kata/5f77d62851f6bc0033616bd8/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Valid Spacing

#include <string>

bool valid_spacing(const std::string & s) {
    if (s.empty()) {
        return true;
    } else {
        if (s[0] == ' ') {
            return false;
        }
        if (s[s.size() - 1] == ' ') {
            return false;
        }
        for (unsigned long i = 0; i < s.size() - 1; ++i) {
            if ((s[i] == ' ') && (s[i + 1] == ' ')) {
                return false;
            }
        }
        return true;
    }
}