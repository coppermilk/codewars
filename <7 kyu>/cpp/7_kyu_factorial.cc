// [Kata] https://www.codewars.com/kata/57a049e253ba33ac5e000212/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Factorial.

long long factorial(int n) {
    /*Function factorial.*/

    return n < 1 ? 1 : n * factorial(n - 1);
}

int main() {
    /*Tests.*/

    factorial(7);
}