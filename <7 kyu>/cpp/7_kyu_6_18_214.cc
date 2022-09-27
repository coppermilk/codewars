// [Kata] https://www.codewars.com/kata/5effa412233ac3002a9e471d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu 16+18=214.

#include <cmath>

unsigned add(unsigned x, unsigned y) {
    /* Uncorrected meme addition.*/
    /*   248
     * + 208
     *  ----
     *  4416
     */

    unsigned dozens = 0;
    unsigned sum = 0;

    while (x || y) {
        unsigned first_add_num = x % 10;
        unsigned second_add_num = y % 10;
        unsigned first_plus_second = first_add_num + second_add_num;

        sum += first_plus_second * (int) pow(10, dozens);
        first_plus_second >= 10 ? dozens += 2 : ++dozens;

        x /= 10;
        y /= 10;
    }
    return sum;
}

int main() {

    add(122, 81);
}