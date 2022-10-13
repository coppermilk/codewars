// [Kata] https://www.codewars.com/kata/57b6f5aadb5b3d0ae3000611/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Length of missing array.

#include <vector>
#include <iostream>
#include <climits>

template<class TYPE>
int getLengthOfMissingArray(std::vector<std::vector<TYPE>> arrayOfArrays) {
    if (arrayOfArrays.empty()) {
        return 0;
    } else {
        int actual_sum_sizes = 0;
        int min_size = INT_MAX;
        int max_size = INT_MIN;
        int non_zero_sizes_count = 0;

        for (auto &array: arrayOfArrays) {
            int size = array.size();
            if (size) {
                min_size = std::min(min_size, size);
                max_size = std::max(max_size, size);
            } else {
                return 0;
            }
            actual_sum_sizes += size;
            non_zero_sizes_count++;
        }
        int expected_sum_sizes = (max_size) * (max_size + 1) / 2;
        int missing_initial_array_size = 0;
        if (min_size != 1) {
            // In case [3, 4, 5, 6].
            // S=n(n+1)2
            missing_initial_array_size = (min_size - 1) * ((min_size - 1) + 1) / 2;
        }

        return expected_sum_sizes - actual_sum_sizes - missing_initial_array_size;
    }
}

int main() {

    std::vector<std::vector<char>> testInput = {{'a', 'a', 'a'},
                                                {'a', 'a'},
                                                {'a', 'a', 'a', 'a'},
                                                {'a'},
                                                {'a', 'a', 'a', 'a', 'a', 'a'}};
    int actual = getLengthOfMissingArray(testInput);
    std::cout << actual << std::endl;
}