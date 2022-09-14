// [Kata] https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Remove First and Last Character

#include <string>
#include <algorithm>

using namespace std;

string sliceString(const string &str) {
    return str.substr(1, str.size() - 2);
}

int main() {
    sliceString("1234");
}