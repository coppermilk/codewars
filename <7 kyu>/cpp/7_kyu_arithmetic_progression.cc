// [Kata] https://www.codewars.com/kata/55caf1fd8063ddfa8e000018/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Arithmetic progression

#include <string>

std::string arithmeticSequenceElements(int a, int d, int n)
{
  std::string ans;
  for(int i = 0; i < n; ++i){
    ans += std::to_string(a) + ", ";
    a+=d;
  }
  ans.erase(ans.size() - 2);
  return ans;
}
