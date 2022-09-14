// [Kata] https://www.codewars.com/kata/57a4d500e298a7952100035d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Hex to Decimal.

#include <stdio.h>
#include <stdlib.h>

//First solution.
int hex_to_dec(const char *source) {
    return (int)strtol(source, NULL, 16);
}

//Second solution.
int hex_to_dec2(const char *source){
    int value;
    sscanf(source,"%x", &value);
    return value;
}

int main(){
    /*Tests.*/

    hex_to_dec("FF");
    return 0;
}