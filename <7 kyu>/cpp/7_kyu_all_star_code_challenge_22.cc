// [Kata] https://www.codewars.com/kata/5865cff66b5699883f0001aa/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu All Star Code Challenge #22

#include <string>

std::string to_time(unsigned seconds) {
    return std::to_string(seconds / 3600) + " hour(s) and " + std::to_string((seconds / 60) % 60) + " minute(s)";
}