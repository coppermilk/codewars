// [Kata] https://www.codewars.com/kata/52ea928a1ef5cfec800003ee/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu IPv4 to int32.

#include <cstdint>
#include <string>
#include <iostream>

uint32_t ip_to_int32(const std::string &ip) {
    /*Takes an IPv4 address and returns a 32bit number.*/
    unsigned octets[4];
    if (sscanf(ip.c_str(), "%u.%u.%u.%u", &octets[0], &octets[1], &octets[2], &octets[3]) != 4) {
        return 0;
    }
    uint32_t ans = 0;
    for (unsigned int octet : octets) {
        ans <<= 8;
        ans += octet;
    }
    return ans;
}

int main() {
    std::cout << ip_to_int32("128.32.10.1");
}