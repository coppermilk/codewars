//
// Created by zvgdb on 24.08.22.
//
#include <vector>
#include <iostream>

class Same {
public :
    static bool comp(std::vector<int> &a, std::vector<int> &b) {
        if (a.size() == b.size()) {
            std::sort(a.begin(), a.end());
            std::sort(b.begin(), b.end());
            for (int i = 0; i < a.size(); ++i) {
                if (a[i] * a[i] == b[i]) {
                    continue;
                } else {
                    return false;
                }
            }
        } else {
            return false;
        }
        return true;
    }
};

int main() {
    Same s;
    std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b = {1441, 20736, 361, 25921, 361, 20736, 361, 121};
    std::cout << s.comp(a, b) << std::endl;
    return 0;
}