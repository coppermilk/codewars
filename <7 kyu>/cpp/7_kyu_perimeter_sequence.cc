// [Kata] https://www.codewars.com/kata/589519d1f0902e01af000054/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Perimeter sequence.

int perimeter_sequence(int a, int n) {
    /*Perimeter of the nth shape in the sequence (n ≥ 1) ?*/
    return n * 4 * a;
}

int main(){
    /*Tests.*/
    perimeter_sequence(3, 1);
}