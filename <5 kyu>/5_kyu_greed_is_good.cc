// [Kata] https://www.codewars.com/kata/5270d0d18625160ada0000e4/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>

int score(const std::vector<int>& dice) {
    /* Return Greed is good points. */

    //    Three 1's => 1000 points
    //    Three 6's =>  600 points
    //    Three 5's =>  500 points
    //    Three 4's =>  400 points
    //    Three 3's =>  300 points
    //    Three 2's =>  200 points
    //    One   1   =>  100 points
    //    One   5   =>   50 point

    int points = 0;
    int score_value[6] = {0};
    int points_value[2][6] = {{1000, 200, 300, 400, 500, 600},  // Three
                              {100,    0,   0,   0,  50,  0}};   // One
    for (int i: dice) {
        ++score_value[i - 1];
    }

    for (int i = 0; i < 6; i++) {
        while (score_value[i]) {
            // Three.
            if (score_value[i] >= 3) {
                score_value[i] -= 3;
                points += points_value[0][i];
            }
            // One.
            else {
                --score_value[i];
                points += points_value[1][i];
            }
        }
    }
    return points;
}
int main(){
   score({ 1, 1, 1, 3, 1}) ;
}
