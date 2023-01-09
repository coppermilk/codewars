// [Kata] https://www.codewars.com/kata/598057c8d95a04f33f00004e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Get the integers between two numbers

#include <vector>
#include <numeric> // std::iota

// First solution.
std::vector<int> function(int start, int end) {
  if(start + 1 > end){
    return {};
  }else{
    std::vector<int> v(end - start - 1);
    std::iota(v.begin(), v.end(), start + 1);
    return v;
  }
}

// Second solution.
std::vector<int> function2(int start, int end) {
  std::vector<int> v;
  v.reserve(end - start);
  for(int i = start + 1; i < end; ++i){
    v.push_back(i);
  }
  return v;
}
