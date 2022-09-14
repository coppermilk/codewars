// [Kata] https://www.codewars.com/kata/5ce9c1000bab0b001134f5af/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Quarter of the year.

// First solution.
int quarter_of(const int &month){
    /*Given a month as an integer from 1 to 12, return to which
      quarter of the year it belongs as an integer number.*/
    return (month + 2) / 3;
}

// Second solution.
int quarter_of2(const int &month){
    /*Given a month as an integer from 1 to 12, return to which
      quarter of the year it belongs as an integer number.*/

    switch (month){
        case 1 ... 3:
            return 1;
        case 4 ... 6:
            return 2;
        case 7 ... 9:
            return 3;
        default:
            return 4;
    }
}

int main() {
    /*Tests.*/

    quarter_of(12);
    quarter_of2(12);
    return 0;
}