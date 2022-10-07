// [Kata] https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Split Strings

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
    /*Splits the string into pairs of two characters.*/

    std::vector<std::string> ans;
    //Get pair char.
    for (unsigned long i = 0; i < s.size(); i += 2) {
        ans.push_back(s.substr(i, 2));
    }
    // Add '_' into last elem if elem not pair.
    if (s.size() % 2) {
        ans[ans.size() - 1].push_back('_');
    }
    return ans; // Your code here
}

int main() {
    /*Tests.*/
    solution("HelloWorldT");
    return 0;
}