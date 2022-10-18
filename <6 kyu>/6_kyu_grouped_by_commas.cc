// [Kata] https://www.codewars.com/kata/5274e122fc75c0943d000148/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Grouped by commas.

#include <string>

std::string group_by_commas(int n){
    /* Takes an input n (integer) and returns a string that is the decimal
    representation of the number grouped by commas after every 3 digits.*/
    const int groupe = 3;
    std::string ans = std::to_string(n);
    for(int i = (int)ans.size() - groupe; i > 0; i -= groupe){
        ans.insert(i, ",");
    }
    return ans;
}

int main(){
    /*Tests.*/
    group_by_commas(1234567890);
}