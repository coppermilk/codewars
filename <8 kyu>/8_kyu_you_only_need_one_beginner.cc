// [Kata] https://www.codewars.com/kata/57cc975ed542d3148f00015b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu You only need one - Beginner

#include <vector>
#include <string>
#include <algorithm>

// First solution.
bool check(const std::vector<std::string>& seq, const std::string& elem) {
    /*Check whether the provided array contains the value.*/

    for(const auto& ch : seq){
        if(ch == elem){
            return true;
        }
    }
    return false;

}

// Second solution.
bool check2(const std::vector<std::string>& seq, const std::string& elem) {
    /*Check whether the provided array contains the value.*/

   return std::find(seq.cbegin(), seq.cend(), elem) != seq.end();
}
int main(){
    /*Tests.*/

    check({"a", "b", "c"},  "b");
    check2({"a", "b", "c"},  "b");
    return 0;
}