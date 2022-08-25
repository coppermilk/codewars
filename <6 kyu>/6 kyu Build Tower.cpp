#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
    std::vector<std::string> tower;
    unsigned stars_in_row = 1;

    for (unsigned i = 0; i < (nFloors); i++) {

        // string;
        std::string floor;
        for (unsigned j = 0; j < (nFloors - i - 1); j++) {
            floor.push_back(' ');
        }
        for (unsigned j = 0; j < stars_in_row; ++j) {
            floor.push_back('*');
        }
        for (unsigned j = 0; j < (nFloors - i - 1); j++) {
            floor.push_back(' ');
        }

        tower.push_back(floor);
        floor.clear();
        stars_in_row += 2;
    }
    return tower;
}

int main() {
    for (auto i: towerBuilder(9)) {
        std::cout << i << std::endl;
    }
}
