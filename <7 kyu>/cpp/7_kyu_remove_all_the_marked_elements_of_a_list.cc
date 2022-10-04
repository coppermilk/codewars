// [Kata] https://www.codewars.com/kata/563089b9b7be03472d00002b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Remove All The Marked Elements of a List.

#include <vector>
#include <algorithm>

std::vector<int> remove_values(std::vector<int> integers, const std::vector<int>& values) {
    /*Removes from a given array of integers all the values contained in a second array.*/

    for (auto const &value: values) {
        integers.erase(std::remove(integers.begin(), integers.end(), value), integers.end());
    }
    return integers;
}

int main() {
    std::vector<int> integers, values, expected;

    integers = {1, 1, 2, 3, 1, 2, 3, 4};
    values = {1, 3};
    remove_values(integers, values);

}