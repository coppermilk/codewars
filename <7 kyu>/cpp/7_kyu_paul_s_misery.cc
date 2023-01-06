// [Kata] https://www.codewars.com/kata/57ee31c5e77282c24d000024/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Paul's Misery
// [Note] Also can solwe with 'case  0 ... 39'.

#include <string>
#include <vector>

std::string paul(const std::vector < std::string > & x) {
  /* Calculate the Paul Misery Score.*/
  int score = 0;
  for (auto & w: x) {
    if (w == "kata") {
      score += 5;
    } else if (w == "Petes kata") {
      score += 10;
    } else if (w == "eating") {
      ++score;
    }
  }

  if (score >= 100) {
    return "Miserable!";
  } else if (score >= 70) {
    return "Sad!";
  } else if (score >= 40) {
    return "Happy!";
  } else {
    return "Super happy!";
  }
}