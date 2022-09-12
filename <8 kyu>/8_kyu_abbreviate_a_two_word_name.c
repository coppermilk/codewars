// [Kata] https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/train/c
// [User] https://www.codewars.com/users/coppermilk
// <8 kyu> Abbreviate a Two Word Name.

#include <ctype.h>

char *get_initials (char *full_name, char initials[4]){
    /*Convert a name into initials.*/

    int is_first_name = 1;
    while(*full_name){
        if(is_first_name){
            initials[0] = (char)toupper(*full_name);
            initials[1] = '.';
            is_first_name = 0;
        }else if(*full_name == ' '){
            initials[2] = (char)toupper(*++full_name);
            break;
        }
        *++full_name;
    }

    return initials;
}

int main(){
    /*Tests*/

    char initials[4];
    get_initials("Sam best", initials);
    return 0;
}