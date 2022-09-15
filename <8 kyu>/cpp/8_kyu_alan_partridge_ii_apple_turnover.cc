// [Kata] https://www.codewars.com/kata/580a094553bd9ec5d800007d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Alan Partridge II - Apple Turnover

#include <string>

std::string apple(int x) {
    /*Your job is simple, if x squared is more than 1000, return It's hotter than the sun!!,
      else, return Help yourself to a honeycomb Yorkie for the glovebox.*/

    return x >= 32 ? "It's hotter than the sun!!" : "Help yourself to a honeycomb Yorkie for the glovebox.";
}

int main() {
    /*Tests.*/

    apple(2);
    return 0;
}