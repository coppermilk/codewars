// [Kata] https://www.codewars.com/kata/5a71939d373c2e634200008e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Simple string reversal

std::string solve(std::string s) {
  /*Reverse a string while maintaining the spaces (if any) in their original place.*/
  std::string ans;
  std::vector <int> spaces;
  for (int i = 0; i < s.size(); ++i) {
    if (!isspace(s[i])) {
      ans.push_back(s[i]);
    } else {
      spaces.push_back(i);
    }
  }
  for (int i = 0; i < ans.size() / 2; ++i) {
    std::swap(ans[i], ans[ans.size() - i - 1]);
  }
  for (auto & i: spaces) {
    ans.insert(i, " ");
  }
  return ans;
}