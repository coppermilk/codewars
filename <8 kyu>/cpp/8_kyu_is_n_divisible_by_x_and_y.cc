// [Kata] https://www.codewars.com/kata/5545f109004975ea66000086/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Is n divisible by x and y?

bool isDivisible(const int &n, int const&x, const int &y) {
    /*Checks if a number n is divisible by two numbers x AND y.*/

    return !(n % x) && !(n % y);
}

int main(){
    /*Tests.*/

    isDivisible(3 ,3, 4);
    isDivisible(100, 3, 7);
}