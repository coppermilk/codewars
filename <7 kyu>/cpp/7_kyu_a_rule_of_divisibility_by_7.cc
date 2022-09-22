// [Kata] https://www.codewars.com/kata/55e6f5e58f7817808e00002e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu A Rule of Divisibility by 7.

#include <utility>

class DivSeven {
public:
    static std::pair<long long, long long> seven(long long m) {
        long long steps = 0;
        while (m >= 100) {
            long long last_digit = m % 10;
            m /= 10;
            m -= 2 * last_digit;
            ++steps;
            if (m % 7 == 0 && m < 100) {
                break;
            }
        }
        return std::make_pair(m, steps);
    }
};

int main() {
    DivSeven::seven(1021);
}