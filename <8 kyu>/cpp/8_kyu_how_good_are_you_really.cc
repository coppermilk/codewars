// [Kata] https://www.codewars.com/kata/5601409514fc93442500010b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu How good are you really?.

#include <vector>
#include <numeric>

bool betterThanAverage(const std::vector<int> &classPoints, const int &yourPoints) {
    /*Calculating the average point you may add your point to the given array!*/

    int sum = std::accumulate (classPoints.begin(), classPoints.end(), 0);
    int avg = sum / (int)classPoints.size();
    return yourPoints > avg;
}

int main() {
    /*Tests.*/

    betterThanAverage({100, 40, 34, 57, 29, 72, 57, 88}, 75);
    return 0;
}