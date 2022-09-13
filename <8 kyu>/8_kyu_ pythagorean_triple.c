// [Kata] https://www.codewars.com/kata/5951d30ce99cf2467e000013/train/c
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Pythagorean Triple

#include <stdbool.h>

bool pythagorean_triple(const unsigned sides[3]) {
    /*Check pythagorean triple.*/
    unsigned long long a = sides[0];
    unsigned long  long b = sides[1] ;
    unsigned long long  c = sides[2];

    a = a * a;
    b = b * b;
    c = c * c;
    unsigned long long ab = a + b;

    return a + b == c;
}

int main(){
    /*Tests.*/

    unsigned sides[] = {10360, 12950, 7770};
    bool b = pythagorean_triple(sides);
    return 0;
}
