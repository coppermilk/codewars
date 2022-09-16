#include <iostream>

// First solution.
int maxMultiple(int divisor, int bound) {
    /*Find the largest integer N divisible by divisor.*/

 return (bound / divisor) * divisor;
}

// Second solution.
int maxMultiple2(int divisor, int bound) {
    /*Find the largest integer N divisible by divisor.*/

    std::cout << divisor << " " << bound << std::endl;
    int max_multiple = 0;
    while (max_multiple <= bound - divisor) {
        max_multiple += divisor;
    }
    return max_multiple;
}


int main() {
    /*Tests.*/
    std::cout << maxMultiple(7, 100);
    std::cout << maxMultiple2(7, 100);
}