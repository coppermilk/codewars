// [Kata] https://www.codewars.com/kata/61123a6f2446320021db987d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Letterbox Paint-Squad

int prev_mult_of_three (int n) {
  /* Given a positive integer n: 0 < n < 1e6, remove the last
    digit until you're left with a number that is a multiple of three.*/
  while(n % 3){
    n /= 10;
    if(n < 3){
      return -1;
    }
  }
  return n;
}