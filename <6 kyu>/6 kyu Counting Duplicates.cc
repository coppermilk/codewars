#include <climits>
#include <string>
#include <iostream>
#include <cstring>

// helper for tests
size_t duplicateCount(const std::string &in);
/*
size_t duplicateCount(const std::string &in) {
    unsigned letters_flag[UCHAR_MAX] = {0};
    for (auto &c: in) {
        ++letters_flag[tolower(c)];
    }
    size_t duplicates = 0;
    for (int i = 0; i < UCHAR_MAX; ++i) {
        if (letters_flag[i] > 1) {
            ++duplicates;
        }
    }
    return duplicates;

}
*/

size_t duplicateCount(const char *in) {
    char letters_flag[UCHAR_MAX] = {0};
    int size = std::strlen(in);
    for (int c = 0; c < size; ++c) {
        ++letters_flag[tolower(*(in + c))];
    }
    size_t duplicates = 0;
    for (char i : letters_flag) {
        if (i > 1) {
            ++duplicates;
        }
    }
    return duplicates;

}

int main() {
    std::string test = "aabb";
    std::cout << duplicateCount(test) << std::endl;
    std::cout << duplicateCount("aabb") << std::endl;
}