// [Kata] https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <string>
using namespace std;

string rot13(string msg) {
    const char shift = 13;
    const char letter_in_alfabet = 26;

    for (char &ch: msg) {
        if(islower(ch)){
            ch = 'a' + ((ch - 'a' + shift) % letter_in_alfabet);
        }
        if(isupper(ch)){
            ch = 'A' + ((ch - 'A' + shift) % letter_in_alfabet);
        }
    }
    return msg;
}

int main() {
    std::cout << rot13("test; abcdefghijklmnopqrstuvwxyz\nABCDEFGHIJKLMNOPQRSTUVWXYZ");

}