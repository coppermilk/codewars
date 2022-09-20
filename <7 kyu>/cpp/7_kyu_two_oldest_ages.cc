// [Kata] https://www.codewars.com/kata/511f11d355fe575d2c000001/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Two Oldest Ages.

#include <vector>
#include <array>

std::array<int, 2> two_oldest_ages(const std::vector<int> ages) {
    /*Return the two highest numbers within the array.*/

    int oldest_age = 0;
    int second_oldest_age = 0;
    for (int age: ages) {
        if (age > oldest_age) {
            second_oldest_age = oldest_age;
            oldest_age = age;
        } else if (age > second_oldest_age) {
            second_oldest_age = age;
        }
    }
    return {second_oldest_age, oldest_age};
}

int main() {
    /*Tests.*/

    two_oldest_ages({1, 5, 87, 45, 8, 8});
    return 0;
}