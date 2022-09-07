// [Kata] https://www.codewars.com/kata/55c6126177c9441a570000cc/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class WeightSort {
public:
    static std::string orderWeight(const std::string &strng) {
        /*The weight of a number will be from now on the sum of its digits.
         In case having the same "weight", it comes before as a string. */

        if (strng.empty()) {
            return "";
        }

        std::stringstream numbers(strng);
        std::string number;
        std::vector<std::pair<std::string, int >> v;
        std::pair<std::string, unsigned int> p;

        // Get numbers and weight.
        while (numbers >> number) {
            p.first = number;
            p.second = sum_of_digits(number);
            v.emplace_back(p);
        }

        // Sorting.
        std::sort(v.begin(), v.end(), [](const std::pair<std::string, int> &x,
                                         const std::pair<std::string, int> &y) -> bool {
            // When digits have same weight sort as string.
            if (x.second == y.second) {
                unsigned long intersection_number_count = std::min(x.first.size(), y.first.size());
                for (unsigned long i = 0; i < intersection_number_count; ++i) {
                    //Check intersection numbers.
                    if (x.first[i] > y.first[i]) {
                        return true;
                    } else if (x.first[i] < y.first[i]) {
                        return false;
                    }
                        // Case when all intersection number same, but there are another numbers.
                    else if (x.first[i] == y.first[i] && ((i + 1) == intersection_number_count)) {
                        if (x.first.size() > y.first.size()) {
                            return true;
                        }
                    }
                }
                // When digits have different weights.
            }
            return x.second > y.second;


        });

        // Answer construction.
        std::string ans;
        // Insert last number without space.
        ans += v[v.size() - 1].first;
        //Insert previous numbers with space.
        for (long i = v.size() - 2; i >= 0; --i) {
            ans += " " + v[i].first;
        }
        return ans;
    }

    static unsigned sum_of_digits(std::string &number) {
        /*Returns the sum of numbers in a string number*/

        int sum = 0;
        for (char &i: number) {
            sum += i - '0';
        }
        return sum;
    }
};

int main() {
    std::string test1 = "22 10003";
    std::string test2 = "200 2 2000 10003 1234000 44444444 9999 22 123";

    std::cout << WeightSort::orderWeight(test1) << std::endl;
    std::cout << WeightSort::orderWeight(test2) << std::endl;
    return 0;
}
