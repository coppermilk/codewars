// [Kata] https://www.codewars.com/kata/57d2807295497e652b000139/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Averages of numbers.

#include <vector>

std::vector<double> averages(std::vector<int> numbers) {
    /*Gets an array of integer-numbers and return an array of the averages
      of each integer-number and his follower, if there is one.*/

    std::vector<double> result;
    for (unsigned long i = 1; i < numbers.size(); ++i) {
        result.push_back((numbers[i - 1] + numbers[i]) / 2.0);
    }
    return result;
}

int main() {
    averages({1, 3, 5, 1, -10});
}