// [Kata] https://www.codewars.com/kata/52e88b39ffb6ac53a400022e/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <string>
#include <iostream>
#include <bitset>

uint32_t cycle_shift(const uint32_t byte, const int shift) {
    /* Cycle_shift uint32_t to right.*/

    return (byte >> shift) | (byte << (32 - shift));
}

std::string uint32_to_ip(uint32_t ip) {
    /* Transform unsigned 32 bit number to string representation of its IPv4 address.*/

    const short OCTET_IN_uint32_t = 4;
    const uint32_t first_octet_mask = 0x000000FF;
    unsigned char ip_arr[OCTET_IN_uint32_t] = {0};

    // Parse number.
    int k = OCTET_IN_uint32_t;
    for (int i = 0; i < 32; i += 8) {
        ip_arr[--k] = (first_octet_mask & cycle_shift(ip, i));

        /* In this "Clang 8 C++17" on CodeWars mast to write this block,
            on all other is not necessary */
        /*---------------------------log--------------------------------*/
        std::bitset<32> x((first_octet_mask & cycle_shift(ip, i)));
        std::cout << x << std::endl;
        std::bitset<32> y((cycle_shift(ip, i)));
        std::cout << y << std::endl;
        /*--------------------------------------------------------------*/

    }

    // Construct ip_string.
    std::string ip_str;
    for (int i = 0; i < 4; ++i) {
        if (i) {
            ip_str += '.' + std::to_string(ip_arr[i]);
        } else {
            ip_str += std::to_string(ip_arr[i]);
        }
    }
    return ip_str;

}

int main() {

    // Should return "128.32.10.1", "0.0.0.32", "0.0.0.0", "128.114.17.104".
    uint32_t test[]{2149583361, 32, 0, 2154959208};

    int size = sizeof(test) / sizeof(test[0]);
    for (int i = 0; i < size; ++i) {
        std::cout << uint32_to_ip(test[i]) << std::endl;
    }

    return 0;
}
