// [Kata] https://www.codewars.com/kata/5a03b3f6a1c9040084001765/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sum of angles.

int angle(const int &n) {
    /*Find the total sum of internal angles (in degrees) in an
      n-sided simple polygon. N will be greater than 2.*/

    //Polygon angle sum theorem.
    return 180 * (n - 2);
}

int main() {
    /*Tests.*/
    angle(8);
}