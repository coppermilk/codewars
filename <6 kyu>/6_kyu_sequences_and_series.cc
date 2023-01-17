// [Kata] https://www.codewars.com/kata/5254bd1357d59fbbe90001ec/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Sequences and Series

int getScore(int n) {
  /*Pattern for score.*/
  // Uniformly accelerated motion
  // x = x0 + v0t + (at^2)/ 2;
  // x0 = 0;
  // t = n

  const int v0 = 25;
  const int a = 50;
  return v0*n+((a*n*n)/2);
}
