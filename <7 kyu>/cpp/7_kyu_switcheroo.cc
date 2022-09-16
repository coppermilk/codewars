// [Kata] https://www.codewars.com/kata/57f759bb664021a30300007d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Switcheroo

#include <string>
#include <algorithm>

std::string switcheroo(std::string s) {
    /*Change 'a' to 'b' and vice versa.*/

    for (auto &ch: s) {
        switch (ch) {
            case 'a':
                ch = 'b';
                break;
            case 'b':
                ch = 'a';
                break;
            default:
                break;
        }
    }
    return s;
}

std::string switcheroo2(std::string s) {
    /*Change 'a' to 'b' and vice versa.*/

    transform(s.begin(), s.end(), s.begin(), [](char c) -> char {
        return c == 'a' ? 'b'
                        : c == 'b' ? 'a'
                                   : c;
    });
    return s;
}

int main() {
    /*Tests.*/

    switcheroo("abbbba");
    switcheroo2("abbbba");
    return 0;
}