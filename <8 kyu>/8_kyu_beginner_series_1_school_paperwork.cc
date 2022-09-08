// [Kata] https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <cstdlib>

int paperwork(int n, int m){
    /*Classmates copy some paperwork for them.
      There are 'n' classmates and the paperwork has 'm' pages.
      Calculate how many blank pages need. If n < 0 or m < 0 return 0.*/

    if(n <= 0 || m <= 0){
        return 0;
    }
    return n * m;
}

int main(){
    // Test.
    paperwork(rand() % 10, rand() % 10);
    paperwork(rand() % 10, -1);
    return 0;
}