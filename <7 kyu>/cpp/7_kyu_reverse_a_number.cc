// [Kata] https://www.codewars.com/kata/555bfd6f9f9f52680f0000c5/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Reverse a Number.

long long reverseNumber(long long n) {
    /*Output its reverse digits. (e.g. given 123 the answer is 321)*/

    long long r = 0;
    while (n) {
        r *= 10;
        r += (n % 10);
        n /= 10;
    }
    return r;
}

int main() {
    /*Tests.*/

    reverseNumber(-1234);
    return 0;
}