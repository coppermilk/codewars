// [Kata] https://www.codewars.com/kata/5ae94e64783bb4b6a300007b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// NEED TA REFACTOR !!!!

#include <iostream>
#include <vector>

std::string correct_it(std::string str) {
    std::string str_correct;
    bool is_need_space = false;
    bool is_start_sentence = true;
    int i = 0;
    for (auto c: str) {
        if (c == ' ' && is_need_space) {
            str_correct.push_back(c);
            is_need_space = false;
        } else if (std::isalpha(c)) {
            if (is_start_sentence) {
                c = toupper(c);
                str_correct.push_back(c);
                is_start_sentence = false;
            } else if (std::isupper(c)) {

                // Add space to dot if spase not exist.
                if (((str_correct[str_correct.size() - 1]) == ' ')
                    && (std::isalpha(str_correct[str_correct.size() - 2]))) {
                    str_correct[str_correct.size() - 1] = '.';
                    str_correct.push_back(' ');
                    str_correct.push_back(c);
                }
            } else {
                str_correct.push_back(c);
            }

            is_need_space = true;

            // Put end sentence character.
        } else if (c == '.' || c == '!' || c == '?') {
            is_start_sentence = true;
            if (i < str.size() && (std::isalpha(str[i + 1]))) {
                str_correct.push_back(c);
                str_correct.push_back(' ');
            } else {
                str_correct.push_back(c);
            }
        }
        ++i;
    }

    if(std::isalpha(str_correct[str_correct.size() - 1])){
        str_correct.push_back('.');
    }else if((str_correct[str_correct.size() - 1]) == ' '){
        str_correct[str_correct.size() - 1] = '.';
    }
    if((str_correct[str_correct.size() - 1] == '.' )&&(str_correct[str_correct.size() - 2] == '.' )){
        str_correct.pop_back();
    }

    return str_correct;
}

int main() {
    std::string example = "  john Ahas an apple m     I drop the cu    p.they get the coins";
    std::cout << correct_it(example) << std::endl;

    return 0;
}