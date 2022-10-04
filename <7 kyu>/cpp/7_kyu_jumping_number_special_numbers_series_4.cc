// [Kata] https://www.codewars.com/kata/5a54e796b3bfa8932c0000ed/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Jumping Number (Special Numbers Series #4).

#include <string>
#include <cmath>
#include <iostream>

using namespace std;

string jumpingNumber(int number) {
    /*Jumping number is the number that All adjacent digits in it differ by 1.
     * Given a number, Find if it is Jumping or not.*/

    while (number >= 10) {
        if (abs((number % 10) - ((number % 100)) / 10) != 1) {
            return "Not!!";
        }
        number /= 10;
    }
    return "Jumping!!";
}

int main() {
    /*Tests.*/

    std::cout << jumpingNumber(67);
}