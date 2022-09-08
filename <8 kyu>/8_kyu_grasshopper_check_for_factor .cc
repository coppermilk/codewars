// [Kata] https://www.codewars.com/kata/55cbc3586671f6aa070000fb/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <iostream>

bool checkForFactor(int base, int factor) {
    /*Function should test if the factor is a factor of base.*/

    return !(base % factor);
}

int main(){
    for(int i = 1;i < 10; ++i){
        for(int j = 1; j < 10; ++j){
            std::cout << "{"<< i << ", " << j << "} " << checkForFactor(i, j) << std::endl;
        }
    }
    return 0;
}