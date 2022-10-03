// [Kata] https://www.codewars.com/kata/553e8b195b853c6db4000048/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu All unique.

#include <string>

bool hasUniqueChars(std::string s) {
    /* Determine if a string contains only unique characters.
     * Return true if it does and false otherwise.
      */
    int characters[128] = {0};
    for (auto &ch: s) {
        if (characters[(unsigned char)ch] < 1) {
            ++characters[(unsigned char)ch];
        } else {
            return false;
        }
    }
    return true;
}
int main(){
    /*Tests.*/
    hasUniqueChars("abc");
}