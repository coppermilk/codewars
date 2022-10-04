// [Kata] https://www.codewars.com/kata/5a3e1319b6486ac96f000049/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Simple consecutive pairs


#include <vector>
#include <valarray>

int pairs(std::vector<int> arr) {
    /* Return the count of pairs that have consecutive numbers.*/
    int count = 0;
    for (unsigned long i = 1; i < arr.size(); i += 2) {
        if (abs(arr[i - 1] - arr[i]) == 1) {
            ++count;
        }
    }
    return count;
}

int main() {
    /*Tests.*/
    pairs({1, 2, 5, 8, -4, -3, 7, 6, 5});
}