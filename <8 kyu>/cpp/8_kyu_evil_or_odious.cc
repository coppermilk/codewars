// [Kata] https://www.codewars.com/kata/56fcfad9c7e1fa2472000034/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Evil or Odious.

#include <string>

std::string evil(int n) {
    /*Determine if a number is Evil of Odious, function should return "It's Evil!"
      in case of evil number and "It's Odious!" in case of odious number.*/

    int count_non_zero_bits = 0;
    const int BIT_MASK = 0b00000001;

    while (n) {
        if (n & BIT_MASK) {
            ++count_non_zero_bits;
        }
        n >>= 1;
    }
    return (count_non_zero_bits % 2) ? "It's Odious!" : "It's Evil!";
}

int main() {
    /*Tests.*/

    evil(23);
}