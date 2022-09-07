// [Kata] https://www.codewars.com/kata/583203e6eb35d7980400002a/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <vector>

int countSmileys(std::vector<std::string> arr) {

    std::vector<std::string> answer;
    std::vector<std::string> validSmiles;
    int countSmileys = 0;

    // Hardcode valid smiles part
    std::vector<std::string> eyes({":", ";"});
    std::vector<std::string> noses({"-", "~", ""});
    std::vector<std::string> mouths({")", "D"});

    // Smiles generation
    for (const auto &eye: eyes) {
        for (const auto &nose: noses) {
            for (const auto &mouth: mouths) {
                validSmiles.push_back(eye + nose + mouth);
            }
        }
    }

    // Smiles counting
    for (const auto &smile: validSmiles) {
        countSmileys += (int)count(arr.begin(), arr.end(), smile);
    }

    return countSmileys;
}
int main(){
    std::cout << countSmileys({":D", ":~)", ";~)", ":)"}) << std::endl; // Should return 4;
    std::cout << countSmileys({":)", ":(", ":D", ":O", ":;"}) << std::endl; // Should return 2;
    std::cout << countSmileys({";]", ":[", ";*", ":$", ";-D"})<< std::endl; // Should return 1;

    return 0;
}
