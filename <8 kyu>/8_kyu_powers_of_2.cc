// [Kata] https://www.codewars.com/kata/57a083a57cb1f31db7000028/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Powers of 2.

#include <vector>
#include <cstdint>

std::vector<uint64_t> powers_of_two(int n) {
    /*Returns a list of all the powers of 2 with the exponent ranging from 0 to n (inclusive).*/

    uint64_t k = 1;
    std::vector<uint64_t> ans;

    for(int i = 0; i <= n; ++i){
        ans.push_back(k << i);
    }
    return ans;
}

int main(){
    /*Tests.*/

    powers_of_two(2);
}