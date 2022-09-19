// [Kata] https://www.codewars.com/kata/5f0ed36164f2bc00283aed07/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Over The Road.

#include <iostream>

long long over_the_road(long long address, long long n) {
    /*Find out the house number of the
      people on the other side of the street.*/

    return (n * 2) - (address - 1);
}

int main() {
    /*Tests.*/

    std::cout << over_the_road(23633656673, 310027696726); // Equals(596421736780));
}