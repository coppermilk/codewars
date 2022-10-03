// [Kata] https://www.codewars.com/kata/57f75cc397d62fc93d000059/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Char Code Calculation.
#include <string>
#include <iostream>

int calc(const std::string &x) {
    /*Given a string, turn each character into its ASCII character code
      and join them together to create a number - let's call this number total1:
      'ABC' --> 'A' = 65, 'B' = 66, 'C' = 67 --> 656667
      Then replace any incidence of the number 7 with the number 1, and call this number 'total2':
      total1 = 656667
                  ^
      total2 = 656661
              ^
      Then return the difference between the sum of the digits in total1 and total2:*/
    int total_1 = 0;
    int total_2 = 0;
    for (auto ch: x) {
        while (ch) {
            int current_num = ch % 10;
            current_num == 7 ? total_2 += 1 : total_2 += current_num;
            total_1 += current_num;
            ch /= 10;
        }
    }
    return total_1 - total_2;
}

int main() {
    /*Tests.*/

    std::cout << calc("ABC");
}