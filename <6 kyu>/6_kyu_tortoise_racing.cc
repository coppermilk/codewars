// [Kata] https://www.codewars.com/kata/55e2adece53b4cdcb900006c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Tortoise racing.

#include <vector>
#include <iostream>

class Tortoise {
public:
    static std::vector<int> race(int v1, int v2, int g) {
        /* Since the second turtle is moving faster than the first,
         * the distance between them will decrease every hour.
         * So you can determine the speed of convergence of turtles:*/
        double speed_convergence_sec = (v2 - v1) / 3600.0;

        /* Both turtles left at the same time, so the distance between them
         * is equal to the distance between the lead (g fet).
         * Dividing the distance between turtles by the speed of their approach,
         * we find out how long it will take for the second turtle to catch up with the first:*/
        double time_in_sec = g / (speed_convergence_sec);
        
        int hour = (int) time_in_sec / 3600;
        int minute = ((int) time_in_sec / 60) % 60;
        int sec = (int) time_in_sec % 60;
        
        if (hour < 0 || minute < 0 || sec < 0) {
            return {-1, -1, -1};
        } else {
            return {hour, minute, sec};
        }
    }
};

int main() {

    for (auto i: Tortoise::race(80, 91, 37)) {
        std::cout << i << " ";
    }
}