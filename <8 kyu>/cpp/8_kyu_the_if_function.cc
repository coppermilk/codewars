// [Kata] https://www.codewars.com/kata/54147087d5c2ebe4f1000805/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu The 'if' function.

#include <functional>

bool ran_expected;

void Expected() {
    ran_expected = true;
}

void Unexpected() {
    ran_expected = false;
}

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2) {
    /*Calling func1() or func2().*/

    value ? func1() : func2();
}

int main() {
    /*Tests.*/

    _if(true, Expected, Unexpected);
}