// [Kata] https://www.codewars.com/kata/5277c8a221e209d3f6000b56/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Valid Braces.

#include <string>
#include <map>

bool valid_braces(std::string braces) {
    /*Takes a string of braces, and determines
     * if the order of the braces is valid.*/

    std::map<char, char> find_pair = {{'[', ']'},
                                      {'{', '}'},
                                      {'(', ')'}};
    for (unsigned long i = 1; i < braces.size(); ++i) {
        if (find_pair[braces[i - 1]] == braces[i]) {
            braces.erase(i - 1, 2);
            i -= 2;
        }
    }
    return braces.empty();
}

int main() {
    valid_braces("()[]([{}()])");
}