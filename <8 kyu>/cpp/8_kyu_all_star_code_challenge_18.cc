// [Kata] https://www.codewars.com/kata/5865918c6b569962950002a1/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu All Star Code Challenge #18

#include <string>
#include <algorithm>

unsigned int strCount(std::string word, char letter) {
    /*Count letter in string. Case sensetive.*/

    return std::count(word.begin(), word.end(), letter);
}


int main() {
    /*Tests.*/

    strCount("Hello", 'o');
    return 0;
}