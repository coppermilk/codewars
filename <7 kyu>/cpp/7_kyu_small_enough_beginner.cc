// [Kata] https://www.codewars.com/kata/57cc981a58da9e302a000214/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Small enough? - Beginner.

#include <vector>
#include <algorithm>
#include <iostream>

bool small_enough(const std::vector<int> &arr, const int &limit) {
    /*Check that all values in the array are below or equal to the limit value.
    If they are, return true. Else, return false.*/

    //std::all_of(arr.begin(), arr.end(), [&limit](int i)->bool {if(i > limit) return false;});
    for (int value: arr) {
        if (value > limit) {
            return false;
        }
    }
    return true;
}

int main() {
    /*Tests.*/

    std::cout << small_enough(std::vector<int>{78, 117, 110, 99, 104, 117, 107, 115}, 100);
    return 0;
}