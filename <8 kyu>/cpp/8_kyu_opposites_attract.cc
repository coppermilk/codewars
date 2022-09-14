// [Kata] https://www.codewars.com/kata/555086d53eac039a2a000083/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Opposites Attract

bool lovefunc(const int &f1,const int &f2) {
    /*Take the number of petals of each flower and return true if they are in love and false if they aren't.*/
    return f1 % 2 != f2 % 2;
}

int main(){
    /*Tests.*/

    lovefunc(1, 2);
    return 0;
}