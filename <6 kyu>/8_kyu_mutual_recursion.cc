// [Kata] https://www.codewars.com/kata/53a1eac7e0afd3ad3300008b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Mutual Recursion

int M(int n);
int F(int n);

int F(int n) {
  return n ? n - M(F(n - 1)) : 1;
}

int M(int n) {
  return n ? n - F(M(n - 1)) : 0;
}
