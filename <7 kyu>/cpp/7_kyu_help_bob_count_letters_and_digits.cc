// [Kata] https://www.codewars.com/kata/5738f5ea9545204cec000155/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Help Bob count letters and digits.

#include <ctype.h>
int countLettersAndDigits(std::string input){
  /* Determine how many letters (both uppercase and lowercase ASCII letters)
     and digits are in a given string.*/
  int count = 0;
    for(auto &ch : input){
      if(isalnum(ch)){
        ++count;
      }
    }
    return count;
}