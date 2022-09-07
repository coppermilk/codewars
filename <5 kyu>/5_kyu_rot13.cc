// [Kata] https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <string>
using namespace std;

string rot13(string msg) {
    /*ROT13 is a simple letter substitution cipher that replaces
    a letter with the letter 13 letters after it in the alphabet.*/
    
    const char shift = 13;
    const char letters_in_alfabet = 26;

    for (char &ch: msg) {
        if(islower(ch)){
            ch = 'a' + ((ch - 'a' + shift) % letters_in_alfabet);
        }
        if(isupper(ch)){
            ch = 'A' + ((ch - 'A' + shift) % letters_in_alfabet);
        }
    }
    return msg;

}

int main() {
    std::cout << rot13("abcdefghijklmnopqrstuvwxyz\nABCDEFGHIJKLMNOPQRSTUVWXYZ");

}
