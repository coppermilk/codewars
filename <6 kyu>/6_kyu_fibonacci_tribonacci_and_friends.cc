// [Kata] https://www.codewars.com/kata/556e0fccc392c527f20000c5/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Fibonacci, Tribonacci and friends.

#include <vector>

std::vector<int> xbonacci(std::vector<int> signature, int n) {
    /* Function that takes a signature of X elements - and remember each next
     * element is the sum of the last X elements - and returns the first n
     * elements of the so seeded sequence.*/
    std::vector<int> ans;
    for (unsigned int i = 0; i < n; ++i) {
        if (i < signature.size()) {
            ans.push_back(signature[i]);
        } else {
            int sum = 0;
            for (int j = 1; j <= signature.size(); ++j) {
                sum += ans[i - j];
            }
            ans.push_back(sum);
        }
    }
    return ans;
}

int main(){
    /*Tests.*/
    std::vector<int> signature = {0, 1};
    std::vector<int> expected = {0,1,1,2,3,5,8,13,21,34};
    xbonacci(signature, 10);
    return 0;
}