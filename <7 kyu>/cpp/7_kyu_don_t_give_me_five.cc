// [Kata] https://www.codewars.com/kata/5813d19765d81c592200001a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Don't give me five!

#include <iostream>

bool is_number_not_contain_five(int number) {
    /*Check if number not contain 5.*/

    bool is_contain = true;
    while (number) {
        if (std::abs(number % 10) == 5) {
            is_contain = false;
            break;
        }
        number /= 10;
    }
    return is_contain;
}

int dontGiveMeFive(const int &start, const int &end) {
    /*Count of all numbers except numbers with a 5 in it.*/

    int count = 0;
    for (int i = start; i <= end; ++i) {
        if (is_number_not_contain_five(i)) {
            ++count;
        }
    }
    return count;
}

int main(){
    std::cout << dontGiveMeFive(-5, 5);
}