// [Kata] https://www.codewars.com/kata/57ad85bb7cb1f3ae7c000039/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Numbers with this digit inside

std::vector < long > numbersWithDigitInside(long x, long d) {
  /* Search all numbers from inclusive 1 to inclusive a given number x, that have the given digit d in it.*/
  std::vector < long > result;
  for (int i = 1; i <= x; ++i) {
    int i_copy = i;
    do {
      if (i_copy % 10 == d) {
        result.push_back(i);
        break;
      }
      i_copy /= 10;
    } while (i_copy);
  }

  if (result.empty()) {
    return {0,0,0};
  } else {
    long sum = 0;
    long product = 1;
    for (auto & i: result) {
      sum += i;
      product *= i;
    }
    return {(long)result.size(),sum,product};
  }
}
