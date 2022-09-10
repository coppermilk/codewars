// [Kata] https://www.codewars.com/kata/56dec885c54a926dcd001095/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Opposite number

#include <iostream>
int opposite(const int &number)
{
    return -number;
}

int main(){
    for(int i = -3; i < 3; ++i){
        std::cout << i << " " << opposite(i) << std::endl;
    }
    return 0;
}