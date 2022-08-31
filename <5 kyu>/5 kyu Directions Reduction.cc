#include <string>
#include <vector>
#include <iostream>

class DirReduction {
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr) {
        // Compass.
        //    N         +
        //  W-*-E     - * +
        //    S         -

        // Remove extra direction.
        bool is_chenge = false;
        std::vector<std::string> ans;
        for (int i = 0; i < arr.size() - 1; ++i) {
            if (arr[i] == "WEST" && arr[i + 1] == "EAST" ||
                arr[i + 1] == "WEST" && arr[i] == "EAST") {
                arr[i] = arr[i + 1] = "";
                is_chenge =true;
            } else if (arr[i] == "NORTH" && arr[i + 1] == "SOUTH" ||
                       arr[i + 1] == "NORTH" && arr[i] == "SOUTH") {
                arr[i] = arr[i + 1] = "";
                is_chenge = true;
            }
        }

        // Add necessary direction.
        for (auto &s: arr) {
            if (!s.empty()) {
                ans.push_back(s);
            }
        }
        if(!is_chenge){
            return ans;
        }else{
            return dirReduc(ans);
        }

    }
};

int main() {
    std::vector<std::string> test1 = {"WEST", "EAST", "NORTH", "SOUTH", "EAST", "NORTH", "SOUTH", "NORTH", "SOUTH",
                                      "NORTH", "NORTH", "EAST", "SOUTH", "EAST", "WEST", "NORTH", "SOUTH", "NORTH"};
    for (auto i: DirReduction::dirReduc(test1)) {
        std::cout << i << " ";
    }
    return 0;
}
