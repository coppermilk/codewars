// [Kata] https://www.codewars.com/kata/5656b6906de340bd1b0000ac/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Two to One.

#include <string>
#include <set>

class TwoToOne {
public:
    // First solution.
    static std::string longest(const std::string &s1, const std::string &s2) {
        /*Return a new sorted string, the longest possible,
          containing distinct letters - each taken only once - coming from s1 or s2.*/

        std::set<char> chars;
        for (auto ch: s1) {
            chars.insert(ch);
        }
        for (auto ch: s2) {
            chars.insert(ch);
        }
        std::string ans;
        for (auto ch: chars) {
            ans += ch;
        }
        return ans;
    }

    // Second solution.
    static std::string longest2(const std::string &s1, const std::string &s2) {
        /*Return a new sorted string, the longest possible,
          containing distinct letters - each taken only once - coming from s1 or s2.*/

        std::set<char> chars;
        chars.insert(s1.begin(), s1.end());
        chars.insert(s2.begin(), s2.end());
        return {chars.begin(), chars.end()};
    }
};

int main() {
    /*Tests.*/

    TwoToOne::longest("aretheyhere", "yestheyarehere");
    TwoToOne::longest2("aretheyhere", "yestheyarehere");
}