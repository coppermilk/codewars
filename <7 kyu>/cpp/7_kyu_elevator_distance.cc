// [Kata] https://www.codewars.com/kata/59f061773e532d0c87000d16/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Elevator Distance

#include <vector>

int elevator_distance(std::vector<int> array) {
  int distance = 0; 
  for(unsigned long i = 0; i < array.size() - 1; ++i){
    distance += std::abs(array[i] - array[i + 1]);
  }
  return distance;
}