// [Kata] https://www.codewars.com/kata/56582133c932d8239900002e/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>

unsigned int most_frequent_item_count(const std::vector<int>& v) {
  // Find Count of Most Frequent Item in an Array
  std::unordered_map<int, int> um;
  for (auto &i : v) {
    um[i]++;
  }
  int max_count = 0;
  for (auto &i : um) {
    max_count = std::max(max_count, i.second);
  }
  return max_count;
}