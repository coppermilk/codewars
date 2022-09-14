// [Kata] https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Is the string uppercase?

#include <string>
bool is_uppercase(const std::string &s) {
    /*Method to see whether the string is ALL CAPS.*/

    for(auto &ch : s){
        if(islower(ch)){
            return false;
        }
    }
    return true;
}

int main(){
    /*Tests*/

    is_uppercase("THE");
    return 0;
}