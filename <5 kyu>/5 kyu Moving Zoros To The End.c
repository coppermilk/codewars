// [Kata] https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/c
// [User] https://www.codewars.com/users/coppermilk
// NEED TO REFACTOR !!!!!!!
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void move_zeros(size_t len, int arr[len]) {
    int is_all_zero = 0;
    for (size_t i = 0; i < len; i++) {
        for (size_t j = i; (j < len - 1) && abs(arr[j + 1]) >= arr[j] && (arr[j] == 0); j++) {

            size_t tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;


            //std::swap(arr[j], arr[j+1]);
            printf("i%d : j%d : ", i, j);
            for (int i = 0; i < 20; ++i) {
                printf("%d", arr[i]);
            }
            if (arr[i] == 0 && arr[i + 1] == 0) {

                int all_sum = 0;
                for (int k = i; k < len; k++) {
                    all_sum += arr[k];
                }
                if (all_sum == 0) {
                    is_all_zero = 1;
                }
                --i;
            }

            printf("\n");
            if (is_all_zero) {
                break;
            }
        }

        printf("\n");
        if (is_all_zero) {
            break;
        }
    }
}

int main() {
    int test[] = {9, 0, 0, 9, 1, 2, 0, 1, 0, 1, 0, 3, 0, 1, 9, 0, 0, 0, 0, 9};
    move_zeros(20, test);
    for (int i = 0; i < 20; ++i) {
        printf("%d", test[i]);
    }
    printf("\n");
}