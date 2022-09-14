// [Kata] https://www.codewars.com/kata/55685cd7ad70877c23000102/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Return Negative

#include <cmath>
#include <iostream>

// First solution.
int makeNegative(int num)
{
    return (num < 0) ? num : num * -1;
}

// Second solution.
int makeNegative2(int num){
    return -abs(num);
}

int main(){
    for(int i = -3; i <3; ++i){
        std::cout << i << " ";
        std::cout << makeNegative(i) << " " << makeNegative2(i);
        std::cout << std::endl;
    }
}