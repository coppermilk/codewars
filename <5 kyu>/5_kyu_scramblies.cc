// [Kata] https://www.codewars.com/kata/55c04b4cc56a697bb0000048/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include<string>

bool scramble(const std::string& s1, const std::string& s2){
  int alphabet_mask[26] = {0};
  for(auto ch : s1){
    ++alphabet_mask[ch - 'a'];
  }
  for(auto ch : s2){
    --alphabet_mask[ch - 'a'];
  }
  for (int i = 0; i < 26; ++i)
    if (alphabet_mask[i] < 0)
      return false;
    else {
      continue;
    }
  return true;
}