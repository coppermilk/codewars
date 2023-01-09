// [Kata] https://www.codewars.com/kata/52b7ed099cdc285c300001cd/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Minimum Steps (Array Series #6)

#include <vector>

using namespace std; 

int minimumSteps (vector<int> numbers ,  int input){
  /*Find how many times you have to add up the smallest numbers 
    in the array until their Sum becomes greater or equal to K*/
  std::sort(numbers.begin(), numbers.end());
  int sum = 0;
  for(unsigned long i = 0; i < numbers.size(); ++i){
    sum += numbers[i];
    if(sum >= input){
      return i;
    }
  }
  return numbers.size();
}
