// [Kata] https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Basic Mathematical Operations

int basicOp(char op, int val1, int val2) {
    /*Return result of numbers after applying the chosen operation.*/

    switch(op){
        case '+':
            return val1 + val2;
        case '-':
            return val1 - val2;
        case '*':
            return val1 * val2;
        default:
            // Can't divide by 0.
            return val1 ? val1 / val2 : 0;
    }
}

int main(){
    /*Tests.*/

    basicOp('-', 8, 4);
    return 0;
}