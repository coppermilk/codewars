// [Kata] https://www.codewars.com/kata/58acfe4ae0201e1708000075/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Smple Fun #152: Invite More Women?

#include <vector>
#include <numeric>

bool invite_more_women(const std::vector<int> &invited) {
    /*There are at least as many women as men at this year's party.*/

    return std::accumulate(invited.begin(), invited.end(), 0) > 0;
}

int main() {
    /*Tests.*/

    invite_more_women({-1, -1, -1}); // Equals(false));
}