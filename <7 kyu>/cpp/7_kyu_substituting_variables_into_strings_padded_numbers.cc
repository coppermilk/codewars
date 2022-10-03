// [Kata] https://www.codewars.com/kata/51c89385ee245d7ddf000001/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Substituting Variables Into Strings: Padded Numbers.

#include <string>
#include <iostream>

std::string solution(int n) {
    /*Return value should equal "Value is VALUE"
      where value is a 5 digit padded number.*/

    std::string solution = "Value is ";
    std::string number = std::to_string(n);

    for(unsigned long i = number.size(); i < 5; ++i){
        solution += '0';
    }
    return solution + number;
}

int main(){
    /*Tests.*/
    std::cout << solution(0);
}