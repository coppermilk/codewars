// [Kata] https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Reverse or rotate?

#include <string>
#include <iostream>
#include <algorithm>

class RevRot {
private:
    static std::string rotate(std::string str) {
        str += str[0];
        return str.substr(1, str.size() - 1);
    }

    static std::string reverse(std::string str) {
        std::reverse(str.begin(), str.end());
        return str;
    }

    static unsigned long long pow(unsigned long long base, unsigned long long exponent) {
        unsigned long long num = 1;
        for (unsigned long i = 0; i < exponent; ++i) {
            num *= base;
        }
        return num;
    }

    static unsigned long long sum_cubes_digits_in(unsigned long long num) {
        unsigned long long sum = 0;
        while (num) {
            sum += pow(num % 10, 3);
            num /= 10;
        }
        return sum;
    }

public:
    static std::string revRot(const std::string &str, unsigned int size) {
        if (size <= 0 || size > str.size()) {
            return "";
        } else {
            std::string rev_rot;
            for (unsigned long i = 0; i < str.size() / size; ++i) {
                std::string current_chunk = str.substr(i * size, size);
                unsigned long long current_num = strtol(current_chunk.c_str(), nullptr, 10);
                std::cout << current_chunk;
                if (sum_cubes_digits_in(current_num) % 2) {
                    current_chunk = rotate(current_chunk);
                } else {
                    current_chunk = reverse(current_chunk);
                }
                std::cout << "-->" << current_chunk << std::endl;
                rev_rot += current_chunk;
            }
            return rev_rot;
        }
    }
};

int main() {
    //std::cout << RevRot::sum_cubes_digits_in(73304);
    std::cout << RevRot::revRot("733049910872815764", 5);
}