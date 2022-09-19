#include <cinttypes>
#include <iostream>
#include <cinttypes>

uint64_t descendingOrder(uint64_t a) {
    /*Take any non-negative integer as an argument
      and return it with its digits in descending order.*/

    // Count the digits in a number.
    int digit_count[10] = {0};
    while (a) {
        ++digit_count[a % 10];
        a /= 10;
    }

    // Construct new number.
    uint64_t sum = 0;
    for (int i = 10 - 1; i >= 0; --i) {
        while (digit_count[i]) {
            sum *= 10;
            sum += i;
            --digit_count[i];
        }
    }
    return sum;
}

int main() {
    /*Tests.*/

    std::cout << descendingOrder(1346403021396595435);
}