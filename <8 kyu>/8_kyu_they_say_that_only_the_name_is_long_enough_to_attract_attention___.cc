// [Kata] https://www.codewars.com/kata/574b1916a3ebd6e4fa0012e7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu They say that only the name is long enough to attract attention.
// They also said that only a simple Kata will have someone to solve it. This is a sadly story #1: Are they opposite?

#include <string>


// First solution.
bool isOpposite(const std::string& s1, const std::string& s2) {
    /*The opposite means: All letters of the two strings are the same, but the case is opposite.*/

    if((s1.size() != s2.size()) || s1.empty() ||s2.empty()){
        return false;
    }else{
        unsigned long len = s1.size();
        for(unsigned long i = 0; i < len; ++i){
            if (s1[i] != s2[i] && tolower(s1[i]) == tolower(s2[i])){
                continue;
            }else{
                return false;
            }
        }
    }
    return true;
}

//Second solution.
bool isOpposite2(const std::string& s1, const std::string& s2) {
    /*The opposite means: All letters of the two strings are the same, but the case is opposite.*/

    if((s1.size() != s2.size()) || s1.empty() ||s2.empty()){
        return false;
    }else{
        unsigned long len = s1.size();
        for(unsigned long i = 0; i < len; ++i){
            if (abs(s1[i] - s2[i]) != 32){
                return false;
            }
        }
    }
    return true;
}

int main() {
    /*Tests.*/

    isOpposite("aBcde", "AbCD");
    isOpposite2("aBcde", "AbCD");
    return 0;
}