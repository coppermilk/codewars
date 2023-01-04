// [Kata] https://www.codewars.com/kata/63ab271e96a48e000e577442/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Hurry up, the walls are closing in!

#include <utility>
#include <vector>

bool canEscape(std::vector < std::pair < unsigned int, unsigned int >> & walls) {
    /* Return a boolean indicating whether it is possible to run past the walls without being hit.*/
    for (unsigned long step = 0; step < walls.size(); ++step) {
        if (walls[step].first > (step + 1) && walls[step].second > (step + 1)) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}