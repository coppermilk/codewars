// [Kata] https://www.codewars.com/kata/5700c9acc1555755be00027e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu All Inclusive?

#include <vector>
#include <string>
#include <set>
#include <iostream>
#include <algorithm>

class Rotations {
private:
    static std::string rotate(std::string str) {
        /*Rotate string to left.*/

        std::rotate(str.begin(), str.begin() + 1, str.end());
        return str;
    }

public:
    static bool containAllRots(const std::string &strng, std::vector<std::string> &arr) {
        /*Check if arr contains all rots.*/

        // Generate all rots.
        std::set<std::string> all_roots;
        std::string current_string = strng;
        for (unsigned long i = 0; i < strng.size(); ++i) {
            all_roots.insert(rotate(current_string));
            current_string = rotate(current_string);
        }

        // Check if vector contain all rots.
        unsigned long count_rots = 0;
        for (auto &rot: arr) {
            if (all_roots.find(rot) != all_roots.end()) {
                ++count_rots;
            }
        }
        return count_rots == all_roots.size();
    }
};


int main() {
    /*Tests.*/
    std::string s1 = "bsjq";
    std::vector<std::string> v1 = {"bsjq", "qbsj", "sjqb", "twZNsslC", "jqbs"};
    std::cout << Rotations::containAllRots(s1, v1);
    return 0;
}