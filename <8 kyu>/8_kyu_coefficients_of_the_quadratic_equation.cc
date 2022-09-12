// [Kata] https://www.codewars.com/kata/5d59576768ba810001f1f8d6/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Coefficients of the Quadratic Equation.

#include <vector>

using namespace std;

vector<int> quadratic(const int &x1, const int &x2) {
    /* Return type is a Vector containing coefficients
       of the equations in the order (a, b, c).
       Equation will be the form of ax^2 + bx + c = 0.
       Remember, rots can be written like (x-x1) * (x-x2) = 0.*/

    int a = 1;
    int b = -x1 - x2;
    int c = -x1 * -x2;
    return {a, b, c};
}

int main() {
    /*Tests.*/

    quadratic(5, -4); // Should return { 1, -1, -20 };
    quadratic(4, -9); // Should return { 1,  5, -36 };
    return 0;
}