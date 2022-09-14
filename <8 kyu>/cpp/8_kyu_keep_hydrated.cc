// [Kata] https://www.codewars.com/kata/582cb0224e56e068d800003c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Keep Hydrated!

int litres(double time) {
    /*Number of litres Nathan will drink, rounded to the smallest value.*/

    return (int) time / 2;
}

int main() {
    /*Tests.*/

    litres(65.5);
    return 0;
}