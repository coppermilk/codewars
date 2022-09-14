// [Kata] https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/train/c
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Expressions Matter.

// First solution.
int expression_matter(int a, int b, int c) {
    /* Try every combination of a,b,c with [*+()] , and return the Maximum Obtained.*/

    #define COMBINATION 4
    int f[COMBINATION] = {a + b + c, a * (b + c), (a + b) * c, a * b * c};
    int max = f[0];
    for(int i = 0; i < COMBINATION; ++i){
        if (max < f[i]){
            max = f[i];
        }
    }
    return max;
}

int main(){
    /*Tests.*/

    expression_matter(1, 2, 3);
    return 0;
}