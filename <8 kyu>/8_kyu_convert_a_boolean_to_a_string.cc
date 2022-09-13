// [Kata] https://www.codewars.com/kata/551b4501ac0447318f0009cd/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Convert a Boolean to a String.

#include <string>

std::string boolean_to_string(const bool &b) {
    /*Convert the given boolean value into its string representation.*/

    return b ? "true" : "false";
}

int main() {
    /*Tests.*/

    boolean_to_string(0);
    return 0;
}