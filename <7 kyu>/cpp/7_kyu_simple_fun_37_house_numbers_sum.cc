// [Kata] https://www.codewars.com/kata/58880c6e79a0a3e459000004/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Simple Fun #37: House Numbers Sum.

#include <vector>

int house_numbers_sum(const std::vector<int> &arr){
    /*Return House Numbers Sum.*/

    unsigned long len = arr.size();
    int sum = 0;
    for(unsigned long i = 0; i < len && arr[i]; ++i){
            sum+=arr[i];
    }
    return sum;
}

int main() {
    /*Tests.*/

    house_numbers_sum({5, 1, 2, 3, 0, 1, 5, 0, 2});
}