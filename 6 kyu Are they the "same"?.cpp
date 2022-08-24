#include <vector>
#include <iostream>

class Same {
public :
    static bool comp(std::vector<int> &a, std::vector<int> &b) {
        if (a.size() == b.size()) {
            std::vector<int> b_correct = a;

            for (int &i: b_correct) {
                i = i * i;
            }

            std::sort(b_correct.begin(), b_correct.end());
            std::sort(b.begin(), b.end());

            if (std::equal(b.begin(), b.end(), b_correct.begin())) {
                return true;
            }
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