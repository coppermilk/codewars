// [Kata] https://www.codewars.com/kata/568018a64f35f0c613000054/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Finish Guess the Number Game.

#include <stdexcept>
#include <iostream>

class Guesser {
public:
    Guesser(int number, int lives)
            : number(number), lives(lives) {}

    bool guess(int n) {
        if (lives) {
            if (n == number) {
                return true;
            } else {
                --lives;
            }
        } else {
            throw std::logic_error("Guess more than the limit.");
        }
        return false;
    }

private:
    int number, lives;
};

int main() {
    Guesser guesser(10, 2);
    guesser.guess(1);
    guesser.guess(2);
    try {
        guesser.guess(10);
    } catch (const std::exception &e) {
        std::cout << e.what();
    }

}