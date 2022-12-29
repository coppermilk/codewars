// [Kata] https://www.codewars.com/kata/5340298112fa30e786000688/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <utility>
#include <vector>

std::vector<std::pair<int, int>> twos_difference(std::vector<int> vec) {
	// Return all pairs of integers from a given array of integers that have a difference of 2.*/
  std::sort(vec.begin(), vec.end());
  std::vector<std::pair<int, int>> ans;
  for(unsigned long i = 0; i < vec.size(); ++i){
    if (vec[i] + 2 == vec[i + 1]){
      ans.emplace_back(vec[i], vec[i + 1]);
    }else if(i + 2 < vec.size() && vec[i] + 2 == vec[i + 2]){
      ans.emplace_back(vec[i], vec[i + 2]);
    }
  }
  return ans;
}