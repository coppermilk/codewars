// [Kata] https://www.codewars.com/kata/592e830e043b99888600002d/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <string>
#include <vector>
#include <iostream>
class Kata {
 public:
  static std::vector<int> Encode(std::string str, int n) {
    /* Digital Cypher assigns to each letter of the alphabet unique number. */
    std::vector<int> ans;
    std::vector<int> salt = split_number(n);
    for (unsigned long i = 0; i < str.size(); ++i) {
      ans.push_back(str[i] - 'a' + 1 + salt[i % salt.size()]);
    }
    return ans;
  }
  static std::vector<int> split_number(int n) {
    /* Split numbers by numbers. */
    std::vector<int> ans;
    do {
      ans.push_back(n % 10);
      n /= 10;
    } while (n);
    std::reverse(ans.begin(), ans.end());
    return ans;
  }
};