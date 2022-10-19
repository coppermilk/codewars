// [Kata] https://www.codewars.com/kata/5539fecef69c483c5a000015/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Backwards Read Primes.

#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>

class BackWardsPrime {
private:
  static bool isPrime(long long number) {
      /*Check if number is prime. */
      if (number <= 1) {
          return false;
      }
      for (long long i = 2; i <= sqrtl(number); ++i) {
          if (number % i == 0) {
              return false;
          }
      }
      return true;
  }

  static bool isCanReversed(long long number) {
      /*Reverse digits in numbers if number is not equal.*/
      long long rev_num = 0;
      long long number_copy = number;
      while (number > 0) {
          rev_num = rev_num * 10 + number % 10;
          number /= 10;
      }
      return isPrime(rev_num) && (rev_num != number_copy);
  }

public:
  static std::string backwardsPrime(long long start, long long end) {
      /* Generate backward prime in range.*/
      std::string ans;
      for (long long i = start; i <= end; ++i) {
          if(isPrime(i) && isCanReversed(i)){
              ans += std::to_string(i) + " ";
          }
      }
      if(ans.size() >= 2){
          ans.pop_back();
      }
      return ans;
  }
};

int main() {
    /*Tests.*/
    std::cout << BackWardsPrime::backwardsPrime(70000, 70245);
}