#include <iostream>
#include <string>
#include <vector>

std::string solution(int number) {
    // Convert the number to a roman numeral.

    //  Roman      Arabic
    //    I          1
    //    V          5
    //    X          10
    //    L          50
    //    C          100
    //    D          500

    std::string ans;
    int arabic[] = {1000, 900, 500, 400,  100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string roman[] = {"M", "CM",  "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int size = sizeof(roman) / sizeof(roman[0]);
    for (int i = 0; i < size; ++i) {
        // Search roman value.
        while (number - arabic[i] >= 0) {
            ans += roman[i];
            number -= arabic[i];
        }
    }
    return ans;
}

int main() {
    for (int i = 1; i <= 100; ++i) {
        std::cout << i << ":" << solution(i) << std::endl;
    }
    return 0;
}