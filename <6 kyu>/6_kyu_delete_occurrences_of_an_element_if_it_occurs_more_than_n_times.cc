// [Kata] https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Delete occurrences of an element if it occurs more than n times.

#include <vector>
#include <map>

std::vector<int> deleteNth(std::vector<int> arr, int limit) {
    /*Create a new list that contains each number of list at most 'limit' times, without reordering.*/

    std::vector<int> new_list;
    std::map<int, int> count_element;

    // Count ich elements.
    for (auto const &value: arr) {
        ++count_element[value];
    }
    // Setup limit for elements.
    for (auto &[key, value]: count_element) {
        if (value > limit) {
            value = limit;
        }
    }
    // Construct answer below limit.
    for (auto &value: arr) {
        if (count_element[value]) {
            new_list.push_back(value);
            --count_element[value];
        }
    }
    return new_list;
}

int main() {
    deleteNth({20, 37, 20, 21, 20, 20, 20}, 1);
    return 0;
}