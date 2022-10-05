// [Kata] https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Sum of Digits / Digital Root

#include <vector>

// First solution.
int digital_root(int n) {
    /*Given n, take the sum of the digits of n. If that value has more than one
      digit, continue reducing in this way until a single-digit number is produced.*/

    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum < 10 ? sum : digital_root(sum);
}

// Second solution
int digital_root2(int n) {
    return --n % 9 + 1;
}

int main() {
    /*Tests.*/
    digital_root(167346);
    digital_root2(167346);
    return 0;
}