// [Kata] https://www.codewars.com/kata/57cfdf34902f6ba3d300001e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu ISort and Star.

#include <vector>
#include <string>
#include <regex>

// First solution.
std::string twoSort(std::vector<std::string> s){
    /*Sort it alphabetically (case-sensitive, and based on the ASCII values of the chars)
     and then return the first value. The returned value must be a string,
     and have "***" between each of its letters.*/

    return std::regex_replace(*std::min_element(s.begin(), s.end()), std::regex{"(?!^)(.)"}, "***$1");
}

// Second solution.
std::string twoSort2(std::vector<std::string> s) {
    /*Sort it alphabetically (case-sensitive, and based on the ASCII values of the chars)
     and then return the first value. The returned value must be a string,
     and have "***" between each of its letters.*/

    std::string ans;
    sort(s.begin(), s.end());
    for (auto &ch: s.front()) {
        ans += ch;
        ans += "***";
    }
    ans.erase(ans.end() - 3, ans.end());
    return ans;
}

int main() {
    /*Tests*/

    twoSort(std::vector<std::string>{"turns", "out", "random", "test", "cases", "are",
                                     "easier", "than", "writing", "out", "basic", "ones"});
    twoSort2(std::vector<std::string>{"turns", "out", "random", "test", "cases", "are",
                                     "easier", "than", "writing", "out", "basic", "ones"});
    return 0;
}