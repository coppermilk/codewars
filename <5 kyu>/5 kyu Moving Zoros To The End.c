// [Kata] https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/c
// [User] https://www.codewars.com/users/coppermilk

#include <stddef.h>
#include <stdio.h>

void move_zeros(size_t len, int arr[len]) {
   for(int i = 0; i < len; i++){
       for(int j = 0; j < i; j++){
           if((i > j) && arr[j] == 0 && arr[i] != 0){
               size_t buf = arr[i];
               arr[i] = arr[j];
               arr[j] = buf;
           }
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