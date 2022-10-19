#include <iostream>

class Carboat {

public:
  static std::string howmuch(int m, int n) {
      if(m > n){
          std::swap(m, n);
      }
      std::string ans = "[";
      for (int c = (m / 9) - 1; c <= (n / 9); ++c) {
          for (int b = (m / 7) - 2; b <= (n / 7); ++b) {
              if ((9 * c) - (7 * b) - 1 == 0) {
                  // Equal is possible;
                  if (m <= (9 * c) + 1 && (9 * c) + 1 <= n) {
                      // c in range.
                      if (m <= (7 * b) + 2 && (7 * b) + 2 <= n) {
                          // b in range.
                          ans += "[M: " + std::to_string((9 * c) + 1) +
                                  " B: " + std::to_string(b) +
                                  " C: " + std::to_string(c) + "]";

                      }
                  }

              }
          }
      }
      ans += ']';
      return ans;
  }
};

int main() {
    std::cout << Carboat::howmuch(10000, 200);
}
