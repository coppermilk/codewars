// [Kata] https://www.codewars.com/kata/515e188a311df01cba000003/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <string>
#include <iostream>

std::string get_planet_name(int id){
    /* Get planet name by id.*/

    switch(id){
        case 1:
            return"Mercury";
        case 2:
            return"Venus";
        case 3:
            return"Earth";
        case 4:
            return "Mars";
        case 5:
            return"Jupiter";
        case 6:
            return "Saturn";
        case 7:
            return "Uranus";
        case 8:
            return "Neptune";
        default:
            return "";
    }
}
int main(){
    for(int i = 1; i <= 8; ++i){
        std::cout << get_planet_name(i) << std::endl;
    }
}