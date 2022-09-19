// [Kata] https://www.codewars.com/kata/56606694ec01347ce800001b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Is this a triangle?

namespace Triangle {
    // First solution.
    bool isTriangle(const long &a, const long &b, const long &c) {
        /*The function should return true if a triangle can be built
         * with the sides of given length and false in any other case.
         */
        return a + b > c && b + c > a && c + a > b;
    }

    // Second solution.
    bool isTriangle2(const int &a, const int &b, const int &c) {
        /*The function should return true if a triangle can be built
         * with the sides of given length and false in any other case.
         */
        return a - b < c && b - c < a && c - a < b;
    }
}

int main() {
    /*Tests.*/

    Triangle::isTriangle(-17, -15, 20);
    Triangle::isTriangle2(-17, -15, 20);
}