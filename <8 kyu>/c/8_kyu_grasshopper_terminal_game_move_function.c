// [Kata] https://www.codewars.com/kata/563a631f7cbbc236cf0000c2/train/c
// [User] https://www.codewars.com/users/coppermilk
// <8 kyu> Grasshopper - Terminal game move function.

unsigned char move(unsigned char pos, unsigned char roll){
    /*Takes the current position of the hero and the roll (1-6) and return the new position.*/

    return pos + (2 * roll);
}

int main(){
    /*Tests*/

    move(0, 3);
}