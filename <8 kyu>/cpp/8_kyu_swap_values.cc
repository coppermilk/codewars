// [Kata] https://www.codewars.com/kata/5388f0e00b24c5635e000fc6/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Swap Values.

#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
    /*Swap values.*/

    std::swap(values.first, values.second);
    return values;
}

int main() {
    /*Tests.*/

    swap_values(std::pair<int, int>{14958573, 222032399});
    return 0;
}