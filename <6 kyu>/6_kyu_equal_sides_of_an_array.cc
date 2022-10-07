// [Kata] https://www.codewars.com/kata/5679aa472b8f57fb8c000047/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Equal Sides Of An Array.

#include <vector>
#include <iostream>

using namespace std;

int find_even_index(const vector<int> &numbers) {
    /* Find an index N where the sum of the integers to the left of N
     * is equal to the sum of the integers to the right of N.
     * If there is no index that would make this happen, return -1.*/

    int left_sum = 0;
    int right_sum = 0;
    for (int number: numbers) {
        right_sum += number;
    }
    for (unsigned long i = 0; i < numbers.size(); ++i) {
        right_sum -= numbers[i];
        if (right_sum == left_sum) {
            return (int)i;
        }
        left_sum += numbers[i];
    }
    return -1;
}

int main() {
    /*Tests.*/
    vector<int> numbers{1, 2, 3, 4, 3, 2, 1};
    vector<int> n2{20, 10, 30, 10, 10, 15, 35};
    std::cout << find_even_index(numbers);
    return 0;
}