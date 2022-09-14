// [Kata] https://www.codewars.com/kata/57eae65a4321032ce000002d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Fake Binary.

#include <string>

std::string fakeBin(std::string str){
    /*Given a string of digits, you should replace any digit below 5 with '0'
      and any digit 5 and above with '1'. Return the resulting string.*/

    for(auto& ch : str){
        ch < '5' ? ch = '0' : ch = '1';
    }
    return str;
}

int main() {
    /*Tests.*/

    fakeBin("45385593107843568");
    return 0;
}