// [Kata] https://www.codewars.com/kata/5a9c35e9ba1bb5c54a0001ac/train/cpp
// [User] https://www.codewars.com/users/coppermilk

int Add (int x, int y)
{
 while(y != 0){
   unsigned c = x & y;
   x = x ^ y;
   y = c << 1;
 }
  return x;
}