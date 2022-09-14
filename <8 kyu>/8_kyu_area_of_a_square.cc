// [Kata] https://www.codewars.com/kata/5748838ce2fab90b86001b1a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Area of a Square.

#include <cmath>

double square_area(const double &A) {
    /*Calculates the area of the red square, when the length of the circular arc A
      is given as the input. Return the result rounded to two decimals.*/

    double r = A * M_2_PI;
    return round(r * r * 100) / 100;
}

int main() {
    /*Tests.*/

    square_area(2); // Equals(1.62))
    return 0;
}
