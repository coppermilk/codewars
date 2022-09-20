// [Kata] https://www.codewars.com/kata/59cfc000aeb2844d16000075/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Alternate capitalization.


#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s){
    /*Capitalize the letters that occupy even indexes and odd indexes
      separately, and return as shown below. Index 0 will be considered even.*/

    std::string s1;
    std::string s2;
    int i = 0;
    for(const auto ch : s){
        if(i % 2){
            s1 += ch;
            s2 += (char)toupper(ch);
        }else{
            s1 += (char)toupper(ch);
            s2 += ch;
        }
        i++;
    }
    return {s1, s2};
}

int main(){
    /*Tests.*/

    capitalize("codewars");
}