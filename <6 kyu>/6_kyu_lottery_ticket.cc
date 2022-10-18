// [Kata] https://www.codewars.com/kata/55b3425df71c1201a800009c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Statistics for an Athletic Association.

#include <string>
#include <vector>
#include <iostream>

typedef std::pair<std::string, int> p;
std::string bingo(std::vector<std::pair<std::string, int>> tickets, int win){
    int wins = 0;
    for(const auto& ticket : tickets){
        for(auto ch : ticket.first){
            if(ch == ticket.second){
                ++wins;
                // break;
            }
        }
    }
    return wins >= win ? "Winner!" : "Loser!";
}

int main(){
    std::cout << bingo({p("ABC", 65), p("HGR", 74), p("BYHT", 74)}, 2);
}