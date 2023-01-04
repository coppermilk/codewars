// [Kata] https://www.codewars.com/kata/5a1a9e5032b8b98477000004/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Evens times last

#include <vector>

int even_last(std::vector<int> nums) {
  /* Return the sum of all the integers that have an even 
  index (odd index in COBOL), multiplied by the integer at the last index.*/
  
  if(nums.empty()){
    return 0;
  }else{
    int integer_at_last_index = nums[nums.size() - 1];
    int sum = 0;
      for(unsigned long i = 0; i < nums.size(); i+=2){
        sum += nums[i] * integer_at_last_index;
      }
    return sum;
  }
}