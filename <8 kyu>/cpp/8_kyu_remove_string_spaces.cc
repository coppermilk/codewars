// [Kata] https://www.codewars.com/kata/57eae20f5500ad98e50002c5/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Remove String Spaces

#include <string>
#include <algorithm>

std::string no_space(std::string x) {
    /*Remove the spaces from the string.*/

    x.erase(remove(x.begin(), x.end(), ' '), x.end());
    return x;
}

int main() {
    /*Tests.*/

    no_space("this is my s t r i n g");
    return 0;
}