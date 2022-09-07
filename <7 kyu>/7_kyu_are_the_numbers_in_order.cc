// [Kata] https://www.codewars.com/kata/56b7f2f3f18876033f000307/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>
#include <iostream>

bool isAscOrder(std::vector<int> arr) {
    int before = arr.at(0);
    bool is_order = true;

    for (auto i: arr) {
        if (i < before) {
            is_order = false;
            break;
        }
        before = i;
    }
    return is_order;
}

int main() {
    std::vector<int> arr = {1, 2, 3};
    std::cout << isAscOrder(arr); // Should return true.
    return 0;
}