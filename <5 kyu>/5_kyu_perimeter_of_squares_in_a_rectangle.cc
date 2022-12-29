// [Kata] https://www.codewars.com/kata/559a28007caad2ac4e000083/train/cpp
// [User] https://www.codewars.com/users/coppermilk

typedef unsigned long long ull;
class SumFct
{
 public:
  static ull perimeter(int n){
    ull start_1 = 1;
    ull start_2 = 1;
    ull square_sum = 0;
    for(ull i = 0; i <= n; ++i){
      std::swap(start_2, start_1);
      square_sum += start_2;
      start_2 += start_1;
    }
    return 4 * square_sum;
  }
};