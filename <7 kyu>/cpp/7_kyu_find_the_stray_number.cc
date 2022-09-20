// [Kata] https://www.codewars.com/kata/57f609022f4d534f05000024/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Find the stray number.

#include <utility>
#include <vector>
#include <iostream>

// First solution.
int stray(const std::vector<int> &numbers) {
    /*Method which accepts such an array, and returns that single different number.*/

    std::pair<int, int> p;
    int first_count = 0;
    int second_count = 0;
    bool first = false;
    bool second = false;

    for (int number: numbers) {
        if (!first) {
            p.first = number;
            first_count++;
            first = true;
        } else if ((!second) && (number != p.first)) {
            p.second = number;
            second_count++;
            second = true;
        } else if (number == p.first) {
            first_count++;
            if (first_count >= 2 && second_count == 1) {
                break;
            }
        } else if (number == p.second) {
            second_count++;
            if (first_count == 1 && second_count >= 2) {
                break;
            }
        }
    }

    if (first_count >= 2 && second_count == 1) {
        return p.second;
    } else if (first_count == 1 && second_count >= 2) {
        return p.first;
    }
}

//Second solution.
int stray2(const std::vector<int> &numbers) {
    int stray = 0;
    for(int number : numbers){
        stray ^= number;
    }
    return stray;
}

int main() {
    /*Tests.*/

    std::cout << stray({1, 1, 2});
    std::cout << stray2({1, 1, 2});
}