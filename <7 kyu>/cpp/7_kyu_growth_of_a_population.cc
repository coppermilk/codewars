// [Kata] https://www.codewars.com/kata/563b662a59afc2b5120000c6/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Growth of a Population.

#include <iostream>

class Arge {
public:
    static int nbYear(int p0, double percent, int aug, int p) {
        /*Return n number of entire years needed to get a population greater or equal to p.*/

        int year = 0;
        while (p0 < p){
            p0 = (int)(p0 * ((percent + 100)/100)) + aug;
            ++year;
        }
        return year;
    }
};

int main() {
    /*Tests.*/

    std::cout << Arge::nbYear(1500, 5, 100, 5000);
}