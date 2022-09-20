// [Kata] https://www.codewars.com/kata/628e3ee2e1daf90030239e8a/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Interlocking Binary Pairs.

bool interlockable(const unsigned long long &a, const unsigned long long &b) {
    /*Checks if two non-negative integers make an "interlocking binary pair".*/

    return !(a & b);
}

int main(){
    /*Tests.*/

    interlockable(9, 4);
}