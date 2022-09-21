// [Kata] https://www.codewars.com/kata/580a4734d6df748060000045/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sorted? yes? no? how?

#include <vector>
#include <string>
#include <algorithm>

// First solution.
std::string is_sorted_and_how(std::vector<int> array) {
    /* method which accepts an array of integers, and returns one of the following:
     "yes, ascending" - if the numbers in the array are sorted in an ascending order
     "yes, descending" - if the numbers in the array are sorted in a descending order
     "no" - otherwise*/

    bool ascending = true;
    bool descending = true;
    for (unsigned long i = 1; i < array.size(); ++i) {
        if (array[i - 1] > array[i]) {
            ascending = false;
        } else if (array[i - 1] < array[i]) {
            descending = false;
        }
    }

    if (descending) {
        return "yes, descending";
    } else if (ascending) {
        return "yes, ascending";
    } else {
        return "no";
    }
}

// Second solution.
std::string is_sorted_and_how2(std::vector<int> array) {
    /* method which accepts an array of integers, and returns one of the following:
     "yes, ascending" - if the numbers in the array are sorted in an ascending order
     "yes, descending" - if the numbers in the array are sorted in a descending order
     "no" - otherwise*/

    if (std::is_sorted(array.begin(), array.end())) {
        return "yes, descending";
    } else if (std::is_sorted(array.rbegin(), array.rend())) {
        return "yes, ascending";
    } else {
        return "no";
    }
}

int main() {
    /*Tests.*/

    is_sorted_and_how({15, 7, 3, -8});
    is_sorted_and_how2({15, 7, 3, -8});
}