// [Kata] https://www.codewars.com/kata/5a99a03e4a6b34bb3c000124/train/cpp
// [User] https://www.codewars.com/users/coppermilk

unsigned long long numPrimorial (unsigned short int number ) {
  unsigned long long i = 2;
  unsigned long long ans = 1;
  while (number) {
    bool is_prime = true;
    for (unsigned long long j = 2; j <= i / 2; ++j) {
      if (i % j == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      ans *= i;
      --number;
    }
    i ++ ;
  }
  return ans ;
}