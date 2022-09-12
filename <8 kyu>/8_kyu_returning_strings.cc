// [Kata] https://www.codewars.com/kata/55a70521798b14d4750000a4/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Returning Strings.

#include <string>
#include <regex>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

std::string greet(const std::string& n){
    /*Return, "Hello, <name> how are you doing today?".*/

    return "Hello, " + n + " how are you doing today?";
}
// Play with regex.
/*std::string greet(std::string n){
    // regex expression for pattern to be searched 

    std::regex rgx("([a-zA-Z0-9]+) how");
    std::smatch matches;

    if(std::regex_search(n, matches, rgx)) {
        std::cout << "Match found\n";

        for (size_t i = 0; i < matches.size(); ++i) {
            std::cout << i << ": '" << matches[i].str() << "'\n";
        }
    } else {
        std::cout << "Match not found\n";
    }
    return matches[1];
}

std::string greet2(std::string n){
    std::stringstream line(n)
        int i = 0;
        std::string name;
        while(line >> name){
            if(i){
                return name;
            }
            ++i;
    }
}
*/

int main(){
    /*Tests*/

    std::string i = greet("Shingles");

}