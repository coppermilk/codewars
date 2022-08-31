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
    //Swap letter and add ending.
    for (auto &w: words) {
        w += w[0];
        w.erase(w.begin());
        if(isalpha(w[w.size()-1])){
            w += "ay";
        }

    }
    // Construct answer.
    std::string ans;
    for (auto &w: words) {
        if (words.size() - 1)
            ans.append(  w + " ");
    }
    ans.erase(ans.end() - 1);

    return ans;
}

int main() {
    std::cout << pig_it(" ou.,ek;ke'ke?!"); // "hisTay siay ymay tringsay" .,;"'?!
}