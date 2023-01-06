// [Kata] https://www.codewars.com/kata/58640340b3a675d9a70000b9/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// All Star Code Challenge #3

#include <string>

std::string remove_vowels(const std::string& str) {
  
  std::string ans;
  ans.reserve(str.size());
  
  for(auto &ch : str){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          break;
        default:
        ans.push_back(ch);
    }
  }
  return ans;
}