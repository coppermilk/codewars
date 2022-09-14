// [Kata] https://www.codewars.com/kata/563a631f7cbbc236cf0000c2/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// <8 kyu> Grasshopper - Terminal game move function.
int move(const int &position, const int &roll) {
    /*Takes the current position of the hero and the roll (1-6) and return the new position.*/

    return position + (2 *roll);
}

int main(){
    /*Tests*/

    move(0, 3);
}