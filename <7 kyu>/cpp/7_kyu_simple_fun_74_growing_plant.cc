// [Kata] https://www.codewars.com/kata/58941fec8afa3618c9000184/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Simple Fun #74: Growing Plant.

#include <iostream>

int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    /* Each day a plant is growing by upSpeed meters. Each night that plant's
     * height decreases by downSpeed meters due to the lack of sun heat. Initially,
     * plant is 0 meters tall. We plant the seed at the beginning of a day.
     * We want to know when the height of the plant will reach a certain level.*/

    int day = 1;
    int height = upSpeed;
    while (height < desiredHeight) {
        height += (upSpeed - downSpeed);
        ++day;
    }
    return day;
}

int main() {
    /*Tests.*/
    std::cout << growingPlant(10, 6, 920);
}