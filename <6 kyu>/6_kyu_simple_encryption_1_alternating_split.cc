// [Kata] https://www.codewars.com/kata/57814d79a56c88e3e0000786/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Simple Encryption #1 - Alternating Split.
#include <vector>
#include <iostream>

std::string encrypt(std::string text, int n) {
    //std::cout << text << " " << n << std::endl;
    std::string left;
    std::string right;
    while (n > 0) {
        for (unsigned long i = 0; i < text.size(); ++i) {
            if (i % 2) {
                left += text[i];
            } else {
                right += text[i];
            }
        }

        text = left + right;
        left.clear();
        right.clear();
        --n;
    }
    return text;
}

std::string decrypt(std::string encryptedText, int n) {
    std::string left;
    std::string right;
    while (n > 0) {
        unsigned long size = encryptedText.size();

        left = encryptedText.substr(0, size / 2);
        right = encryptedText.substr(size / 2, size - (size / 2));

        encryptedText.clear();
        for (unsigned long i = 0; i < right.size(); ++i) {

            encryptedText.push_back(right[i]);
            if (i < left.size()) {
                encryptedText.push_back(left[i]);
            }
        }
        left.clear();
        right.clear();
        --n;
    }
    return encryptedText;
}

int main() {
    std::string s = "This is a test!";
    std::cout << 6 << " " << s << " " << encrypt(s, 10) << " " << decrypt(encrypt(s, 10), 10) << std::endl;
}
