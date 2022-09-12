// [Kata] https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// <8 kyu> Century From Year.

int centuryFromYear(const int &year){
    /*Given a year, return the century it is in.*/

    return (year + 99) / 100 ;
}

int main(){
    /*Tests.*/

    centuryFromYear(1990);
}