// https://www.codewars.com/kata/550498447451fbbd7600041c/train/cpp
#include <vector>
#include <iostream>

class Same {
public :
    static bool comp(std::vector<int> a, std::vector<int> b) {
        if (a.size() == b.size()) {
            for (int &i: a) {
                i = i * i;
            }
            return std::is_permutation(a.begin(), a.end(), b.begin());
        }
        return false;
    }
};


int main() {

    std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
    std::cout << Same::comp(a, b) << std::endl;
    return 0;
}