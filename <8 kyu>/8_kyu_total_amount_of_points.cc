// [Kata] https://www.codewars.com/kata/5bb904724c47249b10000131/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Total amount of points.

#include <array>
#include <string>

int points(const std::array<std::string, 10>& games) {
    /*Counts the points of our team in the championship.*/

    // There are 10 matches in the championship.
    // 0 <= x <= 4
    // 0 <= y <= 4
    int points = 0;
    for(auto& game : games){
        if(game[0] > game[2]){
            points +=3;
        }else if(game[0] == game[2]){
            ++points;
        }
    }
    return points;
}

int main(){
    /*Tests.*/

    points(std::array<std::string, 10>{"1:0","2:0","3:0","4:0","2:1","3:1","4:1","3:2","4:2","4:3"});
    return 0;
}