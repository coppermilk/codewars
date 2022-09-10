// [Kata] https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Reversed Strings

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


// First solution.
string reverseString(string str) {
    for (unsigned long i = 0; i < str.size() / 2; ++i) {
        std::swap(str[i], str[str.size() - 1 - i]);
    }
    return str;
}

//Second solution.
string reverseString2(string str) {
    std::reverse(str.begin(), str.end());
    return str;
}

//Third solution.
string reverseString3(const string &str) {
    return {string(str.rbegin(), str.rend())};
}

int main() {
    string test_1 = "4321;";
    string test_2 = "54321";

    std::cout << reverseString(test_1) << std::endl;
    std::cout << reverseString(test_2) << std::endl;

    std::cout << reverseString2(test_1) << std::endl;
    std::cout << reverseString2(test_2) << std::endl;

    std::cout << reverseString3(test_1) << std::endl;
    std::cout << reverseString3(test_2) << std::endl;
    return 0;
}