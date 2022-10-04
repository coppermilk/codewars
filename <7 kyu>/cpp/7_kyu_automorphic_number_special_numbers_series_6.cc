// [Kata] https://www.codewars.com/kata/5a58d889880385c2f40000aa/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Automorphic Number (Special Numbers Series #6).

#include <string>
#include <iostream>

using namespace std;

// First solution.
int pow(int base, int exponent) {
    int number = 1;
    for (int i = 0; i < exponent; ++i) {
        number *= base;
    }
    return number;
}

int count_digits_in_number(int number) {
    /*Count digits in number.*/

    int count = 0;
    do {
        count++;
        number /= 10;
    } while (number);
    return count;
}

string autoMorphic(int number) {
    /*Given a number determine if it Automorphic or not.*/

    int square = number * number;
    int cap_decimals_to_cut = (pow(10, count_digits_in_number(number)));
    int square_without_cap = square % cap_decimals_to_cut;

    return number == square_without_cap ? "Automorphic" : "Not!!";

}

// Second solution.
string autoMorphic2(int number) {
    /*Given a number determine if it Automorphic or not.*/

    int square = number * number;
    while (number) {
        if ((square % 10) != (number % 10)) {
            return "Not!!";
        }
        number /= 10;
        square /= 10;
    }
    return "Automorphic";
}

int main() {
    /*Tests.*/

    autoMorphic(625);
    for (int i = 0; i < 26; ++i) {
        std::cout << i << " " << autoMorphic2(i) << std::endl;
    }
}