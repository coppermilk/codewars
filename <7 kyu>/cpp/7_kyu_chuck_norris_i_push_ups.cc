#include <string>
#include <iostream>
#include <sstream>
#include <climits>
#include <cmath>

int pow(int base, int exp) {
    /*Return power of base and exp.*/

    int number = 1;
    for (int i = 0; i < exp; ++i) {
        number *= base;
    }
    return number;
}

int word_to_binary(std::string word) {
    /* Extract string to binary numer and return decimal int.
    Still pass in the case that the binary is mixed up with other
    characters - maybe Chuck has a cough... e.g.:
    "1ee1gf00t10h1011tr00" -> "110010101100" -> 3244. */

    // Extract binary number.
    unsigned int len = word.size();
    std::string binary_number;
    for (unsigned int i = 0; i < len; ++i) {
        if (word[i] == '0' || word[i] == '1') {
            binary_number += word[i];
        }
    }

    //Binary number to dec.
    int sum = 0;
    if (binary_number.empty()) {
        return -1;
    } else {
        len = binary_number.length();
        int bit_shift = 0;
        for (unsigned int i = len - 1; i != UINT_MAX; --i) {
            sum += (binary_number[i] - '0') * pow(2, bit_shift);
            bit_shift++;
        }
    }
    return sum;
}

int chuckPushUps(const std::string &input) {
    /*Return max binary number in string.*/

    std::stringstream words(input);
    std::string word;
    int max_num = -1;

    while (words >> word) {
        max_num = std::max(max_num, word_to_binary(word));
    }
    return max_num;
}

int main() {
    std::cout << chuckPushUps(
            " 01111101000 Hi 01111101001 Chuck look at you go! 01111101010 Phwoar 01111101100 How was work? 01111101101");
}