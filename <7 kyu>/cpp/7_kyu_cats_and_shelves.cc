// [Kata] https://www.codewars.com/kata/62c93765cef6f10030dfa92b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Cats and shelves

#include <cmath>
unsigned int Cats(unsigned int start, unsigned int finish) {
  /* Find the minimum number of jumps to go from start to finish.*/
  int delta = finish - start;
  int delta_one_third = std::round((double)delta / 3.0);
  return (delta % 3) ? delta_one_third + 1 : delta_one_third;
}
