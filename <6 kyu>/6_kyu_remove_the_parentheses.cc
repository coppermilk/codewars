// [Kata] https://www.codewars.com/kata/5f7c38eb54307c002a2b8cc8/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Remove the parentheses

#include <string>

std::string remove_parentheses(const std::string& str) {
  /* Remove everything inside the parentheses as
   well as the parentheses themselves.*/

  int parentheses_balance = 0;
  std::string ans;
  ans.reserve(str.size());

  for (auto& ch : str) {
    if (ch == '(') {
      ++parentheses_balance;
    } else if (ch == ')') {
      --parentheses_balance;
    } else if (!parentheses_balance) {
      ans.push_back(ch);
    }
  }
  return ans;
}