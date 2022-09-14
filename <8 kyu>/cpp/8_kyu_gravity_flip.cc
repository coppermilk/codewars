// [Kata] https://www.codewars.com/kata/5f70c883e10f9e0001c89673/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Gravity Flip.

#include <vector>
#include <algorithm>

std::vector<int> flip(const char dir, const std::vector<int>& arr) {
    /*Find out how many cubes are in each of the n columns after Bob switches the gravity.*/

    auto ans = arr;
    switch (dir){
        case 'R':
            std::sort(ans.begin(), ans.end(), std::less());
            break;
        case 'L':
            std::sort(ans.begin(), ans.end(), std::greater());
            break;
        default:
            break;
    }
    return ans;
}

int main(){
    /*Tests.*/

    flip('R', { 3, 2, 1, 2 });
}