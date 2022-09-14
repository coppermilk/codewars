// [Kata] https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Is it a palindrome?

#include <string>

bool isPalindrom (const std::string& str){
    /*Checks if a given string (case insensitive) is a palindrome.*/
    unsigned long len = str.size();

    for(unsigned long i = 0; i < len / 2; ++i){
        if(tolower(str[i]) != tolower(str[len - i - 1])){
            return false;
        }
    }
    return true;
}

int main(){
    /*Tests.*/

    isPalindrom("Aba");
}