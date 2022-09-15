// [Kata] https://www.codewars.com/kata/5763bb0af716cad8fb000580/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Count the number of cubes with paint on.

int countSquares(int cuts) {
    /*Return the number of smaller cubes created by the cuts that have at least one red face.*/

    if (!cuts) {
        return 1;
    } else {
        return ((cuts + 1) * (cuts + 1) * (cuts + 1)) - ((cuts - 1) * (cuts - 1) * (cuts - 1));
    }
}


int main() {
    /*Tests.*/

    countSquares(23);
    return 0;
}