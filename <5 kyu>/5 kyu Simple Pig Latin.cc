// [Kata] https://www.codewars.com/kata/520b9d2ad5c005041100000f/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

std::string pig_it(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::vector<std::string> words;

    // Extract words.
    while (ss >> word) {
        words.push_back(word);
    }

    // Find end word.
    for (auto &w: words) {
        unsigned long end_index = 0;
        while (!std::isalpha(w[w.size() - end_index]) && end_index < w.size()) {
            ++end_index;
        }

        // Change the end of a word and remove first letter.
        std::string tmp;
        tmp.push_back(w[0]);
        if(std::isalpha(w[0])){
            tmp += "ay";
        }
        w.insert(w.size() - end_index + 1, tmp);
        w.erase(w.begin());

    }

    // Construct answer.
    std::string ans;
    for(unsigned long i = 0; i < words.size(); ++i){
        if(i == words.size() -1){
            ans += words[i];
        }else{
            ans = (ans + words[i] + " ");
        }
    }
    return ans;

}

int main() {
    // Should return "histay. histay, histay; e'kekay? histay! ;";
    std::cout << pig_it("this. this, this; ke'ke? this! ;");

}
