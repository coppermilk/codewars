// [Kata] https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu If you can't sleep, just count sheep!!

#include <string>
#include <iostream>

std::string countSheep(const int &number) {
    /* Return a string with a murmur: "1 sheep...2 sheep... .... [number]sheep...".*/

    std::string base = " sheep...";
    std::string ans;
    for (int i = 1; i <= number; ++i){
        ans += std::to_string(i) + base;
    }
    return ans;
}

int main(){
    /*Tests.*/

    std::cout << countSheep(2);
}