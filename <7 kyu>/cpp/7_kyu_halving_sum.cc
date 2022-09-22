// [Kata] https://www.codewars.com/kata/5a58d46cfd56cb4e8600009d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Halving Sum.

unsigned halving_sum(unsigned n) {
    /*
     * Given a positive integer n, calculate the following sum:
     * n + n/2 + n/4 + n/8 + ...
     */

    unsigned sum = 0;
    while (n) {
        sum += n;
        n /= 2;
    }
    return sum;
}

int main() {
    /*Tests.*/

    halving_sum(42);
    return 0;
}