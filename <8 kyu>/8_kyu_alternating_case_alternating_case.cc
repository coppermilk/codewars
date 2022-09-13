// [Kata] https://www.codewars.com/kata/56efc695740d30f963000557/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu altERnaTIng cAsE <=> ALTerNAtiNG CaSe.

#include <string>

std::string to_alternating_case(const std::string str){
    /*Such that each lowercase letter becomes uppercase
      and each uppercase letter becomes lowercase.*/

    std::string ans;
    for(auto& ch : str){
        ans += (isupper(ch)) ? (char)tolower(ch) : (char)toupper(ch);
    }
    return ans;
}

int main() {
    /*Tests.*/

    to_alternating_case("altERnaTIng cAsE");
    return 0;
}