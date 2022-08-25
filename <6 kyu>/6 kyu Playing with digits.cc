// [Kata] https://www.codewars.com/kata/5552101f47fc5178b1000050/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <cmath>

class DigPow {
public:
    static int digPow(int n, int p) {
        // Is there an integer k such as:
        // (a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ...) = n * k = sum;

        // Extract digits.
        const int MAX_DECIMAL_DIGITS_IN_INT = 10;
        int reversed_number[MAX_DECIMAL_DIGITS_IN_INT];
        int count_digits_in_num = 0;

        int n_copy = n;
        do {
            reversed_number[count_digits_in_num++] = n_copy % 10;
            n_copy /= 10;
        } while (n_copy);

        // Get pow sum of 'n'.
        int sum = 0;
        for (int i = count_digits_in_num - 1; i >= 0; --i) {
            sum += pow(reversed_number[i], p++);
        }

        // Find k. See formula.
        int k = 0;
        if (sum < n) {
            k = -1;
        } else {
            k = sum / n;
            if((k * n) != sum){
                k = -1;
            }
        }

        return k;
    }
};

int main() {
    std::cout << DigPow::digPow(46288, 3);
    return 0;
}
