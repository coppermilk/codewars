// [Kata] https://www.codewars.com/kata/585d7d5adb20cf33cb000235/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Find the unique number.

#include <algorithm>
#include <map>


float find_uniq(const std::vector<float> &v) {
/*Find the unique number.*/
    std::map<float, unsigned long> m;
    for (auto const &value: v) {
        m[value]++;
    }

    for (auto const &[key, value]: m) {
        if (value == 1) {
            return key;
        }
    }
}

int main() {
    find_uniq(std::vector<float>{0, 1, 2, 3, 3});
}