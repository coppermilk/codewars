// [Kata] https://www.codewars.com/kata/57ee24e17b45eff6d6000164/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Cat and Mouse - Easy Version.

#include <string>

std::string cat_mouse(std::string x) {
    /*Find out if the cat can catch the mouse from its current position.*/
    int cat_position = 0;
    int mouse_position = 0;
    for (unsigned long i = 0; i < x.size(); ++i) {
        if (x[i] == 'C') {
            cat_position = i;
        } else if (x[i] == 'm') {
            mouse_position = i;
        }
    }
    return std::abs(cat_position - mouse_position) <= 4 ? "Caught!" : "Escaped!";
}

int main() {
    /*Tests.*/
    cat_mouse("C....m");
}