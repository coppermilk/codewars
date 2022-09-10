// [Kata] https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Even or Odd

#include <string>
#include <iostream>

std::string even_or_odd(int number)
{
    return (number % 2) ? "Odd" : "Even";
}

int main(){
    for(int i = -3; i < 3; ++i){
        std::cout << i << " " << even_or_odd(i) << std::endl;
    }
    return 0;
}