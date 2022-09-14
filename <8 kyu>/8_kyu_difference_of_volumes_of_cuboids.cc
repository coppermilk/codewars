// [Kata] https://www.codewars.com/kata/58cb43f4256836ed95000f97/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Difference of Volumes of Cuboids.

#include <array>

int volumeCube(std::array<int, 3> a) {
    /*Calculate volume cube.*/

    int volume = 1;
    for (int i = 0; i < 3; ++i) {
        volume *= a[i];
    }
    return volume;
}

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
    /*Find difference of volumes of cuboids.*/

    int difference = volumeCube(a) - volumeCube(b);
    return (difference > 0) ? difference : difference * -1;
}

int main() {
    /*Tests.*/

    using ar = std::array<int, 3>;

    findDifference(ar{3, 2, 5}, ar{1, 4, 4}); // Equals(14));
    findDifference(ar{9, 7, 2}, ar{5, 2, 2}); //  Equals(106));
    findDifference(ar{11, 2, 5}, ar{1, 10, 8}); //  Equals(30));
    findDifference(ar{4, 4, 7}, ar{3, 9, 3}); // Equals(31));
    findDifference(ar{15, 20, 25}, ar{10, 30, 25}); // Equals(0));
    return 0;
}