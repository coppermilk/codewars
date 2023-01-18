// [Kata] https://www.codewars.com/kata/559ce00b70041bc7b600013d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Financing Plan on Planet XY140Z-n

class Finance
{
  public:
  static unsigned long long finance(unsigned long long n){
    /*Financing Plan on Planet XY140Z-n*/
    return (n * (n + 1))/2 * (n + 2);
  }
};
