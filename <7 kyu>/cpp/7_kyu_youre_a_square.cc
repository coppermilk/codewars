// [Kata] https://www.codewars.com/kata/54c27a33fb7da0db0100040e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu You're a square!

bool is_square(const int &n){
    /*Is number perfect square.*/

    int perfect_square = 0;
    for(int i = 1; perfect_square < n; ++i){
        perfect_square = i * i;
    }
    return perfect_square == n;
}

int main() {
    /*Tests.*/

    is_square(21);
    is_square(49);
    return 0;
}