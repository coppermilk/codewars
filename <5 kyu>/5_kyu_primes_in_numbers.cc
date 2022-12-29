// [Kata] https://www.codewars.com/kata/54d512e62a5e54c96200019e/train/cpp
// [User] https://www.codewars.com/users/coppermilk

class PrimeDecomp
{
 public:
  static std::map<int, int> primeFactors(int n) {
    // Stores num and Factors power.
    std::map<int, int> m;
    int c = 2;
    while (n > 1) {
      if (n % c == 0) {
        n /= c;
        m[c]++;
      } else {
        ++c;
      }
    }
    return m;
  }
  static std::string factors(int lst){
    std::string ans;
    std::map<int, int> m = std::move(primeFactors(lst));
    for(const auto &elem : m){
    ans += '(';
    ans += std::to_string(elem.first);
    if(elem.second >1){
      ans += "**";
      ans += std::to_string(elem.second);
    }
    ans += ')';
    }
    return ans;
  }
};
