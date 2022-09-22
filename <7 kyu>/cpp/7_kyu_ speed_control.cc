// [Kata] https://www.codewars.com/kata/56484848ba95170a8000004d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Speed Control.

#include <vector>
#include <valarray>
#include <cmath>

class GpsSpeed {
public:
    // First solution.
    static int gps(const int &s, const std::vector<double> &x) {
        /*
         * Return as an integer the *floor* of the maximum
         * average speed per hour obtained on the sections of x
         */
        if (x.size() <= 1) {
            return 0;
        } else {

            // Calculate distance deltas.
            std::vector<double> distance_deltas;
            for (unsigned long i = 1; i < x.size(); ++i) {
                distance_deltas.push_back(std::abs(x[i - 1] - x[i]));
            }

            // Calculate hourly speeds.
            std::vector<double> hourly_speeds;
            for (double &delta: distance_deltas) {
                hourly_speeds.push_back(delta * 3600.0 / s);
            }

            return (int) *std::max_element(hourly_speeds.begin(), hourly_speeds.end());
        }

    }

    // Second solution.
    static int gps2(const int &s, const std::vector<double> &x) {
        /*
         * Return as an integer the *floor* of the maximum
         * average speed per hour obtained on the sections of x
         */
        if (x.size() <= 1) {
            return 0;
        } else {

            // Calculate distance deltas.
            std::vector<double> distance_deltas;
            for (unsigned long i = 1; i < x.size(); ++i) {
                distance_deltas.push_back(std::abs(x[i - 1] - x[i]));
            }
            return (int)((*std::max_element(distance_deltas.begin(), distance_deltas.end())) * 3600.0 / s);
        }
    };

};

int main() {
    /*Tests.*/

    std::vector<double> test = {0.0, 0.11, 0.22, 0.33, 0.44, 0.65, 1.08, 1.26, 1.68, 1.89, 2.1, 2.31, 2.52, 3.25};
    GpsSpeed::gps(12, test);
    GpsSpeed::gps2(12, test);
}