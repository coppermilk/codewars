// [Kata] https://www.codewars.com/kata/52b7ed099cdc285c300001cd/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>
#include <utility>
int sum_intervals(std::vector<std::pair<int, int>> intervals) {
    std::sort(intervals.begin(), intervals.end());
    int sum = 0; 
    int cur = intervals[0].first;
    for(auto &i : intervals){
      if(cur <= i.second){
        sum += i.second - std::max(i.first, cur);
        cur = i.second;
      }
    }
    return sum;
}
