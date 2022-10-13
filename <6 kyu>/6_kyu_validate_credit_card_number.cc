// [Kata] https://www.codewars.com/kata/5418a1dd6d8216e18a0012b2/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Validate Credit Card Number.

#include <iostream>

class Kata {
private:
    static long long sum_digits_in(long long int n) {
        /*Sum digits in number.*/
        long long int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
public:
    static bool validate(long long int n) {
        /* Validate Credit Card Number.
           Luhn Algorithm.*/
        long long sum = 0;
        for (int i = 0; n; ++i) {
            long long current = n % 10;
            if (i % 2) {
                current *= 2;
                if (current >= 10) {
                    current = sum_digits_in(current);
                }
            }
            sum += current;
            n /= 10;
        }
        return !(sum % 10);
    }
};

int main(){
    /*Tests.*/
    std::cout << Kata::validate(2121);
    return 0;
}