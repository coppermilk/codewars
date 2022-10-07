// [Kata] https://www.codewars.com/kata/514b92a657cdc65150000006/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Multiples of 3 or 5

#include <iostream>

#include<vector>

using V = std::vector<char>;

bool isValidWalk(const std::vector<char> &walk) {

    /*
     * return true if they walk the app gives you will take
     * you exactly ten minutes (you don't want to be early or late!)
     * and will, of course, return you to your starting point.
     * Return false otherwise.
     */

    int x_balance = 0;
    int y_balance = 0;

    for (auto &step: walk) {
        switch (step) {
            case 'n':
                ++x_balance;
                break;
            case 's':
                --x_balance;
                break;
            case 'e':
                ++y_balance;
                break;

            case 'w':
                --y_balance;
                break;
            default:
                break;

        }

    }
    return !x_balance && !y_balance && walk.size() == 10;
}

int main() {
    std::cout << isValidWalk(V{'e', 'w', 'e', 'w', 'n', 's', 'n', 's', 'e', 'w'});
}