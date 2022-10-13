// [Kata] https://www.codewars.com/kata/515f51d438015969f7000013/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Pyramid Array.

#include <vector>
#include <cstdlib>

std::vector<std::vector<int>> pyramid(std::size_t n) {
    /*Returns an Array of ascending length subarrays.*/
    std::vector<std::vector<int>> ans;
    for(unsigned long i = 1; i <= n; ++i){
        ans.emplace_back(i, 1);
    }
    return ans;
}

int main(){
    /*Tests.*/
    pyramid(3);
    return 0;
}