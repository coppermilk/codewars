// [Kata] https://www.codewars.com/kata/5a262cfb8f27f217f700000b/train/cpp
// [User] https://www.codewars.com/users/coppermilk

std::string solve(std::string a, std::string b) {
  /* Return the characters that are not common in the two strings.*/
  int abc_a[26] = {0};
  int abc_b[26] = {0};
  for(const auto &ch : a){
    ++abc_a[ch - 'a'];
  }
  for(const auto &ch : b){
    ++abc_b[ch - 'a'];
  }
  std::string ans;
  for(const auto &ch : a){
    if(!abc_b[ch -'a']){
      ans.push_back(ch);
    }
  }
  for(const auto &ch : b){
    if(!abc_a[ch -'a']){
      ans.push_back(ch);
    }
  }
  return ans;
}