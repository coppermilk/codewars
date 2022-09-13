// [Kata] https://www.codewars.com/kata/576bb71bbbcf0951d5000044/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Count of positives / sum of negatives.

#include <vector>

std::vector<int> countPositivesSumNegatives(const std::vector<int> &input){
    /*Return an array, where the first element is the count of positive numbers
     and the second element is sum of negative numbers. 0 is neither positive nor negative.*/

    if(input.empty()){
        return {};
    }else{
        int count = 0;
        int sum = 0;
        for(int i : input){
            i <= 0 ? sum +=i : count++;
        }
        return {count, sum};
    }
}

int main(){
    /*Tests.*/

    countPositivesSumNegatives({1, 2, -9, -6});
    return 0;
}