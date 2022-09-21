// [Kata] https://www.codewars.com/kata/5500d54c2ebe0a8e8a0003fd/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Greatest common divisor!

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

/*
std::vector<long long> prime_factors(long long &n) {
    //Efficient program to print all prime factors of a given number.

    std::vector<long long> prime_factors;
    long long c = 2;
    while (n > 1) {
        if (n % c == 0) {
            prime_factors.push_back(c);
            n /= c;
        } else c++;
    }
    return prime_factors;
}

long long mygcd(long long a, long long b) {
    //Find the greatest common divisor of two positive integers.

    std::vector<long long> prime_fact_a = prime_factors(a);
    std::vector<long long> prime_fact_b = prime_factors(b);
    std::vector<long long> prime_fact_intersection;
    std::set_intersection(prime_fact_a.begin(), prime_fact_a.end(),
                          prime_fact_b.begin(), prime_fact_b.end(),
                          std::back_inserter(prime_fact_intersection));
    return std::accumulate(prime_fact_intersection.begin(), prime_fact_intersection.end(), 1, std::multiplies());
}
*/


long long mygcd(long long a, long long b) {
    /*Euclidean algorithm.*/

    while (a && b) {
        a >= b ? a -= b : b -= a;
    }
    return a | b;
}

int main() {
    std::cout << mygcd(3963098693397091724, 9006887071706196461);
}