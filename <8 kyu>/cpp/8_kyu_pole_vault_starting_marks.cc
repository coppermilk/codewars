// [Kata] https://www.codewars.com/kata/5786f8404c4709148f0006bf/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Pole Vault Starting Marks.

#include <cmath>

double startingMark(double bodyHeight) {
    /*return the best starting mark in meters, rounded to two decimal places.*/

    //                           x                        f(x)
    // Remember: Body height of 1.52 m --> starting mark: 9.45 m
    //           Body height of 1.83 m --> starting mark: 10.67 m
    //
    // All other starting marks are based on these guidelines!
    //                        f(b) - f(a)
    // Rate of change A(x) = --------------- = 3.93548.
    //                           b - a
    // Const = f(x) - (x * A(x)) = 3.4681.

    double value = (bodyHeight * 3.93548) + 3.4681;
    return round(value * 100) / 100;
}

int main() {
    /*Tests.*/

    startingMark(1.52);
}