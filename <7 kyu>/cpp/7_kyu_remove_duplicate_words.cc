// [Kata] https://www.codewars.com/kata/5b39e3772ae7545f650000fc/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Remove duplicate words.

#include <string>
#include <sstream>
#include <unordered_set>
#include <iostream>

std::string removeDuplicateWords(const std::string& str){
    /*Remove all duplicate words from a string, leaving only single (first) words entries.*/

    std::unordered_set<std::string> hash;
    std::stringstream words(str);
    std::string word;
    std::string ans;
    do {
        words >> word;
        while (hash.find(word) == hash.end()){
            ans += word + " ";
            hash.insert(word);
        }
    } while (words);
    ans.pop_back();
    return ans;
}

int main(){
    /*Tests.*/

    std::cout << removeDuplicateWords("my cat is cat fat");
}