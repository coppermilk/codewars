// [Kata] https://www.codewars.com/kata/51b62bf6a9c58071c600001b/train/c
// [User] https://www.codewars.com/users/coppermilk

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *solution(int n) {
    // Convert the number to a roman numeral.

    #define BUF_SIZE  64
    // Execute test 2.306785 sec; For 4% slower.
    //char * p_roman_number= (char *)calloc(BUF_SIZE, sizeof(char));

    // Execute test 2.207561 sec; For 4% faster.
    char *p_roman_number = (char *) malloc(BUF_SIZE);
    p_roman_number[0] = '\0';

    int arabic[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char roman[][3] = {"M\0", "CM\0", "D\0", "CD\0", "C\0", "XC\0", "L\0", "XL\0", "X\0", "IX\0", "V\0", "IV\0", "I\0"};

    int size = sizeof(roman) / sizeof(roman[0]);
    for (int i = 0; i < size; ++i) {
        while (n - arabic[i] >= 0) {
            strcat(p_roman_number, roman[i]);
            n -= arabic[i];
        }
    }

    return p_roman_number;
}

int main() {
    clock_t t;

    for (int i = 1; i < 20; ++i) {
        char *p_test;
        p_test = solution(i);
        printf("%d : %s\n", i, p_test);
        free(p_test);
    }
    t = clock() - t;
    double time_taken = ((double) t) / CLOCKS_PER_SEC; // calculate the elapsed time
    printf("The program took %f seconds to execute", time_taken);
}
