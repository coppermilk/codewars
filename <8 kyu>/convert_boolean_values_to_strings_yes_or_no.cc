// [Kata] https://www.codewars.com/kata/53369039d7ab3ac506000467/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Convert boolean values to strings 'Yes' or 'No'.

#include <string>
#include <iostream>

std::string bool_to_word(bool value)
{
    return value  ? "Yes" : "No";
}

int main(){
    std::cout << bool_to_word(true) << std::endl;
    std::cout << bool_to_word(false) << std::endl;
    return 0;
}