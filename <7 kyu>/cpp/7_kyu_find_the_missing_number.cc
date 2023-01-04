// [Kata] https://www.codewars.com/kata/57f5e7bd60d0a0cfd900032d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Find the Missing Number

#include <vector>
#include <numeric>
using namespace std;

int missingNo(vector<int> arr){
    /* Find the Missing Number in arr.size() == 101 */
    return 5050 - std::accumulate(arr.begin(), arr.end(), 0);;
}