// [Kata] https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// <8 kyu> Abbreviate a Two Word Name.

#include <sstream>
#include <string>

// First solution.
std::string abbrevName(const std::string &name){
    /*Convert a name into initials.*/

    std::stringstream names(name);
    std::string n;
    std::string ans;
    while (names >> n){
        ans += (char)toupper(n[0]);
        ans += ".";
    }
    ans.pop_back();
    return ans;
}

// Second solution.
std::string abbrevName2(const std::string &name){
    /*Convert a name into initials.*/

    bool first_name = true;
    std::string ans;
    for(unsigned long i = 0; i < name.size(); ++i){
        if(first_name){
            ans += (char)toupper(name[0]);
            ans += ".";
            first_name = false;
        }else if(name[i] == ' '){
            ans += (char)toupper(name[++i]);
            break;
        }
    }
    return ans;
}

int main(){
    /*Tests.*/

    abbrevName("Evgeniy Ant");
    abbrevName2("the main");

    return 0;
}