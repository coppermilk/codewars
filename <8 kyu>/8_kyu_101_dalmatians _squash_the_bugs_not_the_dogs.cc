// [Kata] https://www.codewars.com/kata/56f6919a6b88de18ff000b36/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu 101 Dalmatians - squash the bugs, not the dogs!

#include <vector>
#include <string>

// First solution.
std::string howManyDalmatians(const int &number) {
    /*Bug fix.*/

    std::vector<std::string> dogs = {"Hardly any", "More than a handful!", "Woah that's a lot of dogs!",
                                     "101 DALMATIONS!!!"};
    switch (number) {
        case 0 ... 10:
            return dogs[0];
        case 11 ...50:
            return dogs[1];
        case 101:
            return dogs[3];
        default:
            return dogs[2];

    }
}

// Second solution.
std::string howManyDalmatians2(const int &number) {
    /*Bug fix.*/

    std::vector<std::string> dogs = {"Hardly any", "More than a handful!", "Woah that's a lot of dogs!",
                                     "101 DALMATIONS!!!"};
    return number <= 10 ? dogs[0]
                        : number <= 50 ? dogs[1]
                                       : number == 101 ? dogs[3]
                                                       : dogs[2];
}

int main() {
    /*Tests.*/
    howManyDalmatians(51);
}