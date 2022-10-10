// [Kata] https://www.codewars.com/kata/52fba66badcd10859f00097e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Disemvowel Trolls.

# include <string>

std::string disemvowel(const std::string& str) {
    std::string disemvowel;
    for(auto ch : str){
        switch(tolower(ch)){
            case 'a':
            case 'o':
            case 'e':
            case 'u':
            case 'i':
                break;
            default:
                disemvowel += ch;
        }
    }
    return disemvowel;
}

int main() {
    /*Tests.*/

    disemvowel("This website is for losers LOL!");
    return 0;
}