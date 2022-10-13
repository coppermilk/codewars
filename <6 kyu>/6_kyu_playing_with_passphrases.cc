// [Kata] https://www.codewars.com/kata/559536379512a64472000053/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Playing with passphrases.

#include <string>
#include <iostream>
#include <algorithm>

class PlayPass {
public:
  static std::string playPass(const std::string &s, int n) {
      std::string ans;

      // 1. shift each letter by a given number but the transformed letter must be a letter (circular shift).
      ans = s;
      for(auto &ch : ans){
          if(std::isalpha(ch)){
              ch = char((ch - 'A' + n) % 26 + 'A');
          }
      }

      // 2. replace each digit by its complement to 9.
      for(auto &ch : ans){
          if(std::isdigit(ch)){
              ch = char('9' - ch + '0');
          }
      }

      // 3. Downcase each letter in odd position, upcase each letter
      // in even position (the first character is in position 0).
      for(unsigned long i = 1; i < ans.size(); i+=2){
          ans[i] = char(std::tolower(ans[i]));
      }

      // 4. reverse the whole result.
      std::reverse(ans.begin(), ans.end());
      return ans;
  }
};

int main() {
    std::cout << PlayPass::playPass("BORN IN 2015!", 1);
}