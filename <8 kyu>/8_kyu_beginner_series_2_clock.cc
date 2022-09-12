// [Kata] https://www.codewars.com/kata/55f9bca8ecaa9eac7100004a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// <8 kyu> Beginner Series #2 Clock.

int past(const int &h, const int &m, const int &s) {
    /*Returns the time since midnight in milliseconds.*/

    int result = 0;

    // To seconds.
    result += h * 60 * 60;
    result += m * 60;
    result += s;

    // To milliseconds.
    result *= 1000;
    return result;
}

int main(){
    /*Tests.*/

    past(1,1,1);
}