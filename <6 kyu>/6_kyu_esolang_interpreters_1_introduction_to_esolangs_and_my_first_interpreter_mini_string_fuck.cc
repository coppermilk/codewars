// [Kata] https://www.codewars.com/kata/586dd26a69b6fd46dd0000c0/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Esolang Interpreters #1 - Introduction to Esolangs and My First Interpreter (MiniStringFuck).

#include <string>
#include <iostream>

std::string my_first_interpreter(const std::string &code) {
    /*Esolang interpreter.*/
    std::string ans;
    unsigned char cell = 0;
    for (auto &ch : code) {
        if (ch == '+') {
            ++cell;
        } else if(ch == '.') {
            ans += (char) cell;
        }
    }
    return ans;
}

int main() {
    /*Tests.*/
    std::string code = "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+++++++++++++++++++++++++++++.+++++++..+++.+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+++++++++++++++++++++++++++++++++++++++++++++++++++++++.++++++++++++++++++++++++.+++.++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.";
    std::cout << my_first_interpreter(code);
}