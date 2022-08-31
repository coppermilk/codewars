// [Kata] https://www.codewars.com/kata/52774a314c2333f0a7000688/train/c
// [User] https://www.codewars.com/users/coppermilk

#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool validParentheses(const char *str_in) {
    /* Takes a string of parentheses, and determines if the order of the parentheses is valid.*/

#define BUF_SIZE 128

    bool valid_parentheses = true;
    char copy_str_in[BUF_SIZE] = {0};
    size_t len = strlen(str_in) + 1;
    strncpy(copy_str_in, str_in, len);

    const char start = '(';
    const char end = ')';

    for (size_t i = 0; i < len; ++i) {
        bool is_find_start = false;
        bool is_find_end = false;
        size_t start_index;
        size_t end_index;

        // Search and remove all valid parentheses.
        for (size_t j = 0; j < len; ++j) {
            if (copy_str_in[j] == start && !is_find_start) {
                start_index = j;
                is_find_start = true;
            } else if ((copy_str_in[j] == end) && is_find_start) {
                end_index = j;
                is_find_end = true;
            }
            if (is_find_start && is_find_end) {
                copy_str_in[start_index] = 0;
                copy_str_in[end_index] = 0;
                is_find_start = false;
                is_find_end = false;
                break;
            }
        }
    }

    // Check if invalid parentheses exist.
    for (size_t i = 0; i < len; ++i) {
        if (copy_str_in[i] == start || copy_str_in[i] == end) {
            valid_parentheses = false;
            break;
        }
    }

    return valid_parentheses;
}

int main() {

    char *test_1 = "   (";     // false
    char *test_2 = ")test";    // false
    char *test_3 = "";         // true
    char *test_4 = "hi())(";   // false
    char *test_5 = "hi(hi)()"; // true
    printf("%d", validParentheses(test_1));
    printf("%d", validParentheses(test_2));
    printf("%d", validParentheses(test_3));
    printf("%d", validParentheses(test_4));
    printf("%d", validParentheses(test_5));

}