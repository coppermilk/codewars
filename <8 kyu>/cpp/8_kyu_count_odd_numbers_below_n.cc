// [Kata] https://www.codewars.com/kata/59342039eb450e39970000a6/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Count Odd Numbers below n

int odd_count(int n){
    /*Return the number of positive odd numbers below n.*/

    return n / 2;
}

int odd_count2(int n){
    /*Return the number of positive odd numbers below n.*/

    return n >> 1;
}

int main(){
    /*Tests.*/

    odd_count(988);
    odd_count2(988);
    return 0;
}