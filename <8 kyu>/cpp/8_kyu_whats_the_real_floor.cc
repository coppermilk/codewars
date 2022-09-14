// [Kata] https://www.codewars.com/kata/574b3b1599d8f897470018f6/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu What's the real floor?

int getRealFloor(int f) {
    /*Floor in the american system returns the floor in the european system.*/

    return f <= 0 ? f
                  : f > 13 ? f - 2
                           : --f;
}

int main(){
    /*Tests.*/
    int k = getRealFloor(13);
}