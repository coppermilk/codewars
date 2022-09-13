// [Kata] https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/c
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Invert values

#include <stddef.h>

void invert(int *values, size_t values_size){
    /*Return the additive inverse of each.*/

    for(size_t i = 0; i < values_size; ++i){
        values[i] *= -1;
    }
}

int main(){
    /*Tests.*/
    int values[] = {1, -2, 3, -4, 5};
    invert(values, sizeof(values) / sizeof(values[0]));
    return 0;
}