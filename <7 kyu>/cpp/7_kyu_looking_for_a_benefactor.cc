// [Kata] https://www.codewars.com/kata/569b5cec755dd3534d00000f/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Looking for a benefactor.

#include <vector>
#include <algorithm>
#include <numeric>
#include <stdexcept>
#include <iostream>
#include <cmath>

class NewAverage {
public:
    static long long newAvg(std::vector<double> arr, double navg) {
        /*Return the expected donation (rounded up to the next integer)
         that will permit to reach the average navg.*/

        // Find x where:

        /*
         *   arr[0] + arr[1] + arr[n] + x      navg
         *  ------------------------------ = ---------.
         *          arr.size() + 1               1
         */

        long long expected_donation;
        double proportion = (double) (arr.size() + 1) * navg;
        double sum = std::accumulate(arr.begin(), arr.end(), 0.0);
        expected_donation = (long long) std::abs(std::floor(sum - proportion));

        if ((((double) expected_donation + sum) / (double) (arr.size() + 1)) - navg > 1) {
            throw std::logic_error("navg <=0");
        } else {
            return expected_donation;
        }
    }
};

int main() {
    std::cout << NewAverage::newAvg({14, 30, 5, 7, 9, 11, 15}, 2);
}
