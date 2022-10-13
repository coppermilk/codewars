#include <vector>

class Kata {
public:
  static std::vector<int> foldArray(std::vector<int> array, int runs) {
      while (runs--) {
          unsigned long half_size = array.size() / 2;
          for (unsigned long i = 0; i < half_size; ++i) {
              array[i] += array.back();
              array.pop_back();
          }
      }
      return array;
  }
};

int main() {
    Kata::foldArray(std::vector<int>{-9, 9, -8, 8, 66, 23}, 1);
}