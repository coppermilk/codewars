// [Kata] https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Count the divisors of a number.

#include <iostream>

int divisors(const int &n){
    /*Count the number of divisors of a positive integer n.*/

    int divisors = 1;
    for(int i = 1; i <= n / 2; ++i){
        if(!(n % i)){
            divisors++;
        }
    }
    return divisors ;
}

int main(){

    std::cout << "Total distinct divisors of 100 are " << divisors(30);
    return 0;
}