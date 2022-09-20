// [Kata] https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Reverse words.

#include <string>
#include <iostream>
#include <algorithm>

void prp(std::string str, int s, int e) {
    std::cout << str << std::endl;
    for (int i = 0; i < s; i++) {
        std::cout << ' ';
    }
    std::cout << "s\n";
    for (int i = 0; i < e; i++) {
        std::cout << ' ';
    }
    std::cout << "e\n";

}

std::string reverse_words(std::string str) {
    /*Reverses each word in the string. All spaces in the string should be retained.*/
    long w_start = 0;
    long w_end;

    for (unsigned long i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            w_end = (long)i;
            std::reverse(str.begin() + w_start, str.begin() + w_end);
            w_start = w_end + 1;
        } else if (i == str.size() - 1) {
            std::reverse(str.begin() + w_start, str.end());
        }
    }
    return str;
}

int main() {
    std::cout << reverse_words("012  56 89");
}