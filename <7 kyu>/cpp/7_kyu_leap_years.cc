// [Kata] https://www.codewars.com/kata/526c7363236867513f0005ca/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Leap Years.

// First solution.
bool IsLeapYear(int year) {
    if (!(year % 4)) {
        if (!(year % 400)) {
            return true;
        } else if (!(year % 100)) {
            return false;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    /*Tests.*/

    IsLeapYear(1999);
}