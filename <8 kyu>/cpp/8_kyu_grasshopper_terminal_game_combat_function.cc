// [Kata] https://www.codewars.com/kata/586c1cf4b98de0399300001d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Grasshopper - Terminal game combat function.

#include <string>

int combat(int health, int damage) {
    return (health - damage > 0) ? (health - damage) : 0;
}

int combat2(int health, int damage) {
    return std::max(0, health - damage);
}

int main() {
    /*Tests.*/

    combat(100, 5);
    combat2(100, 5);
}