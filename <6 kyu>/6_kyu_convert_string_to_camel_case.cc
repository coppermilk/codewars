// [Kata] https://www.codewars.com/kata/517abf86da9663f1d2000003/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Convert string to camel case

#include <string>
#include <iostream>

std::string to_camel_case(const std::string& text) {
    /*Converts dash/underscore delimited words into camel casing.*/
    std::string camel_case;
    bool next_ch_toupper = false;
    for(char ch : text){
        switch(ch){
            case '-':
            case '_':
                next_ch_toupper = true;
                break;
            default:
                if(next_ch_toupper){
                    camel_case += (char)toupper(ch);
                    next_ch_toupper = false;
                }else{
                    camel_case += ch;
                }
        }
    }
    return camel_case;
}

int main(){
    /*Tests.*/
    std::cout << to_camel_case("The-Stealth-Warrior");
    return 0;
}