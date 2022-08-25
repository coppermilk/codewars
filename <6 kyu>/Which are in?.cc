// [Kata] https://www.codewars.com/kata/550554fd08b86f84fe000a58/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>
#include <string>
#include <vector>

class WhichAreIn {

public:
    static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2) {
        std::vector<std::string> AreIn;
        for (const auto& i: array1) {
            for (const auto& j: array2) {

                if (j.find(i) != std::string::npos) {
                    AreIn.push_back(i);
                    break;
                }
            }

        }
        std::sort(AreIn.begin(), AreIn.end());
        return AreIn;
    }
};

int main() {
    std::vector<std::string> arr1 = {"arp", "live", "strong"};
    std::vector<std::string> arr2 = {"lively", "alive", "harp", "sharp", "armstrong"};
    std::vector<std::string> arr3 = {"tarp", "mice", "bull"};
    std::vector<std::string> arr4 = {"lively", "alive", "harp", "sharp", "armstrong"};

    for (const auto &i: WhichAreIn::inArray(arr1, arr2)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for (const auto &i: WhichAreIn::inArray(arr3, arr4)) {
        std::cout << i << " ";
    }
    return 0;
}
