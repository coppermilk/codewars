// [Kata] https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Sum of differences in array.

#include <vector>
#include <algorithm>

int sumOfDifferences(std::vector<int> arr) {
    /*Sum the differences between consecutive pairs in the array in descending order.*/

    if(arr.empty()){
        return 0;
    }else{
        int sum = 0;
        unsigned long size = arr.size() - 1;

        std::sort(arr.begin(), arr.end(), std::greater());
        for (unsigned long i = 0; i < size; ++i) {
            sum += arr[i] - arr[i + 1];
        }
        return sum;
    }
}

int main() {
    /*Tests.*/

    sumOfDifferences({});
}