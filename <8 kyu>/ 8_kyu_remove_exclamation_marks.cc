// [Kata] https://www.codewars.com/kata/57a0885cbb9944e24c00008e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Remove exclamation marks.

#include <string>
#include <iostream>

std::string removeExclamationMarks(std::string str){
    /*Removes all exclamation marks from a given string.*/

    str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
    return str;
}

int main(){
    /*Tests*/

    std::cout << removeExclamationMarks("The! T!est!!!");
}