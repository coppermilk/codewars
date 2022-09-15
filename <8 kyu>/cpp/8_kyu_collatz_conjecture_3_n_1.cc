// [Kata] https://www.codewars.com/kata/577a6e90d48e51c55e000217/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Collatz Conjecture (3n+1).

unsigned int hotpo(unsigned int n) {
    /*Takes a positive n as input and returns the number of times
      you need to perform this algorithm to get n = 1.*/

    if (n == 0) return 0; //Optional Handler to n = 0
    int times = 0;
    while (n != 1) {
        if (n % 2) {
            n = (3 * n) + 1;
        } else {
            n /= 2;
        }
        ++times;
    }
    return times;
}

int main() {
    /*Tests.*/

    hotpo(23);
}