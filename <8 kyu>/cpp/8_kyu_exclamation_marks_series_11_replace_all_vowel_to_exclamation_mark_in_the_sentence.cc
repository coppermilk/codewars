// [Kata] https://www.codewars.com/kata/57fb09ef2b5314a8a90001ed/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Exclamation marks series #11: Replace all vowel to exclamation mark in the sentence.

#include <string>

using namespace std;

string replace(string s) {
    for (auto &ch: s) {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ch = '!';
                break;
            default:
                break;
        }
    }
    return s;
}

int main() {
    /*Tests.*/

    replace("ABCDE");
}