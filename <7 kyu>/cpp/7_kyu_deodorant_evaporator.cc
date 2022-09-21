// [Kata] https://www.codewars.com/kata/5506b230a11c0aeab3000c1f/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Deodorant Evaporator.

#include <iostream>

using namespace std;

class Evaporator {

public:
    static int evaporator(double content, double evap_per_day, double threshold) {
        /*Reports the nth day (as an integer) on which the evaporator will be out of use.*/

        // "Initial content" as 100% and you lose 10% each day.
        // That is the only way if you don't take into account the content var. 
        // So if you lose 10% per day when you reach the 10th day you have a 100%...

        double min_content = content * (threshold / 100.0);
        double percent_balance_at_end_of_day = (100.0 - evap_per_day) / 100.0;
        int day = 0;

        while (content > min_content) {
            content *= percent_balance_at_end_of_day;
            ++day;
        }
        return day;
    }
};

int main() {
    std::cout << Evaporator::evaporator(10, 10, 5);
}