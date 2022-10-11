// [Kata] https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 5 kyu Maximum subarray sum.

#include <vector>
#include <iostream>
#include <climits>

int maxSequence(const std::vector<int> &arr) {
    /*Largest Sum Contiguous Subarray (Kadane’s Algorithm). */
    int local_max = 0;
    int global_max = 0;
    for (const int &i: arr) {
        local_max += i;
        global_max = std::max(local_max, global_max);
        local_max = std::max(0, local_max);
    }
    return global_max > 0 ? global_max : 0;
}

/*Driver program to test maxSubArraySum*/
int main() {

    std::cout << maxSequence({});
}
