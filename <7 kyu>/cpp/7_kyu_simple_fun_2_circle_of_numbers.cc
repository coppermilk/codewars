// [Kata] https://www.codewars.com/kata/58841cb52a077503c4000015/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Simple Fun #2: Circle of Numbers

// First solution.
int circleOfNumbers(int n, int firstNumber){
  /* Find the number which is written in the 
  radially opposite position to firstNumber.*/
  return (firstNumber + n / 2 ) % n;
}

// Second solution.
int circleOfNumbers(int n, int firstNumber){
  /* Find the number which is written in the 
  radially opposite position to firstNumber.*/
  int half_n = n / 2;
  if(firstNumber  < half_n){
    return firstNumber + half_n;
  }else{
    return firstNumber - half_n;
  }
}