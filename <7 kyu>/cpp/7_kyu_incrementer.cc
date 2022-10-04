// [Kata] https://www.codewars.com/kata/590e03aef55cab099a0002e8/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Incrementer.

#include <vector>
std::vector<int> incrementer(std::vector<int> nums){
    /* Given an input of an array of digits, return the array
     * with each digit incremented by its position in the array:
     * the first digit will be incremented by 1, the second digit by 2, etc.
     * Make sure to start counting your positions from 1 ( and not 0 ).

     * Your result can only contain single digit numbers, so if adding a digit
     * with its position gives you a multiple-digit number, only the last
     * digit of the number should be returned.*/


    for(unsigned long i = 0; i < nums.size(); ++i){
        nums[i] = (int)(nums[i] + (i + 1)) % 10;
    }

    return nums;
}

int main(){
    /*Tests.*/

    incrementer({2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 8});
}