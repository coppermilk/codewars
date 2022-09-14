// [Kata] https://www.codewars.com/kata/588417e576933b0ec9000045/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Simple Fun #1: Seats in Theater.

int seats_in_theater(const int &total_col, const int &total_row, const int &col, const int &row) {
    /*The number of people who sit strictly behind you and in your column or to the left.*/

    return (total_col - col + 1) * (total_row - row);
}

int main() {
    /*Tests.*/

    seats_in_theater(60, 100, 60, 1); //Equals 99
    return 0;
}
