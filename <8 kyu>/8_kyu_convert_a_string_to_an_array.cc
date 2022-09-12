// [Kata] https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Convert a string to an array.

#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> string_to_array(const std::string& s) {
    /*Split a string and convert it into an array of words.*/

    std::vector<std::string> ans;
    if(s.empty()){
        ans.emplace_back("");
        return ans;
    }else{
        std::stringstream words(s);
        std::string word;

        while(words >> word){
            ans.push_back(word);
        }
        return ans;
    }
}

int main(){
    /*Tests.*/

    string_to_array("the best of me");
}
