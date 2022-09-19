// [Kata] https://www.codewars.com/kata/5a87449ab1710171300000fd/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Tidy Number (Special Numbers Series #9).

bool tidyNumber(int number) {
    /*Find if it is Tidy or not .*/

    // Max tidy number is 9.
    int previous = 9;
    int current;

    while (number) {
        current = number % 10;
        number /= 10;
        if (current > previous) {
            return false;
        }
        previous = current;
    }
    return true;
}

int main(){
    /*Tests.*/

    tidyNumber(23935);
}