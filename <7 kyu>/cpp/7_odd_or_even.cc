// [Kata] https://www.codewars.com/kata/5949481f86420f59480000e7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Odd or Even?

#include <string>
#include <vector>
#include <numeric>

std::string odd_or_even(const std::vector<int> &arr){
    /*Given a list of integers, determine whether
      the sum of its elements is odd or even.*/

    return std::accumulate(arr.begin(), arr.end(), 0) % 2 ? "odd" : "even";
}