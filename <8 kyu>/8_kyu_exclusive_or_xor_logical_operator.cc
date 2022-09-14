// [Kata] https://www.codewars.com/kata/56fa3c5ce4d45d2a52001b3c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Exclusive "or" (xor) Logical Operator.

bool xorf(bool a, bool b){
    /*Returning true if exactly one of the two expressions evaluate to true, false otherwise.*/

    return a ^ b;
}

int main() {
    /*Tests.*/

    xorf(false, false);
    return 0;
}
