// [Kata] https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Is the string uppercase?

#include <stdbool.h>
#include <ctype.h>

bool is_uppercase(const char *source) {
/*Method to see whether the string is ALL CAPS.*/

    while (*source) {
        if (islower(*source)) {
            return false;
        }
        ++source;
    }
    return true;
}

int main() {
    /*Tests*/

    is_uppercase("THE");
    return 0;
}