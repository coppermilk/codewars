// [Kata] https://www.codewars.com/kata/577b9960df78c19bca00007e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Find the nth Digit of a Number.

#include <valarray>

int findDigit(int num, int nth) {
    /* 
     * Takes two numbers as input, num and nth and return
     * the nth digit of num (counting from right to left).
     */

    if (nth <= 0) {
        return -1;
    } else {
        int i = 1;
        while (num) {
            if (i == nth) {
                break;
            }
            i++;
            num /= 10;
        }
        return std::abs(num % 10);
    }
}

int main() {
    findDigit(12345, 3);
}
