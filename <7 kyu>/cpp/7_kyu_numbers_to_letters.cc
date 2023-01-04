// [Kata] https://www.codewars.com/kata/57ebaa8f7b45ef590c00000c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Numbers to Letters

#include <string>
#include <vector>

std::string switcher(const std::vector<std::string>& arr) {
	/*The numbers correspond to the letters of the alphabet in 
	reverse order: a=26, z=1 etc. You should also account for
	'!', '?' and ' ' that are represented by '27', '28' and '29' respectively.*/
  std::string ans;
  for(auto &s : arr){
    switch(strtoll(s.c_str(), nullptr, 10)){
        case 27: ans.push_back('!'); break;
        case 28: ans.push_back('?'); break;
        case 29: ans.push_back(' '); break;
        default:
         ans.push_back(char('a' + 26 - strtoll(s.c_str(), nullptr, 10)));
    }
  }
  return ans;
}