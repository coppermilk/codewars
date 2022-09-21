// [Kata] https://www.codewars.com/kata/5abd66a5ccfd1130b30000a9/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Row Weights.

#include <vector>
#include <utility>

using namespace std;

pair<int, int> rowWeights(const vector<int> &weights) {
    /*Return a new array/tuple of two integers,
      where the first one is the total weight of team 1,
      and the second one is the total weight of team 2.*/

    int sum1 = 0;
    int sum2 = 0;
    int i = 0;
    for (auto weight: weights) {
        if (i % 2) {
            sum2 += weight;
        } else {
            sum1 += weight;
        }
        i++;
    }
    return {sum1, sum2};
}

int main() {
    /*Tests.*/

    rowWeights({50, 60, 70, 80});
}