// [Kata] https://www.codewars.com/kata/5a00e05cc374cb34d100000d/train/c
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Reversed sequence.

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num){
    /*Build a function that returns an array of integers from n to 1 where n > 0.*/

    unsigned short * arr = malloc(num * sizeof(unsigned short));
    int j = 0;
    for(int i = num; i > 0; --i){
        *(arr + j++) = i;
    }
    return arr;
}

int main(){
    /*Tests.*/
    reverse_seq(10);
    return 0;
}
