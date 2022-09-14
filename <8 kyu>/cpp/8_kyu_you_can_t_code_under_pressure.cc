// [Kata] https://www.codewars.com/kata/53ee5429ba190077850011d4/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu You Can't Code Under Pressure #1

#include <cstdint>
int32_t double_integer(int32_t n){
    /*Double the integer.*/

    return n << 1;
}

int main(){
    /*Tests.*/

    double_integer(42);
}