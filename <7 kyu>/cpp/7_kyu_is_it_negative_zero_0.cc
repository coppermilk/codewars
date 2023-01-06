// [Kata] https://www.codewars.com/kata/5c5086287bc6600001c7589a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Is It Negative Zero (-0)?
// [Note] Also can check with union.

#include <cmath>
bool isNegativeZero(float n) {
  /* Returns true if the input number is -0 and false otherwise.*/
  return n ? 0 : std::signbit(n);
}