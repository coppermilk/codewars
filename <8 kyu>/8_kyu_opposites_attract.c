// [Kata] https://www.codewars.com/kata/555086d53eac039a2a000083/train/c
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Opposites Attract

#include <stdbool.h>

bool lovefunc(int flower1, int flower2) {
/*Take the number of petals of each flower and return true if they are in love and false if they aren't.*/

return flower1 % 2 != flower2 % 2;
}

int main(){
    /*Tests.*/

    lovefunc(1, 2);
    return 0;
}