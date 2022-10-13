#include <string>
#include <iostream>

//
// Created by zvgdb on 13.10.22.
//
bool is_palindrome(const std::string &str){
    /* Is word palindrome. */
    for(unsigned long i = 0; i < str.size() / 2; ++i){
        if(str[i] != str[str.size() - 1 -i]){
            return false;
        }
    }
    return true;
}

int longest_palindrome(const std::string &s){
    /*Find the length of the longest substring in the given string s that is the same in reverse.*/
    for(int count_ch = s.size(); count_ch >= 0; --count_ch){
        for(unsigned long i = 0; i <= s.size() - count_ch; ++i){
            if(is_palindrome(s.substr(i, count_ch))){
                return count_ch;
            }
        }
    }
    return 0;
}

int main(){
    std::cout << longest_palindrome("abcdefghijklmnopqrstuvwxyz lolollolollolollolol");
}