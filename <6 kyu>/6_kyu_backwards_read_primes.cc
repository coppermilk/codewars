#include <string>
#include <iostream>
#include <cmath>

class BackWardsPrime {
private:
  static bool isPrime(long long number) {
      /*Check if number is prime. */
      if (number <= 1) {
          return false;
      }
      for (long long i = 2; i <= sqrt(number); ++i) {
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
      bool is_prime = false;
      for (long long i = start; i < end; ++i) {
          if (i == 1 || i == 0) {
              continue;
          }
          is_prime = true;
          for (int j = 2; j <= i / 2; ++j) {
              if (i % j == 0) {
                  is_prime = false;
                  break;
              }
          }
          if (is_prime) {
              if(isCanReversed(i)){
                  ans += std::to_string(i) + " ";
              }
          }

      }
      ans.pop_back();
      return ans;
  }
};

int main() {
    /*Tests.*/
    std::cout << BackWardsPrime::backwardsPrime(70000, 70245);
}