// [Kata] https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Count characters in your string.

#include <string>
#include <map>

std::map<char, unsigned> count(const std::string& string) {
    /*Count characters in string.*/
    std::map<char, unsigned> chars_count;
    for(auto &ch : string){
        ++chars_count[ch];
    }
    return chars_count;
}

int main() {
    count("()[]([{}()])");
    return 0;
}
