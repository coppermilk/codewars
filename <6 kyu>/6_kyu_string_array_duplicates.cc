// [Kata] https://www.codewars.com/kata/59f08f89a5e129c543000069/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>
#include <string>
std::vector<std::string> dup(const std::vector<std::string> &arr){
  std::vector<std::string> ans;
    for(const auto &str : arr){
      char buf = 0;
      std::string current;
      for(const auto &ch : str){
         if(ch != buf){
           current+= ch;
         }
        buf = ch;
      }
      ans.push_back(current);
    }
  return ans;
}