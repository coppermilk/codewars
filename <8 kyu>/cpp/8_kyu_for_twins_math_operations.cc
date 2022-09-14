// [Kata] https://www.codewars.com/kata/59c287b16bddd291c700009a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu For Twins: 2. Math operations.

int ice_brick_volume(int radius, int bottle_length, int rim_length) {
    /*And return volume of ice brick that magician managed to put into a bottle.*/

    return radius * radius * (bottle_length - rim_length) * 2;
}

int main() {
    /*Tests.*/

    ice_brick_volume(5, 30, 7);
}