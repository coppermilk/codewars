// [Kata] https://www.codewars.com/kata/56ed20a2c4e5d69155000301/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Scaling Squared Strings

#include <iostream>
#include <vector>
#include <sstream>

class ScalingSqStrings
{
public:
    static std::string scale(const std::string& strng, int k, int n) {
        /*Function will perform a k-horizontal scaling and a v-vertical scaling.*/
   
        std::string ans;
        ans.reserve(strng.size() * k * n);

        std::stringstream ss(strng);
        std::stringstream so;
        std::string lines;
        std::string new_lines;

        while (ss >> lines) {
            // Vertical scaling.
            for (auto& ch : lines) {
                for (int i = 0; i < k; ++i) {
                    new_lines.push_back(ch);
                }
            }
            // Horisontal scaling.
            for (int i = 0; i < n; ++i) {
                so << new_lines << '\n';
            }
            new_lines.clear();
        }
        ans = so.str();
        if (!ans.empty()) {
            ans.pop_back();
        }
        return ans;
    }
};