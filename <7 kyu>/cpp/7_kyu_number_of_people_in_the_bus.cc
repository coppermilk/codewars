// [Kata] https://www.codewars.com/kata/5648b12ce68d9daa6b000099/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Number of People in the Bus.

#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>> &busStops) {
    /*Return number of people who are still in the bus after the last bus station.*/

    int into = 0;
    int get_off = 0;

    for (auto pair: busStops) {
        into += pair.first;
        get_off += pair.second;
    }
    return into - get_off;
}

int main() {
    /*Tests.*/

    using V = std::pair<int, int>;
    using V2 = std::vector<V>;
    number(V2{V{3, 0}, V{9, 1}, V{4, 8}, V{12, 2}, V{6, 1}, V{7, 8}}); // Equals(21));
}