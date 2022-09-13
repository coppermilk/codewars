// [Kata] https://www.codewars.com/kata/57a4d500e298a7952100035d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Hex to Decimal.

#include <sstream>

int hexToDec(const std::string& hexString) {
    /*Hex to Decimal.*/

    std::stringstream ss;
    ss << std::hex << hexString;
    int ans;
    ss >> ans;
    return ans;
}

int main(){
    /*Tests.*/

    hexToDec("FF");
    return 0;
}