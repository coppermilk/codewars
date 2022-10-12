// [Kata] https://www.codewars.com/kata/53697be005f803751e0015aa/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu The Vowel Code.

#include <string>
std::string encode(std::string str) {
    /* Replace all the lowercase vowels in a given string with numbers according to the following pattern:
       a -> 1
       e -> 2
       i -> 3
       o -> 4
       u -> 5
    */
    for (auto &ch: str) {
        switch (ch) {
            case 'a':
                ch = '1';
                break;
            case 'e':
                ch = '2';
                break;
            case 'i':
                ch = '3';
                break;
            case 'o':
                ch = '4';
                break;
            case 'u':
                ch = '5';
                break;
            default:
                break;
        }
    }
    return str;
}

std::string decode(std::string str) {
    /*Turn the numbers back into vowels according to the same pattern shown above.*/
    for (auto &ch: str) {
        switch (ch) {
            case '1':
                ch = 'a';
                break;
            case '2':
                ch = 'e';
                break;
            case '3':
                ch = 'i';
                break;
            case '4':
                ch = 'o';
                break;
            case '5':
                ch = 'u';
                break;
            default:
                break;
        }
    }
    return str;
}