// [Kata] https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector vec = input;
    stable_partition(vec.begin(), vec.end(), std::negate());

    return vec;
}

int main(){
    std::vector<int> test = { 4, -7, 13, -3, 0, -8, 19, -13, -6, -8, -19, -19, 15, -11, 5, -17, -18, -19, 16, -16, 0, 9, -1, 13, -6, 9, 20, -4, 6, 9, 19, -6, 15, 10, -14, -3, -5, 20, -5, 19, 2, -13, -6, 4, 0, 8, -19, 1, -15, -9, -2, -3};
    for(auto i : move_zeroes(test)){
        std::cout <<"'"<< i <<"' " ;
    }
    move_zeroes(test);
}