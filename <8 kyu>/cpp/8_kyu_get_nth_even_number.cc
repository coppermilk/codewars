// [Kata] https://www.codewars.com/kata/5933a1f8552bc2750a0000ed/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Get Nth Even Number.

int nthEven(const int &n) {
    /*Return the Nth Even Number.*/
    return (n - 1) * 2;
}

int main() {
    /*Tests.*/

    nthEven(1000);
    return 0;
}