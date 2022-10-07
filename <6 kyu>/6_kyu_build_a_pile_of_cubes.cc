// [Kata] https://www.codewars.com/kata/5592e3bd57b64d00f3000047/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Build a pile of Cubes.

#include <iostream>

class ASum {
private:
    static long long pow(long long base, long long exponent) {
        long long number = 1;
        for (int i = 0; i < exponent; ++i) {
            number *= base;
        }
        return number;
    }

public:
    static long long findNb(long long m) {
        long long current_volume = 0;
        long long flor = 0;
        while (current_volume < m) {
            current_volume += pow(++flor, 3);
        }
        return current_volume == m ? flor : -1;
    }
};

int main() {
    std::cout << ASum::findNb(1 + 8 + 27);
    return 0;
}