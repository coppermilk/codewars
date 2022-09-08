// [Kata] https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <string>
#include <sstream>

std::string reverse_words(const std::string &str) {
    /*Reverses all of the words within the string.*/

    std::string ans;
    std::string word;
    std::stringstream words(str);

    while (words >> word) {
        ans = word + " " + ans;
    }
    //ans.erase(ans.begin() + ans.size() - 1);
    ans.pop_back();
    return ans;
}

int main() {
    reverse_words("yoda doesn't speak like this");
}