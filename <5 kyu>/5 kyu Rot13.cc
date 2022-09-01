// [Kata] https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <string>
using namespace std;

string rot13(string msg) {
    /*ROT13 is a simple letter substitution cipher that replaces
    a letter with the letter 13 letters after it in the alphabet.*/
    
    const char shift = 13;

    for (char &ch: msg) {
        if ('a' <= ch && ch <= 'z') {
            if (ch > 'z' - shift) {
                ch = (char) ('a' + (ch - 'a' - shift));
            } else {
                ch = (char) (ch + shift);
            }
        } else if ('A' <= ch && ch <= 'Z') {
            if (ch > 'Z' - shift) {
                ch = (char) ('A' + (ch - 'A' - shift));
            } else {
                ch = (char) (ch + shift);
            }
        }
    }
    return msg;
}

int main() {
    std::cout << rot13("abcdefghijklmnopqrstuvwxyz");

}
