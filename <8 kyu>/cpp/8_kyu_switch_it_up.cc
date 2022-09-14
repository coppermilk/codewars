// [Kata] https://www.codewars.com/kata/5808dcb8f0ed42ae34000031/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Switch it Up!

#include <string>
#include <iostream>

std::string switch_it_up(const int &number){
    /*Number between 0-9, return it in words.*/

    switch(number){
        case 0:
            return "Zero";
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        default:
            return "";
    }
}

int main(){
    /*Tests.*/

    for(int i = 0; i < 10; ++i){
        std::cout << switch_it_up(i) << std::endl;
    }
}