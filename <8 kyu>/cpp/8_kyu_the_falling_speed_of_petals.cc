// [Kata] https://www.codewars.com/kata/5a0be7ea8ba914fc9c00006b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu The falling speed of petals.

double SakuraFall(double v) {
    /*Receives the speed (in cm/s) of a petal as input, and returns the time it
      takes for that petal to reach the ground from the same branch.*/

    // Constant velocity motion:
    // S = V * T.

    const double s = 400;
    double t = s / v;
    return t >= 0 && v != 0 ? t : 0;
}

int main() {
    /*Tests.*/

    SakuraFall(5);
}