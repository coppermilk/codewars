// [Kata] https://www.codewars.com/kata/57f24e6a18e9fad8eb000296/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu I love you, a little , a lot, passionately ... not at all.

#include <string>

std::string how_much_i_love_you(int nb_petals) {
    /*Determine which phrase the girls would say for a flower
      of a given number of petals, where nb_petals > 0*/

    switch (nb_petals %6){
        case 1:
            return "I love you";
        case 2:
            return "a little";
        case 3:
            return "a lot";
        case 4:
            return "passionately";
        case 5:
            return "madly";
        default:
            return "not at all";
    }
}

int main(){
    /*Tests.*/

    how_much_i_love_you(55);
    return 0;
}