// [Kata] https://www.codewars.com/kata/5a090c4e697598d0b9000004/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Max-min arrays

std::vector<int> solve(std::vector<int> v){
    /* Rearrange the values so that the first max value 
    is followed by the first minimum, followed by second 
    max value then second min value, etc.*/
  
    std::vector<int> ans;
    std::sort(v.begin(), v.end());
  
    for (unsigned long i = 0; i < v.size(); ++i) {
         ans.push_back(v[(((i % 2 ? i : v.size()) * 2 - i) - 1) / 2]);
    }
    return ans;
}