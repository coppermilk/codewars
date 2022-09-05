// [Kata] https://www.codewars.com/kata/52f787eb172a8b4ae1000a34/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>

// First solution.
long zeros(long n) {
    /*Return number of trailing zeros in n!; highest power of 5 dividing n!.
     More information: http://oeis.org/A027868 */

    if (n < 5) {
        return 0;
    }else{
        return n/ 5 + zeros(n/5);
    }
}

// Second solution.
long zeros2(long n){
    /*Return number of trailing zeros in n!; highest power of 5 dividing n!.
    More information: http://oeis.org/A027868 */
    long result = 0;
    while (n){
        result += (n/=5);
    }
    return result;
}

int main() {
    // Test #1.
    for(int i = 0; i < 10; ++i){
        std::cout << zeros(i) << std::endl;
    }
    // Test #2.
    std::cout << zeros(1000000000) << std::endl;

    // Test #3.
        for(int i = 0; i < 10; ++i){
            std::cout << zeros2(i) << std::endl;
        }
    // Test #4.
        std::cout << zeros2(1000000000) << std::endl;

    return 0;
}
