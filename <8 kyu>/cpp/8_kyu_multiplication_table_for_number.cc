// [Kata] https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Multiplication table for number

#include <string>
#include <sstream>

// First solution.
std::string multi_table(int number) {
    /*Create multiplication table for number.*/

    std::ostringstream os;
    for (int i = 1; i <= 10; i++) {
        os << i << " * " << number << " = " << i * number << (i != 10 ? "\n" : "");
    }

    return os.str(); // good luck
}

// Second solution.
std::string multi_table2(int number) {
    /*Create multiplication table for number.*/

    std::string ans;
    for (int i = 1; i <= 10; ++i) {
        ans += std::to_string(i) + " * " + std::to_string(number) + " = " + std::to_string(i * number) + "\n";
    }
    ans.pop_back();
    return ans;
}

int main() {
    /*Tests.*/

    multi_table(6);
    multi_table2(6);
    return 0;
}