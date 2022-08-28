// [Kata] https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <string>
#include <climits>
#include <iostream>

std::string duplicate_encoder(const std::string &word) {
    std::string encode_word;
    size_t character_count[CHAR_MAX] = {0};

    for (auto &c: word) {
        ++character_count[std::tolower(c)];
    }
    for (auto &c: word) {
        if (character_count[::tolower(c)] > 1) {
            encode_word.push_back(')');
        } else {
            encode_word.push_back('(');
        }
    }

    return encode_word;
}

int main() {

    // "din"      =>  "(((".
    // "recede"   =>  "()()()".
    // "Success"  =>  ")())())".
    // "(( @"     =>  "))((".

    std::cout << duplicate_encoder("din") << std::endl;
    std::cout << duplicate_encoder("recede") << std::endl;
    std::cout << duplicate_encoder("Success") << std::endl;
    std::cout << duplicate_encoder("(( @") << std::endl;


    return 0;
}
