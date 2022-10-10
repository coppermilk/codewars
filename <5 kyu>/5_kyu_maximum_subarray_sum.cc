//
// Created by zvgdb on 10.10.22.
//
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