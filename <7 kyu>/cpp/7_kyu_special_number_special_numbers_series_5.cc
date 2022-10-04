// [Kata] https://www.codewars.com/kata/5a55f04be6be383a50000187/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Special Number (Special Numbers Series #5).
// NOTE:: You can also go from the opposite: find the first digit that does not fit.

#include <string>

using namespace std;

string specialNumber(int number) {
    /*Given a number determine if it special number or not .*/

    int count_special = 0;
    int count_digits = 0;
    while (number) {
        switch (number % 10) {
            case 0 ... 5:
                ++count_special;
            default:
                break;
        }
        number /= 10;
        ++count_digits;
    }
    return count_special == count_digits ? "Special!!" : "NOT!!";
}