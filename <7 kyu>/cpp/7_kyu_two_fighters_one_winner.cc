// [Kata] https://www.codewars.com/kata/577bd8d4ae2807c64b00045b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Two fighters, one winner.

#include <string>
#include <iostream>
#include <utility>

class Fighter {
private:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack) {
        this->name = std::move(name);
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter() = default;;

    std::string getName() {
        return name;
    }

    [[nodiscard]] int getHealth() const {
        return health;
    }

    [[nodiscard]] int getDamagePerAttack() const {
        return damagePerAttack;
    }

    void setHealth(int value) {
        health = value;
    }
};

void attack(Fighter *attacking, Fighter *defending) {
    /*Attack defending.*/

    defending->setHealth(defending->getHealth() - attacking->getDamagePerAttack());
}

std::string declareWinner(Fighter *fighter1, Fighter *fighter2, const std::string& firstAttacker) {
    /*Returns the name of the winner in a fight between two fighters.*/

    Fighter *first = fighter1->getName() == firstAttacker ? fighter1 : fighter2;
    Fighter *second = fighter1->getName() != firstAttacker ? fighter1 : fighter2;

    while (true) {
        attack(first, second);
        if (second->getHealth() <= 0) {
            return first->getName();
        }
        attack(second, first);
        if (first->getHealth() <= 0) {
            return second->getName();
        }
    }
}

int main() {
    /*Tests.*/

    Fighter fighter1("Lew", 10, 2);
    Fighter fighter2("Harry", 5, 4);

    std::string actual = declareWinner(&fighter1, &fighter2, "Harry");
    std::cout << actual;
}