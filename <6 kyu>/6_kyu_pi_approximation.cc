// [Kata] https://www.codewars.com/kata/550527b108b86f700000073f/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// PI approximation

#include <sstream>
#include <iomanip>
#include <cmath>

#define M_PI 3.14159265358979323846 /* pi */

using namespace std;
class PiApprox {
    public: static string iterPi(double epsilon) {
        /* Returns an array or a string  with: your number of iterations
          your approximation of PI with 10 decimals. */

        /* Calculate pi.*/
        // Leibniz formula for pi.
        double pi_4 = 0;
        double divider = 1.0;

        // Iterations.
        unsigned long i = 0;
        for (i = 0; std::abs(pi_4 * 4.0 - M_PI) > epsilon; ++i) {
            if (i % 2) {
                pi_4 -= 1.0 / divider;
            } else {
                pi_4 += 1.0 / divider;
            }
            divider += 2;
        }

        /* Format solution to answer.*/
        std::stringstream ss;
        ss << std::fixed << std::setprecision(10) << (pi_4 * 4);
        return "[" + std::to_string(i) + ", " + ss.str() + "]";
    }

};
