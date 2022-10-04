// [Kata] https://www.codewars.com/kata/5805ed25c2799821cb000005/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Birthday I - Cake.

#include <string>
#include <iostream>

// Readable solution.
std::string cake(int candles, std::string y) {
    int sum = 0;
    for (unsigned long i = 0; i < y.size(); ++i) {
        if (i % 2) {
            sum += (int)i + 1;
        } else {
            sum += y[i];
        }
    }
    return (candles * 0.7) < sum ? "Fire!" : "That was close!";
}

// Non readable solution.
std::string cake2(int candles, std::string y) {
    int sum = 0;
    for (unsigned long i = 0; i < y.size(); ++i) {
        i % 2 ? sum += (int)i + 1 : sum += y[i];
    }
    return (candles * 0.7) < sum ? "Fire!" : "That was close!";
}

int main() {
    //"abc"  -->  "a" = 97, "b" = 2, "c" = 99  -->  total = 198
    std::cout << cake(900, "abc");
    std::cout << cake2(900, "abc");
    std::cout <<cake(56, "ifkhchlhfd");
    std::cout <<cake(256, "aaaaaddddr");
}