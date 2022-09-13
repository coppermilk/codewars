// [Kata] https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Invert values

#include <vector>
#include <functional>

std::vector<int> invert(std::vector<int> values){
    /*Return the additive inverse of each.*/

    for (int &value : values){
        value *= -1;
    }
    return values;
}

std::vector<int> invert2(std::vector<int> values){
    /*Return the additive inverse of each.*/

    transform(values.begin(), values.end(), values.begin(), std::negate());
    return values;
}
int main(){
    /*Tests.*/

    invert({1, 2, -2, -8});
    invert({1, 2, -2, -8});
    return 0;
}