// [Kata] https://www.codewars.com/kata/5a4d303f880385399b000001/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Strong Number (Special Numbers Series #2).

#include <string>
#include <iostream>

using namespace std;

int factorial(int number) {
    int fact_num = 1;
    for (int i = 1; i <= number; ++i) {
        fact_num *= i;
    }
    return fact_num;
}

string strong_num(int number) {
    int sum = 0;
    int number_copy = number;
    while (number_copy) {
        sum += factorial(number_copy % 10);
        number_copy /= 10;
    }
    return sum == number ? "STRONG!!!!" : "Not Strong !!";
}

int main() {
    for (int i = 0; i < 146; i++) {
        std::cout << i << "  " << strong_num(i) << std::endl;
    }
    // strong_num(2);
}
