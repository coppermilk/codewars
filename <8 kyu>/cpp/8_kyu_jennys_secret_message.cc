// [Kata] https://www.codewars.com/kata/55225023e1be1ec8bc000390/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Jenny's secret message.

#include <string>

std::string greet(const std::string &name) {
    /*Bug fix.*/

    if (name == "Johnny") {
        return "Hello, my love!";
    }
    return "Hello, " + name + "!";
}

int main(){
    /*Tests.*/

    greet("Username");
    return 0;
}