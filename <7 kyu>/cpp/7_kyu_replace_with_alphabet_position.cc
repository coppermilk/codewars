// [Kata] https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Replace With Alphabet Position

#include <string>
#include <iostream>

std::string alphabet_position(const std::string &text) {
    std::string ans;
    for(auto ch : text){
        if(isalpha(ch)){
            ans += std::to_string(ch - (islower(ch) ? 'a' : 'A') + 1);
            ans += " ";
        }
    }
    ans.pop_back();
    return ans;
}

int main() {
    /*Tests.*/
    std::cout << alphabet_position("The sunset sets at twelve o' clock.");
    return 0;
}