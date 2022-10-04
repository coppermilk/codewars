// [Kata] https://www.codewars.com/kata/5783d8f3202c0e486c001d23/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Convert an array of strings to array of numbers.

#include <vector>
#include <string>

std::vector<float> to_float_array(const std::vector<std::string> &str) {
    std::vector<float> ans;
    for (const auto &word: str) {
        ans.push_back(strtof(word.c_str(), nullptr));
    }
    return ans;
}

int main() {
    /*Tests.*/

    to_float_array(std::vector<std::string>{"1.1", "2.2", "3.3"});
    return 0;
}