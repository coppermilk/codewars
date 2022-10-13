#include <iostream>
#include <vector>

class Thirteen {
public:
    static long long thirt(long long n) {
        /* Function which processes this sequence of operations on an integer n (>=0).
         * Thirt will return the stationary number.*/

        const int SIZE = 6;
        const long long cycle[SIZE] = {1, 10, 9, 12, 3, 4};

        while (true) {
            std::vector<long> digits;
            long long n_before_processing = n;
            while (n) {
                digits.push_back(n % 10);
                n /= 10;
            }
            long long sum = 0;
            for (unsigned long i = 0; i < digits.size(); ++i) {
                sum += digits[i] * cycle[i % SIZE];
            }
            n = sum;
            if (n == n_before_processing) {
                break;
            }
        }
        return n;
    }
};

int main() {
    std::cout << Thirteen::thirt(987654321);
}