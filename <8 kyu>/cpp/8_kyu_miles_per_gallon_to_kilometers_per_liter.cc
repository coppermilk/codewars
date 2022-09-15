// [Kata] https://www.codewars.com/kata/557b5e0bddf29d861400005d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Miles per gallon to kilometers per liter.

#include <cmath>

double converter(int mpg) {
    /*Convert miles per imperial gallon into kilometers per liter.*/

    const double LITTERS_IN_GALLON = 4.54609188;
    const double KILOMETRES_IN_MILE = 1.609344;

    return round(mpg * KILOMETRES_IN_MILE / LITTERS_IN_GALLON * 100) / 100;
}

int main() {
    /*Tests.*/

    converter(12);
    return 0;
}