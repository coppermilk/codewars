// [Kata] https://www.codewars.com/kata/56170e844da7c6f647000063/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Drink about

#include <string>
#include <iostream>

std::string people_with_age_drink(int age) {
    /*Receive age, and return what they drink.*/

    switch(age){
        case 0 ...13:
            return "drink toddy";
        case 14 ... 17:
            return "drink coke";
        case 18 ... 20:
            return "drink beer";
        default:
            return "drink whisky";

    }
}

int main(){
    /*Tests.*/

    for(int i = 0; i < 100; ++i){
        std::cout << i << " "  << people_with_age_drink(i) << std::endl;
    }
}
