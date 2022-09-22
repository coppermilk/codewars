// [Kata] https://www.codewars.com/kata/52b5247074ea613a09000164/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Boiled Eggs

#include <iostream>
#include <cmath>

// First solution.
unsigned int cookingTime(unsigned int eggs) {
    /*Return the time in minutes (integer), which it takes to have all the eggs boiled.*/

    const unsigned int eggs_into_the_pot_at_once = 8;
    const unsigned int minutes_to_boil_an_egg = 5;
    unsigned cooking = eggs / eggs_into_the_pot_at_once;

    if(eggs % eggs_into_the_pot_at_once){
        cooking++;
    }
    return cooking * minutes_to_boil_an_egg;
}

// Second solution.
unsigned int cookingTime2(unsigned int eggs) {
    /*Return the time in minutes (integer), which it takes to have all the eggs boiled.*/

    return (int)ceil(eggs / 8.0) * 5;
}

int main(){
    /*Tests.*/

    for(int i = 0; i < 20; ++i){
        std::cout << cookingTime(i) << std::endl;
        std::cout << cookingTime2(i) << std::endl;
    }
    return 0;
}