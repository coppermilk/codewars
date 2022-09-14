// [Kata] https://www.codewars.com/kata/56f699cd9400f5b7d8000b55/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu My head is at the wrong end!

#include <array>
#include <string>

using ary = std::array<std::string, 3>;

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
    /* Revers array.*/

    unsigned int len = arr.size();
    for(unsigned int i = 0; i <= len / 2; ++i){
        std::swap(arr[i], arr[len - i - 1]);
    }
    return arr;
}

int main(){
    /*Tests.*/

    fixTheMeerkat(ary { "tail", "body", "head" });
    return 0;
}