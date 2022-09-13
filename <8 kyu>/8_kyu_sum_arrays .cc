// [Kata] https://www.codewars.com/kata/53dc54212259ed3d4f00071c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Sum Arrays.

#include <vector>
#include <numeric>

template <typename T>
T sum(std::vector<T> nums) {
    /*Return sum array.*/

    return std::accumulate(nums.begin(), nums.end(), 0.0);
}

int main(){
    /*Tests.*/
    std::vector<double> d ={2.3, 6, 9.9};
    std::vector<int> i ={2, 6, 9};
    auto sum1 = sum(d);
    auto sum2 = sum(i);
    return 0;
}