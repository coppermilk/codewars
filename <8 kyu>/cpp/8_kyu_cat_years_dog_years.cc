// [Kata] https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Cat years, Dog years.

#include <vector>

std::vector<int> humanYearsCatYearsDogYears(const int &humanYears) {
    /*Return their respective ages now as [humanYears,catYears,dogYears]*/

    const int c1 = 15;
    const int c2 = 4;
    const int c3plus = 4;
    const int d1 = 15;
    const int d2 = 5;
    const int d3plus = 5;

    switch (humanYears) {
        case 1:
            return {humanYears, c1, d1};
        case 2:
            return {humanYears, c1 + c2, d1 + d2};
        default:
            return {humanYears, c1 + c2 + ((humanYears - 2) * c3plus), d1 + d2 + ((humanYears - 2) * d3plus)};
    }
}

int main(){
    /*Tests.*/

    humanYearsCatYearsDogYears(42);
    return 0;
}