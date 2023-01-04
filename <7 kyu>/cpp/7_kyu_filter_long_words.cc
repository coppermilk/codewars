// [Kata] https://www.codewars.com/kata/5697fb83f41965761f000052/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Filter Long Words

#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> filter_long_words(const std::string& sentence, int n) {
  /*Function that takes a string and an an integer n as parameters and returns 
  a list of all words that are longer than n.*/
  
  std::vector<std::string> filtered_long_words;
  std::stringstream ss(sentence);
  std::string word;
  
  while(ss >> word){
    if(word.size() > n){
      filtered_long_words.push_back(word);
    }
  }
  return filtered_long_words;
}