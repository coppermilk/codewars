// [Kata] https://www.codewars.com/kata/5aa736a455f906981800360d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu The Feast of Many Beasts

#include <string>
#include <algorithm>

bool feast(std::string beast, std::string dish) {
    /*Takes the animal's name and dish as arguments and returns true or false
    to indicate whether the beast is allowed to bring the dish to the feast.*/

    return beast.front() == dish.front() && beast.back() == dish.back();
}

int main() {
    /*Tests.*/

    feast("great blue heron", "garlic naan");
    return 0;
}