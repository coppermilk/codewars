#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>

char *DuplicateEncoder(char *arr) {
    char *p_new_string;

    const char EXIST_SYMBOL = ')';
    const char NOT_EXIST_SYMBOL = '(';
    size_t flag_table[CHAR_MAX] = {0};
    size_t str_len = 0;

    while (arr[str_len]) {

        // If character exist make flag.
        ++flag_table[tolower(arr[str_len])];

        // Move str_len.
        ++str_len;
    }

    // [to do] Consider a replacement calloc -> malloc!
    p_new_string = (char *) calloc (str_len, sizeof(char));

    // Construct new string;
    for (size_t i = 0; i < str_len; ++i) {
        if (flag_table[tolower(*(arr + i))] > 1) {
            p_new_string[i] = EXIST_SYMBOL;
        } else {
            p_new_string[i] = NOT_EXIST_SYMBOL;
        }
    }

    return p_new_string;
}

int main() {
    // "din"      =>  "(((".
    // "recede"   =>  "()()()".
    // "Success"  =>  ")())())".
    // "(( @"     =>  "))((".

    char *test_1 = DuplicateEncoder("din");
    std::cout << test_1 << std::endl;
    char *test_2 = DuplicateEncoder("recede");
    std::cout << test_2 << std::endl;
    char *test_3 = DuplicateEncoder("Success");
    std::cout << test_3 << std::endl;
    char *test_4 = DuplicateEncoder("(( @");
    std::cout << test_4 << std::endl;

    return 0;
}
