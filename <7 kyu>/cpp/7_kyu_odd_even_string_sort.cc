// [Kata] https://www.codewars.com/kata/580755730b5a77650500010c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Odd-Even String Sort.

#include <string>
#include <iostream>

using namespace std;

string sortMyString(const string &s) {
    /*Return another string such that even-indexed and
      odd-indexed characters of s are grouped and groups are space-separated */

    std::string even_part;
    std::string odd_part;

    for (unsigned long i = 0; i < s.size(); ++i) {
        i % 2 ? odd_part += s[i] : even_part += s[i];
    }
    return even_part + " " + odd_part;
}

int main() {
    /*Tests.*/
    std::cout << sortMyString("CodeWars");
}