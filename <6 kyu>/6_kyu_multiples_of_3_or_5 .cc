// [Kata] https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Multiples of 3 or 5

#include <iostream>

int sum_all_numbers_less_n_than_divides_d(int n, int d) {
    /*
     * Consider; the sum of all numbers from 1 to n is equal to n*(n+1)/2.
     * Also, the sum of all numbers less than n that divides d
     * equals d times the sum of all numbers less than n/d.
     */

    --n;
    return d * (n / d) * ((n / d) + 1) / 2;
}

int solution(int number) {
    /*
     * Adding the two numbers would overcount though. Since the numbers that
     * divides both 3 and 5 would get counted twice. The numbers that divides
     * both 3 and 5 is precisely the numbers that divides 3*5/gcd(3,5)=15/1=15.
     */
    return sum_all_numbers_less_n_than_divides_d(number, 3) +
           sum_all_numbers_less_n_than_divides_d(number, 5) -
           sum_all_numbers_less_n_than_divides_d(number, 15);

}

int main() {
    std::cout << solution(10);
}