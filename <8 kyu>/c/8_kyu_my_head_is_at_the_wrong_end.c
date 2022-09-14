// [Kata] https://www.codewars.com/kata/56f699cd9400f5b7d8000b55/train/c
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu My head is at the wrong end!

#include <stdio.h>

const char **fix_the_meerkat(const char **arr) {
    /* Revers array.*/

    int len = 3;
    for (unsigned int i = 0; i <= len / 2; ++i) {
        const char *tmp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = tmp;
    }
    return arr;
}

int main() {
    /*Tests.*/

    const char *arr[] = {"tail", "body", "head"};
    fix_the_meerkat(arr);
    for (int i = 0; i < 3; i++)
        printf("%s\n", arr[i]);

    return 0;
}