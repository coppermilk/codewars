// [Kata] https://www.codewars.com/kata/55c04b4cc56a697bb0000048/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <string>

class SalesmanTravel
{
 public:
  static std::string travel(const std::string& orgr, std::string zipcode) {
    std::stringstream ss(orgr);
    std::string token;
    std::vector<std::string> numbers;
    std::vector<std::string> body;
    if (!zipcode.empty()) {
    while (std::getline(ss, token, ',')) {

      if (token.substr(token.size() - zipcode.size(), zipcode.size()) == zipcode) {
        std::cout << token << std::endl;
        body.emplace_back(token.begin() + token.find(' ') + 1, token.end() - zipcode.size() - 1);
        numbers.emplace_back(token.begin(), token.begin() + token.find(' '));
      }
    }
  }
    std::string ans;
    ans += zipcode + ":";
    for (unsigned long i = 0; i < body.size(); ++i) {
      ans += body[i];
      if(i != body.size() - 1){
        ans += ',';
      }
    }
    ans += '/';
    for (unsigned long i = 0; i < numbers.size(); ++i) {
      ans += numbers[i];
      if(i != numbers.size() - 1){
        ans += ',';
      }
    }
    return ans;
  }
};