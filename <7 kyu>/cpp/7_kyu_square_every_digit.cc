#include <iostream>
#include <valarray>

int square_digits(int num) {
    /*Square every digit of a number and concatenate them.*/

    int square_digits = 0;
    int decades = 0;
    int value;

    while (num) {
        value = num % 10;
        square_digits += value * value * (int) pow(10, decades);

        // Is square double digits or single?
        // In number line double digits starts with number 4; because 4 * 4 = 16.
        value < 4 ? decades++ : decades += 2;
        num /= 10;
    }
    return square_digits;
}

int main() {
    square_digits(425);
}