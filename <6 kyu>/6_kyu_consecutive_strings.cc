// [Kata] https://www.codewars.com/kata/56a5d994ac971f1ac500003e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Consecutive strings

#include <string>
#include <vector>
#include <iostream>

class LongestConsec {
public:
    static std::string longestConsec(const std::vector<std::string> &strarr, int k) {
        /* Return the first longest string consisting
         * of k consecutive strings taken in the array.*/

        if (strarr.empty() || (unsigned long) k > strarr.size() || k <= 0) {
            // Check condition.
            return "";
        } else {
            std::vector<std::string> consec;
            std::string longest_consec;
            unsigned long longest_consec_size = 0;
            for (unsigned long i = 0; i < strarr.size() - k + 1; ++i) {
                //String adding.
                for (unsigned long j = i; j < i + k; ++j) {
                    if (j == i) {
                        // First create new string.
                        consec.push_back(strarr[i]);
                    } else {
                        // Then add to creating.
                        consec[i] += strarr[j];
                    }
                }
                // Find longest.
                if (consec[i].size() > longest_consec_size) {
                    longest_consec = consec[i];
                    longest_consec_size = consec[i].size();
                }
            }
            return longest_consec;
        }

    }
};

int main() {
    std::vector<std::string> arr = {"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"};
    std::cout << LongestConsec::longestConsec(arr, 2);

}
