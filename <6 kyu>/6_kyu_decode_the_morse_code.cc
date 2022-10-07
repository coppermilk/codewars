// [Kata] https://www.codewars.com/kata/54b724efac3d5402db00065e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Decode the Morse code.

#include <string>
#include <map>
#include <iostream>

std::map<std::string, std::string> morse_decode_table = {
        {".-",     "A"},
        {"-...",   "B"},
        {".--",    "W"},
        {"--.",    "G"},
        {"-..",    "D"},
        {".",      "E"},
        {"...-",   "V"},
        {"--..",   "Z"},
        {"..",     "I"},
        {".---",   "J"},
        {"-.-",    "K"},
        {".-..",   "L"},
        {"--",     "M"},
        {"-.",     "N"},
        {"---",    "O"},
        {".--.",   "P"},
        {".-.",    "R"},
        {"...",    "S"},
        {"-",      "T"},
        {"..-",    "U"},
        {"..-.",   "F"},
        {"....",   "H"},
        {"-.-.",   "C"},
        {"--.-",   "Q"},
        {"-.--",   "Y"},
        {"-..-",   "X"},
        {".----",  "1"},
        {"..---",  "2"},
        {"...--",  "3"},
        {"....-",  "4"},
        {".....",  "5"},
        {"-....",  "6"},
        {"--...",  "7"},
        {"---..",  "8"},
        {"----.",  "9"},
        {"-----",  "0"},
        {"......", ","},
        {".-.-.-", "."},
        {"---...", ":"},
        {"-.-.-.", ";"},
        {"-.--.-", "("},
        {"-.--.-", ")"},
        {".-..-.", "\""},
        {"-....-", "-"},
        {"-..-.",  "/"},
        {"..--..", "?"},
        {"-.-.--", "!"},
        {"-...-",  " "},
        {".--.-.", "@"},
        {"...---...", "SOS"}
};

std::string decodeMorse(std::string morseCode) {
    /* Take the morse code as input and return a decoded human-readable string.*/
    // Decode specific morse code.
    std::string decoded;
    std::string key;
    morseCode += ' ';
    int ch_space = false;
    for (auto p: morseCode) {
        if (p == '.') {
            key += '.';
            ch_space = 0;
        } else if (p == '-') {
            key += '-';
            ch_space = 0;
        } else if(p == ' '){

            ch_space += 1;
        }

        if(ch_space == 3){
            decoded += ' ';
            ch_space = 0;
        }
        else if(ch_space == 1){
            decoded += morse_decode_table[key];
            key.clear();
        }
    }

    // Remove start space.
    for(unsigned long i = 0; i < decoded.size(); ++i){
        if(*decoded.begin() == ' '){
            decoded.erase(decoded.begin());
        }else{
            break;
        }
    }
    // Remove end spase.
    for(unsigned long i = decoded.size() - 1; i > 0; --i){
        if(decoded[i] == ' '){
            decoded.pop_back();
        }else{
            break;
        }
    }

    return decoded;
}

int main() {
    std::cout << decodeMorse("   .   .                ");
}