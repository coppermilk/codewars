// [Kata] https://www.codewars.com/kata/51f2b4448cadf20ed0000386/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Remove anchor from URL.

#include <string>
#include <iostream>

std::string replaceAll(const std::string &str) {
    /*Returns the url with anything after the anchor (#) removed.*/

    return str.substr(0, str.find('#'));
}

int main(){
    /*Tests.*/

    std::cout << replaceAll("www.codewars.com#about");
}