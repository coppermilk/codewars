// [Kata] https://www.codewars.com/kata/555a67db74814aa4ee0001b5/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Is it even?

#include <cmath>

// First solution.
bool is_even(double n){
    return fmod(n, 2.0) == 0;
}

// Second solution.
bool is_even2(double n){
    /*The function needs to return either a true or false.
      Numbers may be positive or negative, integers or floats.
      Floats with decimal part non equal to zero are considered UNeven for this kata.*/

    if((long)n != n){
        return false;
    }else{
        return !((long)n % 2);
    }
}

int main(){
    /*Tests.*/
    is_even(2.1);
    is_even2(2.1);
}