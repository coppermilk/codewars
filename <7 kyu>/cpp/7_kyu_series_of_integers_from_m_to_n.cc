// [Kata] https://www.codewars.com/kata/5841f680c5c9b092950001ae/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Series of integers from m to n.

#include <vector>
#include <numeric>

std::vector<int> generate_integers(int m, int n) {
    /* Generates a sequence containing the integers
     * from the first argument to the second inclusive.*/

    std::vector<int> sequence(n - m + 1);
    std::iota(sequence.begin(), sequence.end(), m);
    return sequence;
}

int main() {
    /*Tests.*/
    generate_integers(2, 6);
}
