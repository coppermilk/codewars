// [Kata] https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/c
// [User] https://www.codewars.com/users/coppermilk

#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


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
    printf ("%s\n", test_1);
    char *test_2 = DuplicateEncoder("recede");
    printf ("%s\n", test_2);
    char *test_3 = DuplicateEncoder("Success");
    printf ("%s\n", test_3);
    char *test_4 = DuplicateEncoder("(( @");
    printf ("%s\n", test_4);

    return 0;
}
