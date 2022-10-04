// [Kata] https://www.codewars.com/kata/595aa94353e43a8746000120/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Lost number in number sequence.

#include <numeric>
#include <list>
#include <iostream>

using namespace std;

int findDeletedNumber(const list<int>& startingList, const list<int>& mixedList){
    /*An ordered sequence of numbers from 1 to N is given.
     * One number might have deleted from it, then the remaining numbers were mixed.
     * Find the number that was deleted.*/

   int xor_sum = 0;
    for(auto value : startingList){
        xor_sum ^= value;
    }
    for(auto value : mixedList){
        xor_sum ^= value;
    }
    return xor_sum;
}

int main(){
    /*Tests.*/

   std::cout<<  findDeletedNumber({1,2,3,4,5,6,7,8,9},{5,7,1,9,4,8,2,3});
}