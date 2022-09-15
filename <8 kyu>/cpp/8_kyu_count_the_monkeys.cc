// [Kata] https://www.codewars.com/kata/56f69d9f9400f508fb000ba7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Count the Monkeys!

#include <vector>
#include <numeric>

std::vector<int> MonkeyCount(int n) {
    /*Given the number (n), populate an array with all numbers up
      to and including that number, but excluding zero.*/

    std::vector<int> v(n);
    std::iota(v.begin(), v.end(), 1);
    return v;
}

int main(){
    /*Tests.*/

    MonkeyCount(20);
}