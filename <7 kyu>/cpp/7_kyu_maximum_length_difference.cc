// [Kata] https://www.codewars.com/kata/5663f5305102699bad000056/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Maximum Length Difference.

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class MaxDiffLength {
public:
    // First solution.
    static int mxdiflg(const std::vector<std::string> &a1, const std::vector<std::string> &a2) {
    /*Each string is composed with letters from a to z. Let x be any string
      in the first array and y be any string in the second array.
      Find max(abs(length(x) − length(y))).*/

        int max = 0;
        int current_size;
        for (auto &s1: a1) {
            for (auto &s2: a2) {
                current_size = abs((int) s1.size() - (int) s2.size());
                if (current_size > max) {
                    max = current_size;
                }
            }
        }
        return a1.empty() || a2.empty() ? -1 : max;
    }

    //Second solution.
    static bool compare(const std::string& a, const std::string& b){
        /*Is 'b' bigger than 'a'.*/

        return a.length() < b.length();
    }

    static int mxdiflg2(const std::vector<std::string> &a1, const std::vector<std::string> &a2) {
        /*Each string is composed with letters from a to z. Let x be any string
          in the first array and y be any string in the second array.
          Find max(abs(length(x) − length(y))).*/

        auto it_max_1 = std::max_element(a1.begin(), a1.end(), compare);
        auto it_min_1 = std::min_element(a1.begin(), a1.end(), compare);

        auto it_max_2 = std::max_element(a2.begin(), a2.end(), compare);
        auto it_min_2 = std::min_element(a2.begin(), a2.end(), compare);

        int delta1 = (int)it_max_1->length() - (int)it_min_2->length();
        int delta2 = (int)it_max_2->length() - (int)it_min_1->length();

        return a1.empty() || a2.empty() ? -1 : std::max(delta1, delta2);
    }
};

int main() {
    std::cout << MaxDiffLength::mxdiflg(
            {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"},
            {"bbbaaayddqbbrrrv"});
    std::cout << MaxDiffLength::mxdiflg2(
            {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"},
            {"bbbaaayddqbbrrrv"});
}