// [Kata] https://www.codewars.com/kata/59cfc09a86a6fdf6df0000f1/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Indexed capitalization

#include <string>
#include <vector>

std::string capitalize(std::string s, const std::vector<int>& idxs){
    /*Capitalize all letters at the given indices.*/
    for(unsigned long idx : idxs){
        if(idx < s.size()){
            s[idx] = (char)toupper(s[idx]);
        }
    }
    return s;
}

int main(){
    /*Tests.*/
    capitalize("abcdef", std::vector<int> {1, 2, 5});
    return 0;
}