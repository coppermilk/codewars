// [Kata] https://www.codewars.com/kata/55d24f55d7dd296eb9000030/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Grasshopper - Summation

int summation(int num){
    /*summation of every number from 1 to num.*/

    return (num * (num + 1)) /2;
}

int main(){
    /*Tests.*/

    summation(39);
    summation(4645);
    return 0;
}