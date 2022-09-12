// [Kata] https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/c
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Convert a string to an array.

#include <stdlib.h>
#include <string.h>

size_t count_words(const char *words) {
    /* Count the number of words.
       This function will be used to allocate the right amount of memory so it has to be correct !*/

    int w = 1;
    if (*words) {
        while (*words) {
            if (*words == ' ') w++;
            words++;
        }
        return w;
    }
    else{
        return 0;
    }
}

void words_to_array(char *words, char *words_array[]) {
    /*Split a string and convert it into an array of words.*/

    words_array[0] = calloc(1, sizeof(char));
    int i = 0;
    int w_s = 0;
    while (*words) {
        if (*words == ' ') {
            i++;
            words_array[i] = calloc(1, sizeof(char));
            w_s = 0;
        } else {
            words_array[i][w_s] = *words;
            w_s++;
        }
        ++words;
    }
}

int main() {
    char *k[1];
    words_to_array("", k);
}