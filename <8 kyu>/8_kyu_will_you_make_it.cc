// [Kata] https://www.codewars.com/kata/5861d28f124b35723e00005e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Will you make it?

#include <cstdint>

bool zero_fuel(const uint32_t distance_to_pump, const uint32_t mpg, const uint32_t fuel_left) {
    /*Possible to get to the pump or not.*/

    return distance_to_pump <= mpg * fuel_left;
}

int main() {
    /*Tests.*/

    zero_fuel(100, 50, 1); // Equals false
    return 0;
}
