// [Kata] https://www.codewars.com/kata/5ae7e3f068e6445bc8000046/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// See You Next Happy Year

#include <cstring>
unsigned short int nextHappyYear(unsigned short int year) {
    /*Find The next happy year.*/
    int digit_mask[10] = {0};
    bool next_digit;
    do {
        next_digit = false;
        int year_copy = ++year;
        memset(digit_mask, 0, sizeof(digit_mask));
        do {
            if (++digit_mask[year_copy % 10] > 1){
                next_digit = true;
                break;
            };
            year_copy /= 10;

        } while (year_copy);
    } while (next_digit);
    return year;
}