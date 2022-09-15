// [Kata] https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Binary Addition

#include <cstdint>
#include <string>
#include <fmt/core.h>

// First solution.
std::string add_binary(const uint64_t &a, const uint64_t &b) {
    /*Adds two numbers together and returns their sum in binary*/

    uint64_t sum = a + b;
    if (sum) {
        std::string ans;
        const uint64_t BIT_MASK = 0b00000001;
        while (sum) {
            sum & BIT_MASK ? ans.insert(ans.begin(), '1') : ans.insert(ans.begin(), '0');
            sum >>= 1;
        }
        return ans;
    } else {
        return "0";
    }
}

// Second solution.
std::string add_binary2(const uint64_t &a, const uint64_t &b) {
    /*Adds two numbers together and returns their sum in binary*/

    return fmt::format("{:b}", a + b);
}

// Third solution.
std::string add_binary3(const uint64_t &a, const uint64_t &b) {
    /*Adds two numbers together and returns their sum in binary*/

    uint64_t sum = a + b;
    std::string ans;
    const uint64_t BIT_MASK = 0b00000001;
    do {
        sum & BIT_MASK ? ans.insert(ans.begin(), '1') : ans.insert(ans.begin(), '0');
        sum >>= 1;
    } while (sum);
    return ans;
}

int main() {
    /*Tests.*/

    add_binary(51, 12);
    add_binary2(51, 12);
    add_binary3(51, 12);
    return 0;
}