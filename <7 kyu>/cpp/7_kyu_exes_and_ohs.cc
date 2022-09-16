// [Kata] https://www.codewars.com/kata/55908aad6620c066bc00002a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Exes and Ohs.

#include <string>

bool XO(const std::string &str) {
    /*Check to see if a string has the same amount of 'x's and 'o's. */

    int balance = 0;
    for (auto ch: str) {
        switch (ch) {
            case 'x':
            case 'X':
                ++balance;
                break;
            case 'o':
            case 'O':
                --balance;
                break;
            default:
                break;
        }
    }
    return !balance;
}

int main() {
    /*Tests.*/

    XO("zpzpzpp"); // Equals(true));
    return 0;
}