// [Kata] https://www.codewars.com/kata/5966eeb31b229e44eb00007a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu V A P O R C O D E.

#include<string>
#include <iostream>

std::string vaporcode(const std::string &str) {
    /*Converts any sentence into a V A P O R W A V E sentence*/

    std::string WARPWAWE;
    const std::string splitter = "  ";

    for (auto c: str) {
        if (c == ' ') {
            continue;
        } else {
            WARPWAWE += (char) toupper(c);
            WARPWAWE += splitter;
        }
    }
    WARPWAWE.erase(WARPWAWE.end() - (long)splitter.size(), WARPWAWE.end());
    return WARPWAWE;
}

int main() {
    /*Tests.*/

    std::cout << vaporcode("Let's go to the movies");
    return 0;
}